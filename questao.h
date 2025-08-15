
#include <stdio.h>

int main() {
    int N;
    int num = 1; 

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    printf("\nTriangulo ate o numero %d:\n", N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            
            if (num > N) {
                break; 
            }
            printf("%d ", num);
            num++; 
        }
        if (num > N) {
            break; 
        }
        printf("\n");
    }

    return 0;
}