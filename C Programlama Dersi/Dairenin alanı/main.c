#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.14  // main fonksiyonda pi yi bir daha tan�mlamam�za gerek kalm�yor.
int main()
{
    setlocale(LC_ALL,"Turkish");


    float cemberinYaricapi;

    printf("�emberin yar��ap�n� giriniz:  ");
    scanf("%f",&cemberinYaricapi);

    printf("�emberin alan�: %f ", pi * cemberinYaricapi * cemberinYaricapi);

    return 0;
}
