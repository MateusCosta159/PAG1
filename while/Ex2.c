#include <stdio.h>
int ehPrimo(int num);



int main() {
    int num1, num2, aux;

 
    printf("Digite o limite inferior e o limite superior do intervalo:\n");
    scanf("%d %d", &num1, &num2);

   
    if (num1 > num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    
    int atual = num1;
    printf("Números primos no intervalo [%d, %d]:\n", num1, num2);
    while (atual <= num2) {
        
        if (ehPrimo(atual)) {
            printf("%d ", atual);
        }
        atual++;
    }

    return 0;
}
int ehPrimo(int num) {
    if (num <= 1) return 0; 


    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}