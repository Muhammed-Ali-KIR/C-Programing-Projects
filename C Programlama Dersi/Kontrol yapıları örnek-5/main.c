#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int buyukSayi,kucukSayi;

    printf("Lütfen iki tane tam sayý giriniz: Önce büyük sayýyý giriniz...\n");
    scanf("%d%d",&buyukSayi,&kucukSayi);

    if(buyukSayi % kucukSayi == 0){
        printf("%d %d 'nin bir çarpanýdýr",kucukSayi,buyukSayi);
    }
    else {
        printf(" %d %d 'nin  bir çarpaný deðildir",kucukSayi,buyukSayi);
    }


    return 0;
}
