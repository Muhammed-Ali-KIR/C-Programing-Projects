#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.14
int main()
{
    setlocale(LC_ALL,"Turkish");
    float cemberinYaricapi;

    printf("�emberin yar��ap�n� giriniz:  ");
    scanf("%f",&cemberinYaricapi);

    printf("�emberin �evresi: %f ", 2 * pi * cemberinYaricapi);





    return 0;
}
