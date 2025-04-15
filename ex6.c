#include <limits.h>
#include <stdio.h>

/*
 *  6) Escreva um programa em C que leia um horário (hora e minuto) e imprima
 *  quantos segundos se passaram desde o início do dia.
 * */

int main(void) {
  int hour, minutes;

  printf("Digite hora e minutos separados por espaço (ex: 1 30): ");
  scanf("%d %d", &hour, &minutes);

  if (hour < 0 || hour > 23 || minutes < 0 || minutes > 59) {
    printf("Horário inválido!\n");
    return 1;
  }

  int secs = (hour * 3600) + (minutes * 60);

  printf("Seu horário: %d:%d\nDesde o início do dia se passaram %d segundos.\n", hour, minutes, secs);

  return 0;
}
