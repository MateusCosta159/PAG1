#include <stdio.h>

void valorAceito(int a, int b, int c, int d);


int main(){
    
    int a, b, c, d;

    printf("Digite 4 valores inteiros :");
    scanf("\n%d %d %d %d", &a, &b, &c, &d);

    
    
    valorAceito(a, b, c, d);



    return 0;
}

void valorAceito(int a, int b, int c, int d){
    if((b > c) && (d > a) && (c+d > a+b) && c > 0 && d > 0 && a % 2 == 0){
    printf("Valores aceitos");
    } else {
        printf("valores não aceitos\n");
    }
}