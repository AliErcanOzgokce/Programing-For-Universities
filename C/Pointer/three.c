#include <stdlib.h>
#include <stdio.h>
int main(){

    char harf='b';
    char *h=&harf;

    printf("Adres = %x\n",h);
    h++;
    printf("Adres2 = %x\n",h);
    h--;
    printf("Adres3 = %x\n",h);
    h=h+5;
    printf("Adres4 = %x",h);

    return 0;
}