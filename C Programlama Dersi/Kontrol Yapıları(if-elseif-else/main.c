#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int yas;
    printf("Lütfen yaþýnýzý giriniz: ");
    scanf("%d",&yas);

    if (yas >= 18) {
    printf("Reþitsiniz...");

    }
    else {
        printf("Reþit deðilsiniz...");
    }



    return 0;
}
