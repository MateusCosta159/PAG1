#include <stdio.h>

int main(){

    float nota;
    

    printf("Digite a nota:");
    scanf("%f", &nota);

    if ((nota >= 8) && (nota <=10)){
        printf("\nConceito A! \n\n");
    } else {
        if ((nota >= 6) && (nota <= 7.9)){
             printf("\nConceito B! \n\n");
        }else{
            if((nota >=4) && (nota <=5.9)){
                printf("\nConceito C! \n\n");
            }else{
                if ((nota >=2) && (nota <=3.9)){
                    printf("\nConceito D! \n\n");
                }else{
                    if ((nota >=0) && (nota <=1.9)){
                        printf("\nConceito E! \n\n");
                    }else{
                        printf("\n Nota invalida \n\n");
                    }
                }
            }
        }
    }
    return 0;
}