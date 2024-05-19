/*Dada uma sequência de n números (um número menor ou igual à 0 finaliza a sequência), apresentar o porcentual de números informados que são maiores ou igual a 10 e menores ou igual a 20.*/

#include <stdio.h>

int main()
{
    int num = 1;
    int contador = 0;
    int quantidade = 0;

    while(1){
        printf("Digite o número: \n");
        scanf("%d", &num);

        if(num <= 0){
            break;
        }

        if(num >=10 && num <=20){
            contador +=1;
        }

        quantidade +=1;
    }

    float porcentagem;

    porcentagem = (contador * 100)/(quantidade);
    printf("Porcentagem entre 10 e 20: %0.2f", porcentagem);

    return 0;
}
