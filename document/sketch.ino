#include <DHT.h>

//PINOS

// Definições do DHT22
#define pinoDHT 23
#define modelo DHT22

DHT dht(pinoDHT, modelo);

// Definições do HC-SR04
#define trigPin 23
#define echoPin 22
#define pinLED 17

// Definições do PIR
#define pinPIR 17

// Definições do LDR
#define ldrPin 34

//INICIALIZACAO DE VARIÁVEIS

void setup() {
    Serial.begin(9600);

    // Inicialização do DHT
    dht.begin();

    // Inicialização do HC-SR04
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    
    // Inicialização do PIR
    pinMode(pinPIR, INPUT);
    
    // Inicialização do LED
    pinMode(pinLED, OUTPUT);
    
    // Inicialização do LDR
    pinMode(ldrPin, INPUT); // Definindo o pino do LDR como entrada
}

//EXECUTAR REPETICAO DO PROGRAMA

void loop() {
    // Leitura do DHT
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    //Verifica se a leitura de umidade e de temperatura nao sao números
    if (isnan(h) || isnan(t)) {
        Serial.println("Falha ao ler do sensor DHT!");
    } else {
        Serial.print("Umidade: ");
        Serial.print(h);
        Serial.print(" %\t");
        Serial.print("Temperatura: ");
        Serial.print(t);
        Serial.println(" *C");

        // Se a temperatura for maior que trinta, emitirá um alerta de temperatura alta.
        // Se a temperatura for menor que trinta, printará que está dentro do normal

        if (t > 30.0) {
            Serial.println("Alerta: Temperatura alta!");
        } else {
            Serial.println("Temperatura dentro do normal.");
        }
    }

    // Leitura do HC-SR04
    long duration;
    int distance;

    //Envia pulso de 10 microsegundos para o trig
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    //Calcula o tempo de duracao de pulso de retorno
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;

    //Exibe a distancia no monitor
    Serial.print("Distância: ");
    Serial.print(distance);
    Serial.println(" cm");

    //Distancia em cm
    if (distance < 20) {
        digitalWrite(pinLED, HIGH);
    } else {
        digitalWrite(pinLED, LOW);
    }

    // Leitura do PIR
    int pirState = digitalRead(pinPIR);

    if (pirState == HIGH) {  //movimento detectado
        digitalWrite(pinLED, HIGH); //liga o led
        Serial.println("Movimento detectado!");
    } else { //nenhum movimento, logo nao liga o led
        digitalWrite(pinLED, LOW); //desliga o led
    }

    // Leitura do LDR
    int ldrValue = analogRead(ldrPin); 
    Serial.print("Nível de Luz: "); 
    Serial.println(ldrValue); //Exibe valor lido no monitor

    // AGUARDA 500 SEGUNDOS PARA LER NOVAMENTE
    delay(500);
}

   