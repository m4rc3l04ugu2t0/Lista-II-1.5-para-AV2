#include <stdlib.h>
#include <stdio.h>

/*
 * 1) Escreva um programa em C que leia a base e a altura de um retângulo,
 * imprimindo seu perímetro e sua área.
 * */

void flush_input(void) {
  char c;
  while ((c = getchar()) != '\n' && c != EOF);
}

void check_ret(int ret) {
  if (ret == 0 || ret == EOF) {
    fprintf(stderr, "Entrada inválida!\n");
    exit(EXIT_FAILURE);
  }
}

int main(void) {
  float base;
  float height;

  // ler a base e a altura de um retângulo
  printf("Digite a base do retângulo:\n");
  check_ret(scanf("%f", &base));
  flush_input();

  printf("Digite a altura do retângulo:\n");
  check_ret(scanf("%f", &height));
  flush_input();

  // imprimindo seu perímetro e sua área
  printf("Perímetro do retângulo: %.2f\n", 2 * (base + height));
  printf("Área do retângulo:      %.2f\n", base * height);

  return 0;
}

