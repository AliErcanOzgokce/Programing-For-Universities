#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char kaynak[30]="merhaba van";
    char kopya[30]="";

    strcpy(kopya,kaynak);
    printf("%s",kopya);


    return 0;
}