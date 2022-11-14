#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    float sayi1,sayi2,sayi3,kucuk,buyuk,toplam,ortalama,carpim;

    printf("Lütfen 3 farklý tam sayý deðerini giriniz: \n");
    scanf("%f%f%f",&sayi1,&sayi2,&sayi3);

    toplam = sayi1 + sayi2 + sayi3;
    carpim = sayi1 * sayi2 * sayi3;
    ortalama = (sayi1 + sayi2 + sayi3) / 3;

    kucuk = sayi1;

    if(sayi2 < kucuk){
        kucuk = sayi2;
    }
    if(sayi3 < kucuk){
        kucuk = sayi3;
    }

    buyuk = sayi1;
    if(sayi2 > buyuk){
        buyuk = sayi2;
    }
    if(sayi3 > buyuk) {
        buyuk = sayi3;
    }
    printf("Toplam: %f \nÇarpma: %f \nortalama: %f \n",toplam,carpim,ortalama);
    printf("Küçük sayi= %f \n",kucuk);
    printf("Büyük sayý= %f",buyuk);



    return 0;
}
