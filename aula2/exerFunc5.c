#include <stdio.h>

float calcMedia(float a, float b, float c);

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

    media = calcMedia(lista, pratica, prova);

    if (media >= 7){
        printf(" Foi aprovado o Estudante %s\n", nome);
    }else{
        printf("Foi reprovado o Estudande %s\n", nome);
    }
    

    return 0;
}

float calcMedia(float a, float b, float c){
    float cmedia;
    cmedia = (a *0.25) + (b * 0.25) + (c + 0.5);
    return(cmedia);

}