#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int kisakenar , uzunkenar;
   /* printf("L�tfen dikd�rtgenin k�sa kenar�n� giriniz:  ");
    scanf("%d", &kisakenar);
    printf("L�tfen dikd�rtgenin uzun kenar�n� giriniz:  ");
    scanf("%d", &uzunkenar); */

    //�ki kullan�mda da alan� bulabiliriz...

    printf("Dikd�rtgenin kenarlar�n� giriniz:  \n");
    scanf("%d%d",&kisakenar,&uzunkenar);

    int Alan = kisakenar * uzunkenar;

    printf("Dikd�rtgenin alan�: %d ", Alan);

    return 0;
}
