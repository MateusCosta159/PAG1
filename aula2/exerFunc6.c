#include <stdio.h>

void ordemCres(int num1, int num2, int num3, int maior, int menor);


int main() {
    int num1, num2, num3, maior, menor;

    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    ordemCres(num1, num2, num3, maior, menor);
 

    
    
 

    


    return 0;
}
void ordemCres(int num1, int num2, int num3, int maior, int menor){
    maior = num1;
    menor = num1;

   
    if (num2 > maior) {
        maior = num2;
    } else 
    if (num2 < menor) {
        menor = num2;
    }
     if (num3 > maior) {
        maior = num3;
    } else 
    if (num3 < menor) {
        menor = num3;
    }
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

}
