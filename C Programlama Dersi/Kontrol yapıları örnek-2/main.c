#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
        printf("Lütfen bir sayý giriniz: ");
    scanf("%d",&sayi);

    if(sayi % 10 == 0) {
        printf("%d , 10'a bölünebiliyor...",sayi);
    }
    else {
        printf("%d , 10'a bölünmüyor...",sayi);
    }
    return 0;
}
