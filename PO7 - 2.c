/*Faça um programa que peça o salário e o número de filhos dos habitantes de uma região. Quando o salário informado for menor que zero, 
as entradas são finalizadas e serão apresentadas as médias salarial e de filhos informados. */
#include <stdio.h>

int main() {
    float salario, somaSalarios, mediaSalarios, mediaFilhos, somaFilhos, numFilhos, totalHabitantes;

    while (1) {
        printf("Salário do habitante: ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        printf("Número de filhos: ");
        scanf("%f", &numFilhos);

        totalHabitantes++;
        somaSalarios += salario;
        somaFilhos += numFilhos;
    }

    mediaSalarios  = totalHabitantes > 0 ? somaSalarios / totalHabitantes : 0;
    mediaFilhos = totalHabitantes > 0 ? (float)somaFilhos / totalHabitantes : 0;

    printf("Média dos salários: %0.1f\n", mediaSalarios);
    printf("Média dos filhos: %0.1f\n", mediaFilhos);

    return 0;
}