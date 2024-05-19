#include <stdio.h>

/*4. Faça um programa que peça 4 números inteiros. Em seguida, apresente quantos números informados são negativos e quantos são positivos (considere o 0 como positivo). */

int main() {
  int num1;
  printf ("Digite o numero 1: \n");
  scanf ("%d", &num1);
  
  int num2;
  printf ("Digite o numero 2: \n");
  scanf ("%d", &num2);
 
  int num3;
  printf ("Digite o numero 3: \n");
  scanf ("%d", &num3);
  
  int num4;
  printf ("Digite o numero 4: \n");
  scanf ("%d", &num4);
  
  int contadorNeg;
  int contadorPos;
  
  int numeros[4] = {num1, num2, num3, num4};
  int i;
  
  for(i=0; i>=3; i=1){
      if(numeros[i] >= 0){
          contadorPos += 1;
      } else{
          contadorNeg += 1;
      }
  }
  
  printf("%d", contadorPos, "(+)", "%d", contadorNeg, "(-)");
  
  return 0;
}