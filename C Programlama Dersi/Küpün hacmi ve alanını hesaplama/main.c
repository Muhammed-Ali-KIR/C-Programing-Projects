#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    float kupBirKenar;
    printf("Bana bir küp kenarý söyle sana yanal alanlarýn toplamýný ve küpün hacmini söyleyeyim: ");
    scanf("%f",&kupBirKenar);

    float yanalAlanlarinToplami = 6 * kupBirKenar * kupBirKenar;
    float kupunHacmi = kupBirKenar * kupBirKenar * kupBirKenar;
    printf("Küpün yanal alanlarý toplamý: %f\n",yanalAlanlarinToplami);
    printf("Küpün hacmi: %f", kupunHacmi);






    return 0;
}
