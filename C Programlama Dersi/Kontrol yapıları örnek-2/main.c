#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
        printf("L�tfen bir say� giriniz: ");
    scanf("%d",&sayi);

    if(sayi % 10 == 0) {
        printf("%d , 10'a b�l�nebiliyor...",sayi);
    }
    else {
        printf("%d , 10'a b�l�nm�yor...",sayi);
    }
    return 0;
}
