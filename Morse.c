#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#define LED_PIN 13
#define BUZZER_PIN 21

void ligar() {
    gpio_put(LED_PIN, 1);
    gpio_put(BUZZER_PIN, 1);
}

void desligar() {
    gpio_put(LED_PIN, 0);
    gpio_put(BUZZER_PIN, 0);
}

void delay_ms(uint32_t milliseconds) {
    sleep_ms(milliseconds);
}

void sinal(bool ponto) {
    ligar();
    delay_ms(ponto ? 200 : 800); // 200ms para ponto, 800ms para traço
    desligar();
    delay_ms(125); // Intervalo entre pontos e traços dentro de uma mesma letra
}

void sos() {
    for (int i = 0; i < 3; i++) {
        sinal(true); // Três pontos
    }
    delay_ms(250); // Intervalo entre letras
    for (int i = 0; i < 3; i++) {
        sinal(false); // Três traços
    }
    delay_ms(250); // Intervalo entre letras
    for (int i = 0; i < 3; i++) {
        sinal(true); // Três pontos
    }
    delay_ms(3000); // Intervalo de 3 segundos antes de reiniciar o ciclo
}

int main() {
    stdio_init_all();
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);

    while (true) {
        sos();
    }

    return 0;
}
