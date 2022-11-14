#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int kareninbirkenari;
    printf("Lütfen karenin kenarýný giriniz:  ");
    scanf("%d", &kareninbirkenari);

    printf("Karenin alaný =  %d ", kareninbirkenari * kareninbirkenari );


    return 0;
}
