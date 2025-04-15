#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
 *  3) Escreva um programa em C que leia uma temperatura em graus centígrados,
 *  e imprima a temperatura em graus Fahrenheit. 
 *
 * */

float get_num(void) {
    char buf[32];

    if (fgets(buf, sizeof(buf), stdin) == NULL) {
        fprintf(stderr, "Erro na leitura!\n");
        return NAN;
    }

    char *endptr;
    float num = strtof(buf, &endptr);

    if (endptr == buf || *endptr != '\n') {
        fprintf(stderr, "Entrada invalida!\n");
        return NAN;
    }

    return num;
}

int main(void) {

  /*
   *  A expressão "graus centígrados" é um termo obsoleto
   *  e incorrecto para referir-se à escala termométrica
   *  que mede a temperatura. O termo correto e actualmente
   *  utilizado é "graus Celsius"
   * */
  printf("Digite a temperatura em graus Celsius: ");
  float celsius = get_num();

  if (isnan(celsius)) return 1;

  float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

  printf("Temperatura em Fahrenheit: %.2f°F\n", fahrenheit);

  return 0;
}
