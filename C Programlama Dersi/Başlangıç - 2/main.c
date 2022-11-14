#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14 //define ile tanýmladýðýmýz deðer kod boyunca deðiþmez.
//const ile tanýmladýðýmýz deðerde deðiþmez,sabittir.
int main()
{
    float yaricap;
printf("cemberin yaricapini giriniz: ");
scanf("%f",&yaricap);

    printf("Cemberin cevrei= %f",2*PI*yaricap);
    return 0;
}
