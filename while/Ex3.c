#include <stdio.h>

int main(){

    int N, serie = 0, serie1 = 1,  aux = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    while (aux < N )
    {
        aux = serie + serie1;
        if(aux >= N){
            break;
        }
        printf("%d", aux);
        serie = serie1;
        serie1 = aux;
    }
    

  printf("%d\n", aux);
    return 0;
}