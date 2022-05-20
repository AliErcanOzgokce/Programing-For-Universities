#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){

    char isim[100];

    printf("ismi girin= "); gets(isim);

    printf("katar uzunluk= %lu",strlen(isim));


    return 0;
}