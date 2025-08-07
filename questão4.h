#include <stdio.h>

int main() {
    int velo;

    printf(" <-> Com que velocidade (km/h) você costuma ou estar dirigir ?? ");
    scanf("%d", &velo);

    if (velo > 75) {
        printf("[Reduza a velocidade imediatamente!!!]\n");
    } else if (velo > 65) {
        printf("[Você está muito rápido emm, cuidado!]\n");
    } else if (velo > 55) {
        printf("[Tenha atenção! Você está acima da velocidade média.]\n");
    } else if (velo > 45) {
        printf("[Velocidade boa, continue assim.]\n");
    } else {
        printf("[Você está dirigindo com calma. continuie...]\n");
    }

    return 0;
}
