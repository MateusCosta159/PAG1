#include <stdio.h>

int main(){

    int a = 10;
    int b = 10;

    a++;
    printf("\n...A = %i", a);

    ++b;
    printf("\n...B = %i ", b);

    b = a++;
    printf("\n\n...B = A++.......");
    printf("\n...A = %i", a);
    printf("\n...B = %i ", b);

    b = --a;
    printf("\n\n...B = --A.......");
    printf("\n...A = %i", a);
    printf("\n...B = %i \n", b);



    return 0;
}