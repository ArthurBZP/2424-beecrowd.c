#include <stdio.h>

int main (){


    int X, Y;

    printf("Informe o valor de X:");
    scanf("%d", &X);

    printf("Informe o valor de Y:");
    scanf("%d", &Y);

    if ((X >= 0) && (X <= 432)){
        if ((Y >= 0) && (Y <= 468)){
            printf("dentro\n");
        }else{
            printf("fora\n");
        }
    }else{
        printf("fora\n");
    }











    return 0;
}