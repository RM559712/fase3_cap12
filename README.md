# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href= "https://www.fiap.com.br/"><img src="assets/images/logo-fiap.png" alt="FIAP - Faculdade de Informática e Admnistração Paulista" border="0" width=40% height=40%></a>
</p>

<br>

# Cap 12 - Eletrônica de uma IA

## 👨‍👩 Grupo

Grupo de número <b>9</b> formado pelos integrantes mencionados abaixo.

## 👨‍🎓 Integrantes: 
- <a href="https://www.linkedin.com/in/cirohenrique/">Ciro Henrique</a> ( <i>RM559040</i> )
- <a href="javascript:void(0)">Enyd Bentivoglio</a> ( <i>RM560234</i> )
- <a href="https://www.linkedin.com/in/marcofranzoi/">Marco Franzoi</a> ( <i>RM559468</i> )
- <a href="https://www.linkedin.com/in/rodrigo-mazuco-16749b37/">Rodrigo Mazuco</a> ( <i>RM559712</i> )

## 👩‍🏫 Professores:

### Tutor(a) 
- <a href="https://www.linkedin.com/in/lucas-gomes-moreira-15a8452a/">Lucas Gomes Moreira</a>

### Coordenador(a)
- <a href="https://www.linkedin.com/in/profandregodoi/">André Godoi</a>

## 📜 Descrição

<b>Referência</b>: https://on.fiap.com.br/mod/assign/view.php?id=439232&c=11933

### Objetivo do projeto

O presente projeto tem como objetivo simular um sistema de sensores de umidade, temperatura, ultrassom, movimento e luz, conectados ao microcontrolador ESP32, para a criação de um sistema inteligente de monitoramento agrícola. A partir de dados coletados do meio ambiente, o sistema poderá otimizar  a irrigação, e controlar condições de acordo com o clima.

Desenho do circuito completo com os sensores utilizados:

![](https://github.com/RM559712/fase3_cap12/assets/images/image1.png)  
    
### Descrição do papel de cada sensor no sistema

1. DHT22 - Mede umidade e temperatura do ambiente constantemente, permitindo assim aumentar ou diminuir a irrigação de acordo com as condições apresentadas.
2. HC-SR04 - Sensor de ultrassom que monitora o nível de água disponível para irrigação, medindo a distância de líquidos em reservatórios.
3. PIR - Sensor de movimento para segurança e vigilância em áreas agrícolas.
4. LDR - Sensor de luz que monitora a intensidade da mesma e realiza o ajuste de irrigação com base na luminosidade.

### Como configurar e rodar o projeto no Wokwi e ESP32

Ao iniciar os estudos na plataforma Wokwi, o microcontrolador ESP32 foi selecionado. O projeto foi configurado em código C++ na aba sketch.ino, onde se define a pinagem, a inicialização, o programa e, por fim, o atraso entre cada rodagem. A library DHT.h foi instalada a fim de dar suporte na funcionalidade do sensor DHT. As funções do código podem ser encontradas em comentários no próprio arquivo do programa. Na aba de simulação da plataforma foi possível adicionar os sensores, LEDs, e resistores clicando no botão “+”, e conectá-los a partir de cada pino.

Para a rodagem do programa bastou apertar o botão de start na aba “simulation” e realizar a verificação dos dados no monitor.

### Testes realizados, com prints do Monitor Serial com mensagens de funcionamento.

Figura 1 - Inicialização do teste

![](https://github.com/RM559712/fase3_cap12/assets/images/image2.png)  

Figura 2 - Teste demonstrando o funcionamento correto do sensor HC-SR04 iluminando o LED à esquerda de quem lê, e os resultados de temperatura, umidade, distância e movimento printados no monitor.

![](https://github.com/RM559712/fase3_cap12/assets/images/image3.png)  

## 📁 Estrutura de pastas

Dentre os arquivos e pastas presentes na raiz do projeto, definem-se:

1. <b>assets</b>: Diretório para armazenamento de arquivos complementares da estrutura do projeto.
    - Diretório "images": Diretório para armazenamento de imagens.

2. <b>document</b>: Diretório para armazenamento de documentos relacionados ao projeto.

3. <b>README.md</b>: Documentação do projeto em formato markdown.

## 🔧 Como executar o código

Este projeto não possui conteúdos para serem executados.

## 🗃 Histórico de lançamentos

* 1.0.0 - 13/11/2024

## 📋 Licença

Desenvolvido pelo Grupo 9 para o projeto da fase 3 (<i>Cap 12 - A Eletrônica de uma IA</i>) da <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://fiap.com.br">Fiap</a>. Está licenciado sobre <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.</p>