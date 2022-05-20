#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    double sayi,sonuc1,sonuc2;

    printf("bir sayi girin=");
    
    scanf("%lf",&sayi);

    sonuc1=fabs(sayi);

    printf("%.lf",sonuc1);

    sonuc2=log(sayi);
    printf("\n%.5lf",sonuc2);
    return 0;
}