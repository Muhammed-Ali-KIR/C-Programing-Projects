#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    char cinsiyet;
    float boy;
        printf("L�tfen cinsiyetinizi giriniz: E/K\n");
    scanf("%c",&cinsiyet);

        printf("L�tfen boyunu cm cinsinden giriniz: \n");
    scanf("%f",&boy);

    if( (cinsiyet == 'E' || 'e') && boy >= 170){
        printf("Tebrikler...M�lakat� ge�tiniz.\n");
    }
    else if( (cinsiyet == 'K' || 'e') && boy >=150){
        printf("Tebrikler...M�lakat� ge�tiniz.\n");
}
    else {
        printf("Malesef elendiniz...");
    }

    return 0;
}
