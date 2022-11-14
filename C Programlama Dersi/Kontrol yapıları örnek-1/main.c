#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int puan;

    printf("Lütfen puanýnýzý giriniz: ");
    scanf("%d",&puan);

    /*80-100 -> çok iyi puan
    60-80  -> iyi puan
    40-60  -> orta puan
    20-40  -> kötü puan
    0-20   -> çok kötü puan*/


    if(puan >= 80 && puan <= 100) {
        printf("Çok iyi puan...");
    }
    else if(puan >= 60 && puan < 80) {
        printf("Ýyi puan...");
    }
    else if(puan >= 40 && puan < 60) {
        printf("Orta puan...");
    }
    else if(puan >= 20 && puan < 40) {
        printf("kötü puan...");
    }
    else if(puan >= 0 && puan < 20) {
        printf("Çok kötü puan...");
    }
    else {
        printf("Lütfen 0-100 arasýnda bir deðer giriniz...");
    }
    return 0;
}
