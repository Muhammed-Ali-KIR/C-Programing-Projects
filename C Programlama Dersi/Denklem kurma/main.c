#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
   /* float a,b,c,x;

    printf("Sýrasýyla a,b,c ve x deðerlerini giriniz: \n");
    scanf("%f%f%f%f",&a,&b,&c,&x);

    float sonuc = a*x*x + b*x + c;

    printf("Denklemin sonucu= %f",sonuc); */

    // int -> float -> double ->

   /*int x=30;
    float y=30;
    double z=30;

    printf("int/float %f\n",x/y);
    printf("int/double %d\n",x/z);
    printf("float/double %f",y/z); */

    int x=5;
    printf("%.1f",(float)x);

    return 0;
}
