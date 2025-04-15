#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
 *  4) Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra
 *  10% para o garçom. Escreva um programa em C que leia o valor gasto com
 *  despesas realizadas em um restaurante e imprima o valor total com a gorjeta
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
  printf("Valor gasto: R$ ");
  float bill = get_num();

  if (isnan(bill)) return 1;

  float tip = bill * 0.10f;

  float total = bill + tip;

   printf("Gorjeta (10%%): R$ %.2f\n", tip);
   printf("Valor total a pagar: R$ %.2f\n", total);

  return 0;
}
