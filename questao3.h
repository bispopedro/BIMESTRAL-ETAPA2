#include <stdio.h>

int main() {
    int q, num;
    int m = 0;
    int cM = 0;

    printf("Quantas vezes você quer que os números apareção? ");
    scanf("%d", &q);

    for (int i = 1; i <= q; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (i == 1) {
            // Primeiro número, assume que é o maior por enquanto
            m = num;
            cM = 1;
        } else if (num > m) {
            m = num;
            cM = 1;
        } else if (num == m) {
            cM++;
        }
    }

    printf("\nO maior numero é: %d\n", m);
    printf("A quantidade de vezes que o maior número apareceu: %d\n", cM);

    return 0;
};
