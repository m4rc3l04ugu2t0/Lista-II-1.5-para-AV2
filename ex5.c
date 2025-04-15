#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
 *  5) Escreva um programa em C que leia os valores de x1, x2 e x3, e imprima o
 *  valor de x.
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
  printf("Entre com x1: ");
  float x1 = get_num();
  if (isnan(x1)) return 1;

  printf("Entre com x2: ");
  float x2 = get_num();
  if (isnan(x2)) return 1;
  

  printf("Entre com x3: ");
  float x3 = get_num();
  if (isnan(x3)) return 1;

  float result = x1 + (x2 / (x3 + x1)) + 2 * (x1 - x2);

  printf("Resultado:\n%.2f + (%.2f / (%.2f + %.2f)) + 2 * (%.2f - %.2f) = %.2f", x1, x2, x3, x1, x1, x2, result);
  return 0;
}
