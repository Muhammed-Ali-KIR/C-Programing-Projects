#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
    float kesirlisayi;
    double kesirlisayi2;
    char karakter;
    char karakterdizisi[5];

    printf("Lütfen bir integer deðeri giriniz: ");
    scanf("%d",&sayi);
    printf("Lütfen bir float deðeri giriniz: ");
    scanf("%f",&kesirlisayi);
    printf("Lütfen bir double deðeri giriniz: ");
    scanf("%lf",&kesirlisayi2);
    printf("Lütfen bir karakter deðeri giriniz: ");
    scanf(" %c",&karakter);
    printf("Lütfen bir 4 karakter deðeri giriniz: ");
    scanf("%s",karakterdizisi);

    printf("Girdiðiniz sayý: %d\n", sayi);
    printf("Girdiðiniz sayý: %f\n", kesirlisayi);
    printf("Girdiðiniz sayý: %lf\n", kesirlisayi2);
    printf("Girdiðiniz sayý: %c\n", karakter);
    printf("Girdiðiniz sayý: %s\n", karakterdizisi);




    return 0;
}
