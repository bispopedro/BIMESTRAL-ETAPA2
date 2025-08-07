#include <stdio.h>

int main() {
    int N;
    int num = 1; 
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    //Triângulo
    for (int i = 1; i <= N; i++) { //linhas
        for (int j = 1; j <= i; j++) { //números por linha
            printf("%d ", num);
            num++; 
        }
        printf("\n");
    }

    return 0;
}
