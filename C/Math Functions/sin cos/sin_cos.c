#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    double derece,sonucsin,sonuccos;

    printf("dereceyi girin: "); scanf("%lf",&derece);

    sonucsin=sin(derece);
    printf("%lf",sonucsin);

    sonuccos=cos(derece);
    printf("\n%lf",sonuccos);

    return 0;
}