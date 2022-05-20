#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum sehirler{
    bos,adana,adiyaman,afyon,agri,amasya,ankara,antalya
};


int main(){

    enum sehirler il;

    il=ankara;

    printf("%d",il);

    return 0;
}