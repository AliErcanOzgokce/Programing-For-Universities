#include <stdio.h>
#include <stdlib.h>
struct kayit
{
    char ad[50];
    int no;
    int sinif;
    float ort;
};
struct kayit ogr;
int main(){

    printf("Adiniz= "); gets(ogr.ad);
    printf("Numaraniz= "); scanf("%d",&ogr.no);
    printf("Sinifiniz= "); scanf("%d",&ogr.sinif);
    printf("Ortalamaniz= "); scanf("%f",&ogr.ort);

    printf("Adi= "); puts(ogr.ad);
    printf("No= %d\n",ogr.no);
    printf("Sinifi= %d\n",ogr.sinif);
    printf("Ortalama= %.2f",ogr.ort);
    return 0;
}