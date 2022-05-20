#include <stdlib.h>
#include <stdio.h>
//Geri Değer Gönderen Fonksiyon Örneği
int bolme(int s1,int s2){

    float s3;
    s3=s1/s2;
    return s3;
}
int main(){

    float b;

    b=bolme(9,3);

    printf("%.2f",b);
    return 0;
}