#include <stdio.h>

/*6. Sabendo que as faixas etárias para votação são: 18 a 70 anos voto obrigatório; 16, 17 e acima de 70 anos voto facultativo; 
outras idades (ou seja, menor que 16 anos) não pode votar, crie um programa que processa essa verificação.*/

int main() {
  int idade;
  printf ("Digite a sua idade: \n");
  scanf ("%d", &idade);
  
  if(idade >= 18 && idade < 70){
      printf("Voto obrigatorio");
  } else if(idade >= 16 && idade < 18 || idade >= 70){
      printf("Voto facultativo");
  } else {
      printf("Voce nao pode votar");
  }
  
  return 0;
}