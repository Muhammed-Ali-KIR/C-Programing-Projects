#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int yas;
    printf("L�tfen ya��n�z� giriniz: ");
    scanf("%d",&yas);

    if (yas >= 18) {
    printf("Re�itsiniz...");

    }
    else {
        printf("Re�it de�ilsiniz...");
    }



    return 0;
}
