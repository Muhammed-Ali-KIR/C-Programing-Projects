#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14 //define ile tanımladığımız değer kod boyunca değişmez.
//const ile tanımladığımız değerde değişmez,sabittir.
int main()
{
    float yaricap;
printf("cemberin yaricapini giriniz: ");
scanf("%f",&yaricap);

    printf("Cemberin cevrei= %f",2*PI*yaricap);
    return 0;
}
