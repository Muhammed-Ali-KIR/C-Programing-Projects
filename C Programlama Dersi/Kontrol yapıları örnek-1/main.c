#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int puan;

    printf("L�tfen puan�n�z� giriniz: ");
    scanf("%d",&puan);

    /*80-100 -> �ok iyi puan
    60-80  -> iyi puan
    40-60  -> orta puan
    20-40  -> k�t� puan
    0-20   -> �ok k�t� puan*/


    if(puan >= 80 && puan <= 100) {
        printf("�ok iyi puan...");
    }
    else if(puan >= 60 && puan < 80) {
        printf("�yi puan...");
    }
    else if(puan >= 40 && puan < 60) {
        printf("Orta puan...");
    }
    else if(puan >= 20 && puan < 40) {
        printf("k�t� puan...");
    }
    else if(puan >= 0 && puan < 20) {
        printf("�ok k�t� puan...");
    }
    else {
        printf("L�tfen 0-100 aras�nda bir de�er giriniz...");
    }
    return 0;
}
