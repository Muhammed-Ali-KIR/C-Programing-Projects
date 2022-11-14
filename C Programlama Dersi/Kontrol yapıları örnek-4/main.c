#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    char cinsiyet;
    float boy;
        printf("Lütfen cinsiyetinizi giriniz: E/K\n");
    scanf("%c",&cinsiyet);

        printf("Lütfen boyunu cm cinsinden giriniz: \n");
    scanf("%f",&boy);

    if( (cinsiyet == 'E' || 'e') && boy >= 170){
        printf("Tebrikler...Mülakatý geçtiniz.\n");
    }
    else if( (cinsiyet == 'K' || 'e') && boy >=150){
        printf("Tebrikler...Mülakatý geçtiniz.\n");
}
    else {
        printf("Malesef elendiniz...");
    }

    return 0;
}
