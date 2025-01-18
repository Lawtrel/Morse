# Projeto PicoW Morse

Este projeto utiliza um Raspberry Pi Pico W para transmitir mensagens em código Morse. O dispositivo pode ser configurado para enviar sinais Morse através de um LED ou um buzzer.

## Funcionalidades

- Transmissão de mensagens em código Morse
- Configuração de velocidade de transmissão
- Suporte para LED e buzzer

## Requisitos

- Raspberry Pi Pico W
- LED ou buzzer
- Cabos jumper
- Protoboard

## Instalação

1. Clone o repositório para o seu Raspberry Pi Pico W:
    ```bash
    git clone https://github.com/seu-usuario/pico-w-morse.git
    ```
2. Navegue até o diretório do projeto:
    ```bash
    cd morse
    ```
3. Compile o projeto:
    ```bash
    cmake -S . -B build
    cmake --build build
    ```

## Uso

1. Conecte o LED e buzzer ao Raspberry Pi Pico W conforme o esquema de ligação fornecido.
2. Carregue o arquivo Morse.uf2 gerado na pasta build para o Raspberry Pi Pico.
3. O LED e o buzzer começarão a emitir o sinal SOS em código Morse.

## Contribuição

1. Faça um fork do repositório.
2. Crie uma branch para a sua feature:
    ```bash
    git checkout -b minha-feature
    ```
3. Commit suas mudanças:
    ```bash
    git commit -m 'Adiciona minha feature'
    ```
4. Envie para o repositório remoto:
    ```bash
    git push origin minha-feature
    ```
5. Abra um Pull Request.

## Licença

Este projeto está licenciado sob a Licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## Contato

Para mais informações, entre em contato pelo e-mail: leandro.goncaalves@gmail.com

## Compilação e Execução

1. Certifique-se de ter o SDK do Raspberry Pi Pico configurado em seu ambiente.
2. Clone o repositório para o seu Raspberry Pi Pico W:
    ```bash
    git clone https://github.com/seu-usuario/pico-w-morse.git
    ```
3. Navegue até o diretório do projeto:
    ```bash
    cd pico-w-morse
    ```
4. Compile o projeto:
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```
5. Carregue o binário gerado no Raspberry Pi Pico W.

6. Conecte o LED ou buzzer ao Raspberry Pi Pico W conforme o esquema de ligação fornecido.
7. Execute o programa principal no Raspberry Pi Pico W.

Para mais detalhes sobre a configuração do SDK e o processo de compilação, consulte a [documentação oficial do Raspberry Pi Pico](https://www.raspberrypi.org/documentation/microcontrollers/c_sdk.html).