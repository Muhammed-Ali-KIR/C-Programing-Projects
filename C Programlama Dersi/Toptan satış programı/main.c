#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

  /*  0-100 adet   -> adet fiyatı = 3 TL
    100-200 adet -> adet fiyatı = 2.5 TL
    200-300 adet -> adet fiyatı = 2 TL
    300-400 adet -> adet fiyatı = 1.25 TL
    400-    adet -> adet fiyatı = 0.75 TL
    */
    int adet;
    float adetFiyati;
    printf("Kaç adet ürün alacaksınız?: ");
    scanf("%d",&adet);

    if(adet >=400){
        adetFiyati = 0.75 ;
    }
    else if(adet >= 300 && adet < 400) {
        adetFiyati = 1.25 ;
    }
    else if(adet >= 200 && adet < 300){
        adetFiyati = 2;
    }
    else if(adet >= 100 && adet < 200) {
        adetFiyati = 2.5;
    }
    else if(adet > 0 && adet < 100)
        adetFiyati = 3 ;
    else {
        printf("Lütfen 1 veya 1 den büyük adet sayısı giriniz...");
    }
    float toplamTutar = adet*adetFiyati;
    int toplamTutarYuvarlama = adet*adetFiyati;
    printf("Toplam ödenecek tutar: %f  \n",toplamTutar);

    float yapilanindirim = toplamTutar - toplamTutarYuvarlama;

    printf("Yapılan indirim: %f \nÖdemeniz gereken tutar: %d",yapilanindirim,toplamTutarYuvarlama);
    return 0;
}
