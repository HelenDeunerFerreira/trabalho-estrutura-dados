/*Um professor gostaria de ter um programa para calcular a média final de seus alunos. Para isso, ele informa a matrícula e as 5 notas que o alunos teve durante o semestre. 
Após informar as 5 notas, o programa imprime a matrícula do aluno e a média que obteve (média aritmética simples). 
Quando o professor digitar 0 o programa finaliza e apresenta a média geral da turma. Proibido colocar 5 scanf para pedir as notas.*/

#include <stdio.h>

int main() {
    int matricula, numAlunos = 0;
    float notas[5];
    float somaNotas = 0, media = 0, mediaGeral = 0;

    while (1) {
        printf("Digite o número de matrícula do aluno ou 0 para sair:\n");
        scanf("%d", &matricula);

        if (matricula == 0) {
            break;
        }

        printf("Digite as 5 notas do aluno:\n");
        for (int i = 0; i < 5; i++) {
            printf("Nota %d: ", i + 1);
            scanf("%f", &notas[i]);
        }

        for (int i = 0; i < 5; i++) {
            media += notas[i];
        }
        media /= 5;

        printf("Matrícula número: %d, Média: %.2f\n", matricula, media);

        somaNotas += media;
        numAlunos++;
    }

    mediaGeral = somaNotas / numAlunos;
    printf("Media geral da turma: %.2f\n", mediaGeral);

    return 0;
}