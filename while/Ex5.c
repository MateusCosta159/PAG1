#include <stdio.h>

int main() {
    int cod;
    float num1, num2, resultado;
    char escolha = 'n';
    
    while (escolha != '5') {
        printf("Menu:\n");
        printf("1 - Somar dois números\n");
        printf("2 - Subtrair dois números\n");
        printf("3 - Multiplicar dois números\n");
        printf("4 - Dividir dois números\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &cod);

        switch (cod) {
            case 1:
                printf("Digite dois números para somar: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado da soma: %.2f\n", resultado);
                break;
            case 2:
                printf("Digite dois números para subtrair: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado da subtração: %.2f\n", resultado);
                break;
            case 3:
                printf("Digite dois números para multiplicar: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado da multiplicação: %.2f\n", resultado);
                break;
            case 4:
                printf("Digite dois números para dividir: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da divisão: %.2f\n", resultado);
                } else {
                    printf("Erro: divisão por zero!\n");
                }
                break;
            case 5:
                printf("Encerrando o programa...\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

       
        while (getchar() != '\n');

        printf("\n");
    }

    return 0;
}
