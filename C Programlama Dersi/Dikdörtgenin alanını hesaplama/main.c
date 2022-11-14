#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int kisakenar , uzunkenar;
   /* printf("Lütfen dikdörtgenin kýsa kenarýný giriniz:  ");
    scanf("%d", &kisakenar);
    printf("Lütfen dikdörtgenin uzun kenarýný giriniz:  ");
    scanf("%d", &uzunkenar); */

    //Ýki kullanýmda da alaný bulabiliriz...

    printf("Dikdörtgenin kenarlarýný giriniz:  \n");
    scanf("%d%d",&kisakenar,&uzunkenar);

    int Alan = kisakenar * uzunkenar;

    printf("Dikdörtgenin alaný: %d ", Alan);

    return 0;
}
