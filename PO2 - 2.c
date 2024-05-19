/*Faça um programa que simule a multiplicação por meio de adições. Para tal serãoo pedidos os dois operandos. Por exemplo se for informado 3 e 4, deverá ser calculado, 
usando a soma, 3∗4, ou seja, 12. Este cálculo é feito somando o primeiro valor informado por ele mesmo o número de vezes representada pelo segundo número.*/

#include <stdio.h>

int main()
{
    int num1;
    printf ("Digite o primeiro número: \n");
    scanf ("%d", &num1);

    int num2;
    printf ("Digite o segundo número: \n");
    scanf ("%d", &num2);
    
    int i;
    int resultado = 0;
    
    for(i=0;i<num1;i++){
        resultado += num2;
    }
    
    printf("%d", resultado);

    return 0;
}
