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

    printf("L�tfen bir integer de�eri giriniz: ");
    scanf("%d",&sayi);
    printf("L�tfen bir float de�eri giriniz: ");
    scanf("%f",&kesirlisayi);
    printf("L�tfen bir double de�eri giriniz: ");
    scanf("%lf",&kesirlisayi2);
    printf("L�tfen bir karakter de�eri giriniz: ");
    scanf(" %c",&karakter);
    printf("L�tfen bir 4 karakter de�eri giriniz: ");
    scanf("%s",karakterdizisi);

    printf("Girdi�iniz say�: %d\n", sayi);
    printf("Girdi�iniz say�: %f\n", kesirlisayi);
    printf("Girdi�iniz say�: %lf\n", kesirlisayi2);
    printf("Girdi�iniz say�: %c\n", karakter);
    printf("Girdi�iniz say�: %s\n", karakterdizisi);




    return 0;
}
