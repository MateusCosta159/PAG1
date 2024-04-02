#include <stdio.h>

int main() {
    float x, y, z;

    // Receber os valores dos lados do triângulo
    printf("Digite os valores dos lados do triangulo: ");
    scanf("%f %f %f", &x, &y, &z);

    // Verificar se os valores formam um triângulo
    if (x < y + z && y < x + z && z < x + y) {
        // Verificar o tipo de triângulo
        if (x == y && y == z) {
            printf("Os lados formam um triangulo equilatero.\n");
        } else if (x == y || x == z || y == z) {
            printf("Os lados formam um triangulo isosceles.\n");
        } else {
            printf("Os lados formam um triangulo escaleno.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
