/*Faça um programa que peça um número e imprima os números de 1 até o número informado. 
Sendo que, quando chegar na metade da impressão, mostrar a mensagem Metade (a metade não precisa ser exata). */

#include <stdio.h>

int main() {
    int num;
    printf("Digite o numero: \n");
    scanf("%d", &num);

    int i;
    int metade = (num)/2;
    
    for (i=1; i < num+1; i++) {
        if(i == metade){
            printf("%d \n", i);
            printf("Metade \n");
        }
        else{
            printf("%d \n", i);
        }
    }
    
    return 0;
}