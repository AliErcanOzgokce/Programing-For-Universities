#include <stdio.h>
#include <stdlib.h>
int main(){

    int sayi=20;
    int *s=&sayi;

    //Sayıyı ekrana yazdırma
    printf("Deger = %d",sayi);

    //Adresi ekrana yazdırma
    printf("\nAdres = %x",s);

    printf("\n\n-----------------------\n\n");

    char harf='a';
    char *h=&harf;

    //Harfi ekrana yazdırma
    printf("Harf = %c\n",harf);
    
    //Adresi ekrana yazdırma
    printf("Adres = %x",h);

    return 0;
}