#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    float kupBirKenar;
    printf("Bana bir k�p kenar� s�yle sana yanal alanlar�n toplam�n� ve k�p�n hacmini s�yleyeyim: ");
    scanf("%f",&kupBirKenar);

    float yanalAlanlarinToplami = 6 * kupBirKenar * kupBirKenar;
    float kupunHacmi = kupBirKenar * kupBirKenar * kupBirKenar;
    printf("K�p�n yanal alanlar� toplam�: %f\n",yanalAlanlarinToplami);
    printf("K�p�n hacmi: %f", kupunHacmi);






    return 0;
}
