#include <stdio.h>


int main(){

   int nmrDigitado, qtdNrm = 0, soma;
   float media;

   printf("Digite uma sequencia de inteiros, digite 0 para sair: ");
   scanf("%d", &nmrDigitado);

   soma = nmrDigitado;

   while (nmrDigitado != 0)
   {
     printf("Digite outro numero inteiro: ");
     scanf("%d", &nmrDigitado);

     soma += nmrDigitado;

     qtdNrm++;
   }

    media = soma / qtdNrm;
   
    printf("numero digitado %d \n %2f \n", soma, media);
    return 0;
}
