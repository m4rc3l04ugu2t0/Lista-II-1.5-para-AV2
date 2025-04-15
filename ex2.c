#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/*
 *  2) Escreva um programa em C que leia dois números inteiros e imprima o
 *  dividendo, o divisor, o quociente e o resto.
 * */

// ler números
int get_num(void) {
    char buf[32];
    printf("Digite um número:\n");

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
    int num1 = (int)get_num();
    if (num1 == INT_MIN) return 1;

    int num2 = (int)get_num();
    if (num2 == INT_MIN) return 1;

    if (num2 == 0) {
        fprintf(stderr, "Erro: divisão por zero!\n");
        return 1;
    }

    int quotient = num1 / num2;
    int rest = num1 % num2;

    // Imprimindo dividendo, divisor, quociente e o resto.  
    printf("%d / %d = %d\n", num1, num2, quotient);
    printf("Dividendo: %d\nDivisor: %d\nQuociente: %d\nResto: %d\n",
           num1, num2, quotient, rest);

    return 0;
}

