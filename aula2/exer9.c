#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

    // Receber a altura e o sexo
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    // Calcular o peso ideal de acordo com o sexo
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * altura - 58;
        printf("O peso ideal para um homem com %.2f metros de altura é %.2f quilogramas.\n", altura, pesoIdeal);
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
        printf("O peso ideal para uma mulher com %.2f metros de altura é %.2f quilogramas.\n", altura, pesoIdeal);
    } else {
        printf("Sexo invalido.\n");
    }

    return 0;
}
