#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14 //define ile tan�mlad���m�z de�er kod boyunca de�i�mez.
//const ile tan�mlad���m�z de�erde de�i�mez,sabittir.
int main()
{
    float yaricap;
printf("cemberin yaricapini giriniz: ");
scanf("%f",&yaricap);

    printf("Cemberin cevrei= %f",2*PI*yaricap);
    return 0;
}
