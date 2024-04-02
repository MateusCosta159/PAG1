#include <stdio.h>

int main() {
    int codigoItem, quantidade;
    float valorPagar = 0;

    // Ler o código do item e a quantidade
    printf("Digite o codigo do item e a quantidade (0 para encerrar):\n");
    printf("Codigo do item (1-5): ");
    scanf("%d", &codigoItem);

    // Loop para ler os itens e calcular o valor da conta
    while (codigoItem != 0) {
        printf("Quantidade: ");
        scanf("%d", &quantidade);

        // Calcular o valor da conta com base no código do item e na quantidade
        if (codigoItem == 1) {
            valorPagar += quantidade * 4;
        } else if (codigoItem == 2) {
            valorPagar += quantidade * 4.5;
        } else if (codigoItem == 3) {
            valorPagar += quantidade * 5;
        } else if (codigoItem == 4) {
            valorPagar += quantidade * 2;
        } else if (codigoItem == 5) {
            valorPagar += quantidade * 1;
        } else {
            printf("Codigo do item invalido.\n");
        }

        // Ler o próximo código do item
        printf("Digite o codigo do item (1-5) (0 para encerrar): ");
        scanf("%d", &codigoItem);
    }

    // Mostrar o valor total a pagar
    printf("Valor total a pagar: $%.2f\n", valorPagar);

    return 0;
}
