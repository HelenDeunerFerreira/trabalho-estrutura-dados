#include <stdio.h>

/*5. Você vai fazer um programa para classificar os competidores segundo as suas posições. Foram criadas 5 classes: Top 5 (1-5), Top 10 (6-10), Top 20 (11-20), 
Top 30 (21-30) e Top 100 (outras posições). Faça um programa que peça a posição do competidor e indique a classe do mesmo.*/

int main() {
  int posicao;
  printf ("Digite a sua posicao: \n");
  scanf ("%d", &posicao);
  
  if(posicao <= 5){
      printf("Parabens! Voce esta no Top5!");
  } else if(posicao <= 10){
      printf("Parabens! Voce esta no Top10!");
  } else if(posicao <= 20){
      printf("Parabens! Voce esta no Top20!");
  } else if(posicao <= 30){
      printf("Parabens! Voce esta no Top30!");
  } else {
      printf("Parabens! Voce esta no Top100!");
  }
  
  return 0;
}