#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi , onbinler , binler , yuzler , onlar , birler ;

    printf("5 basamakl� bir say� giriniz: ");
    scanf("%d",&sayi);


    onbinler = sayi / 10000;
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = (sayi % 10) / 1;



    printf("%d     %d     %d     %d     %d",onbinler,binler,yuzler,onlar,birler);

    return 0;
}
