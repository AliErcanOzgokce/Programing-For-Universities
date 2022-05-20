#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){

    char nereden[30]="Merhaba Dostum";
    char nereye[30]="";

    strncpy(nereye,nereden,9);

    printf("%s",nereye);

    return 0;
}