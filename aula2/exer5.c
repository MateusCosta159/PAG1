#include <stdio.h>

int main(){

    float lista, pratica, prova, media;
    char nome[50];
    
    printf("Digite o nome do aluno: ");
    scanf("\n%s", nome);

    printf("Digite a nota da lista: ");
    scanf("\n%f", &lista);

    printf("Digite a nota da pratica: ");
    scanf("\n%f", &pratica);

    printf("Digite a nota da prova: ");
    scanf("\n%f", &prova);

    media = (lista * 0.25) + (pratica * 0.25) + (prova * 0.5);

    if (media >= 7){
        printf(" Foi aprovado o Estudante %s\n", nome);
    }else{
        printf("Foi reprovado o Estuande %s\n", nome);
    }


    return 0;
}