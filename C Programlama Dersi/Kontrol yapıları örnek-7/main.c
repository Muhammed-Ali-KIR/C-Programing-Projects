#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
    printf("Tek mi �ift mi oldu�unu ��renmek istedi�iniz say�y� giriniz: \n");

    scanf("%d",&sayi);

    if(sayi % 2 == 0){
    printf("%d �ifttir...",sayi);
    }

    else {

        printf("%d tektir...",sayi);
    }





    return 0;
}
