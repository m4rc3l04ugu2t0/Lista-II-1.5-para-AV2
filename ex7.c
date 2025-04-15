#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/*
 *  7) Escreva um programa em C que leia um número inteiro qualquer e determine
 * se o número lido é divisível por 3 ou não. Use o operador ternário.
 * */

int get_num(void) {
    char buf[32];

    if (fgets(buf, sizeof(buf), stdin) == NULL) {
        fprintf(stderr, "Erro na leitura!\n");
        return INT_MIN;
    }

    char *endptr;
    long num = strtol(buf, &endptr, 10);

    if (endptr == buf || *endptr != '\n') {
        fprintf(stderr, "Número inválido!\n");
        return INT_MIN;
    }

    if (num < INT_MIN || num > INT_MAX) {
      fprintf(stderr, "Número fora do intervalo de int!"); 
    }

    return (int)num;
}

int main(void) {
  printf("Digite um número inteiro: ");
  int num = get_num();

  num % 3 == 0 ? printf("Número divisivel por 3.") : printf("Número não divisivel por 3.");

  return 0;
}
