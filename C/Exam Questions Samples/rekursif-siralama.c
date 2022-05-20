#include <stdio.h>
#define BOYUT 50



int sirala(int d[], int bas, int son);
int main(void){
    int s[BOYUT];
    int N;
    printf("N degerini giriniz= "); scanf("%d",&N);
    printf("Diziye deger giriniz= ");
    for(int i=0;i<N;i++){
        scanf("%d",&s[i]);
    }
    sirala(s, 0, N);
}
int sirala(int s[], int bas, int son){
    if(bas >= son){ return 0;}
    printf("%d, ",s[bas]);
    sirala(s, bas+1, son);
}