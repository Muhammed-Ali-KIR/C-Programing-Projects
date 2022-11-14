#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.14  // main fonksiyonda pi yi bir daha tanýmlamamýza gerek kalmýyor.
int main()
{
    setlocale(LC_ALL,"Turkish");


    float cemberinYaricapi;

    printf("Çemberin yarýçapýný giriniz:  ");
    scanf("%f",&cemberinYaricapi);

    printf("Çemberin alaný: %f ", pi * cemberinYaricapi * cemberinYaricapi);

    return 0;
}
