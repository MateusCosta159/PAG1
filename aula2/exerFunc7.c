#include <stdio.h>

void ideTriangulo(float x, float y, float z);

int main() {
    float x, y, z;

    printf("Digite os valores dos lados do triangulo: ");
    scanf("%f %f %f", &x, &y, &z);

    ideTriangulo(x, y, z);
   

    return 0;
}

void ideTriangulo(float x, float y, float z){
    if (x < y + z && y < x + z && z < x + y){
        // Verificar o tipo de triângulo
        if (x == y && y == z) {
            printf("Os lados formam um triangulo equilatero.\n");
        } else 
        if (x == y || x == z || y == z) {
            printf("Os lados formam um triangulo isosceles.\n");
        }else
        {
            printf("Os lados formam um triangulo escaleno.\n");
        }
     }else{
        printf("Os lados nao formam um triangulo.\n");
    }
}