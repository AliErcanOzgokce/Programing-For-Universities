#include <stdio.h>
#include <stdlib.h>
int toplama(int s1,int s2){

    int s3;
    s3=s1+s2;
    return s3;
}

int main(){
    int s1,s2;
    printf("Birinci Sayiyi Girin= "); scanf("%d",&s1);
    printf("İkinci Sayiyi Girin= "); scanf("%d",&s2);

    
    printf("%d",toplama(s1,s2));

}