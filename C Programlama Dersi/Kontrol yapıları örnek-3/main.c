#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    char cinsiyet;
    printf("L�tfen cinsiyetinizi giriniz: E/K\n");
    scanf("%c",&cinsiyet);

    if(cinsiyet == 'E' || 'e') {
        printf("Siz Erkeksiniz...");
    }
    else if(cinsiyet == 'K' || 'e'){
        printf("Siz Kad�ns�n�z...");
    }
    else{
        printf("L�tfen E ya da K de�eri giriniz...");
    }



    return 0;
}
