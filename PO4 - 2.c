/*Construa um programa que simule uma calculadora simples. Primeiro é solicitada a operação desejada +, -, / ou *, em seguida os dois operandos. 
Como resultado, o programa mostra o resultado da operação. O Programa é finalizado quando a operação desejada for igual à @*/

#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    while (1) {
        printf("Digite a operacao aritmética desejado ou @ para finalizar o programa: \n");
        scanf(" %c", &operacao);

        if (operacao == '@') {
            printf("Programa terminado! \n");
            break;
        }

        printf ("Digite o primeiro número: \n");
        scanf ("%f", &num1);

        printf ("Digite o segundo número: \n");
        scanf ("%f", &num2);

        switch (operacao) {
            case '+':
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case '-':
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case '*':
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case '/':
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            default:
                printf("Operação inválida! Tente novamente \n");
        }
    }

    return 0;
}