#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
    printf("Tek mi çift mi olduðunu öðrenmek istediðiniz sayýyý giriniz: \n");

    scanf("%d",&sayi);

    if(sayi % 2 == 0){
    printf("%d çifttir...",sayi);
    }

    else {

        printf("%d tektir...",sayi);
    }





    return 0;
}
