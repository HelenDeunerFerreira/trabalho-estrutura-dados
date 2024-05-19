/*Faça um programa que peça uma valor e imprima a soma de todos os números de 1 até o valor informado.*/

#include <stdio.h>

int main()
{
    int num;
    printf ("Digite o número: \n");
    scanf ("%d", &num);
    
    int i;
    int resultado = 0;
    
    for(i=1; i<num+1; i++){
        resultado += i;
    }
    
    printf("%d", resultado);

    return 0;
}
