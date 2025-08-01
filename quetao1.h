#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resul;

    printf("Escolha a operacao:\n");
    printf("01 <-> Adicao\n");
    printf("02 <-> Subtracao\n");
    printf("03 <-> Multiplicacao\n");
    printf("04 <-> Divisao\n");
    printf("05 <-> Resto da divisao\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("Incira o primeiro numero, que com ele sera feito a operacao desejada: ");
    scanf("%f", &num1);
    printf("incira o segundo numero: ");
    scanf("%f", &num2);

    switch(opcao) {
        case 1:
            resul = num1 + num2;
            printf("Resultado da adicao: %.2f\n", resultado);
            break;
        case 2:
            resul = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            resultado = num1 / num2;
            printf("Resultado da divisao: %.2f\n", resultado);
            break;
        case 5:
            printf("Resto da divisao inteira: %d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Opcao invalida!\n");
    }
