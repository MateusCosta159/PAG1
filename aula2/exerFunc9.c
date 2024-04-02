#include <stdio.h>

// Protótipos das funções
float calcularPesoIdeal(float altura, char sexo);
void imprimirPesoIdeal(float altura, float pesoIdeal, char sexo);

int main() {
    float altura, pesoIdeal;
    char sexo;

    // Receber a altura e o sexo
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    // Calcular o peso ideal
    pesoIdeal = calcularPesoIdeal(altura, sexo);

    // Imprimir o peso ideal
    imprimirPesoIdeal(altura, pesoIdeal, sexo);

    return 0;
}


float calcularPesoIdeal(float altura, char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        return 62.1 * altura - 44.7;
    } else {
        return -1; 
    }
}


void imprimirPesoIdeal(float altura, float pesoIdeal, char sexo) {
    if (pesoIdeal != -1) {
        if (sexo == 'M' || sexo == 'm') {
            printf("O peso ideal para um homem com %.2f metros de altura é %.2f quilogramas.\n", altura, pesoIdeal);
        } else if (sexo == 'F' || sexo == 'f') {
            printf("O peso ideal para uma mulher com %.2f metros de altura é %.2f quilogramas.\n", altura, pesoIdeal);
        }
    } else {
        printf("Sexo inválido.\n");
    }
}
