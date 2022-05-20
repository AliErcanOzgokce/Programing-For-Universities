#include <stdio.h>
int topla(int,int);
void main(){
    int a,b;
    printf("iki sayi giriniz ="); scanf("%d%d",&a,&b);
    printf("sonuc= %d",topla(a,b)); 
}
int topla(int a, int b){
    return a+b;
}