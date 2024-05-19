/*Faça um programa para calcular o fatorial de um número dado. O fatorial de um número n é n × (n − 1) × (n − 2) × . . . × 1, por definição o fatorial de 0 e 1 é 1.*/
#include <stdio.h>

int main() {
  int num, resultado, i;
  int fatorial = 1;
  printf("Digite o número que deseja calcular o fatorial: ");
  scanf("%d", &num);

  if (num == 0 || num == 1) {
    resultado = 1;
    printf("O fatorial de %d é: %d\n", num, resultado);
  } else {
      if (num < 0) {
          printf("Sem fatorial para números negativos. \n");
      } else {
        for(i=2; i<=num; i++) {
          fatorial = fatorial * i;
        }
          resultado = fatorial;
          printf("O fatorial de %d é: %d\n", num, resultado);
      }
  }
  return 0;
}