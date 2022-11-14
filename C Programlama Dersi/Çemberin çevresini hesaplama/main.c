#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.14
int main()
{
    setlocale(LC_ALL,"Turkish");
    float cemberinYaricapi;

    printf("Çemberin yarýçapýný giriniz:  ");
    scanf("%f",&cemberinYaricapi);

    printf("Çemberin çevresi: %f ", 2 * pi * cemberinYaricapi);





    return 0;
}
