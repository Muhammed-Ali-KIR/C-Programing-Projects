#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int kareninbirkenari;
    printf("L�tfen karenin kenar�n� giriniz:  ");
    scanf("%d", &kareninbirkenari);

    printf("Karenin alan� =  %d ", kareninbirkenari * kareninbirkenari );


    return 0;
}
