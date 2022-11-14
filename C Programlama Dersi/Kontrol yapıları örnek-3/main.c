#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    char cinsiyet;
    printf("Lütfen cinsiyetinizi giriniz: E/K\n");
    scanf("%c",&cinsiyet);

    if(cinsiyet == 'E' || 'e') {
        printf("Siz Erkeksiniz...");
    }
    else if(cinsiyet == 'K' || 'e'){
        printf("Siz Kadýnsýnýz...");
    }
    else{
        printf("Lütfen E ya da K deðeri giriniz...");
    }



    return 0;
}
