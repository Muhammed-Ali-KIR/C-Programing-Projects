#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int buyukSayi,kucukSayi;

    printf("L�tfen iki tane tam say� giriniz: �nce b�y�k say�y� giriniz...\n");
    scanf("%d%d",&buyukSayi,&kucukSayi);

    if(buyukSayi % kucukSayi == 0){
        printf("%d %d 'nin bir �arpan�d�r",kucukSayi,buyukSayi);
    }
    else {
        printf(" %d %d 'nin  bir �arpan� de�ildir",kucukSayi,buyukSayi);
    }


    return 0;
}
