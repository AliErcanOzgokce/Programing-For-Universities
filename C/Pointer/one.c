#include <stdlib.h>
#include <stdio.h>
int main(){

    int sayi1=20;
    int sayi2=30;
    double sayi3=12.31;
    char x='b';

    printf("%d\n",sayi1);
    printf("%d\n",sayi2);
    printf("%.2f\n",sayi3);
    printf("%c",x);

    printf("\n\nBellek Adresleri\n\n");

    printf("%x\n",&sayi1);
    printf("%x\n",&sayi2);
    printf("%x\n",&sayi3);
    printf("%x\n",&x);
    return 0;
}