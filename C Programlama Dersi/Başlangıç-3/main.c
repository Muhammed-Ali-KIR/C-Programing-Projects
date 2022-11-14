#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");


    int tamsayi = 6;    //4 byte yer kaplar

    double kesirlisayi = 7.2;    //8 byte yer kaplar

    char harf = 'K' ;      //1 byte yer kaplar

    float kesirlisayi2 = 9.2 ;  //4 byte yer kaplar


    printf("%d\n",tamsayi);
    printf("%.1f\n",kesirlisayi);
    printf("%c\n",harf);
    printf("%.1f\n",kesirlisayi2);



    return 0;
}
