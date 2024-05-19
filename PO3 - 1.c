#include <stdio.h>

/*3. Faça um programa que calcule a duração de um evento qualquer. Para tal, o programa pede a hora de início e hora de fim (sem os minutos), as horas serão informadas de 0 a 23. 
Perceba que um evento pode começar em um dia e acabar em outro. Os eventos nunca terão duração de mais de 24 horas.*/

int main() {
  int duracao;
  int inicioEvento;
    
  int inicio;
  printf ("Digite a hora de inicio do evento: \n");
  scanf ("%d", &inicio);
  
  int fim;
  printf ("Digite a hora de fim do evento: \n");
  scanf ("%d", &fim);
  
  if(fim < inicio){
      inicioEvento = 24 - inicio;
      duracao = inicioEvento + fim;
  } else{
      duracao = fim - inicio;
  }
  
  printf("A duracao do evento foi de %d", duracao);
  
  return 0;
}