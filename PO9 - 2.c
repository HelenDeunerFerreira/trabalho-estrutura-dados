/*Fazer um programa que simule um campeonato com 4 times (A, B, C e D). Sera pedido o nome do primeiro time com os gols marcados e o nome do segundo time 
com os gols marcados. Este processo se repetirá até que seja informado um valor diferente de A, B, C ou D para o primeiro time. 
Ao final deverá ser apresentado o número de pontos de cada time e o campeão. 
Caso houver empate na primeira colocação informar que não houve campeão. Cálculo dos pontos: vitória 3 pontos, empate 1 ponto e derrota 0 ponto. */

#include <stdio.h>
#include <string.h>
#define QUANT_TIMES 4

int main() {
    char times[QUANT_TIMES] = {'A', 'B', 'C', 'D'};
    int pontos[QUANT_TIMES] = {0};
    char campeao = ' ', time1, time2;
    int golsTime1, golsTime2, pontosMaximo = 0, contaCompeao = 0;

    printf("Quais os resultados das partidas? (ex: A 3 B 2):\n");

    while (1) {
        printf("Partida: ");
        scanf(" %c %d %c %d", &time1, &golsTime1, &time2, &golsTime2);

        if (strchr(times, time1) == NULL) {
            break; 
        }

        if (golsTime1 > golsTime2) {
            for (int i = 0; i < QUANT_TIMES; i++) {
                if (times[i] == time1) {
                    pontos[i] += 3;
                }
            }
        } else if (golsTime1 < golsTime2) {
            for (int i = 0; i < QUANT_TIMES; i++) {
                if (times[i] == time2) {
                    pontos[i] += 3; 
                }
            }
        } else {
            for (int i = 0; i < QUANT_TIMES; i++) {
                if (times[i] == time1 || times[i] == time2) {
                    pontos[i] += 1; 
                }
            }
        }
    }

    for (int i = 0; i < QUANT_TIMES; i++) {
        if (pontos[i] > pontosMaximo) {
            pontosMaximo = pontos[i];
            campeao = times[i];
        }
    }

    for (int i = 0; i < QUANT_TIMES; i++) {
        if (pontos[i] == pontosMaximo) {
            contaCompeao++;
        }
    }

    printf("\nPontuacao final:\n");
    for (int i = 0; i < QUANT_TIMES; i++) {
        printf("Time %c: %d pontos\n", times[i], pontos[i]);
    }

    if (contaCompeao == 1) {
        printf("\nO campeao é o time %c com %d pontos\n", campeao, pontosMaximo);
    } else {
        printf("\nNão há campeão pois houve empate\n");
    }

    return 0;
}