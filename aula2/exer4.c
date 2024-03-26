#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    
    printf("Digite os três valores (a, b, c) da equação de Bhaskara: ");
    scanf("%f %f %f", &a, &b, &c);

 
    delta = b * b - 4 * a * c;


    if (delta < 0 || a == 0) {
        printf("Impossível calcular\n");
    } else {
       
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);


        printf("Raiz 1 = %.2f\n", x1);
        printf("Raiz 2 = %.2f\n", x2);
    }

    return 0;
}