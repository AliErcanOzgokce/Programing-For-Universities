#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100

void tekrar(int d[N], int b);
int main(){
    int dizi[N];
    int k;
    srand(time(NULL));
    for(int i=0;i<N;i++){
        dizi[i] = rand() %N +1;
    }
    for(int j=0;j<N;j++){
        printf("%d\n",dizi[j]);
    }
    printf("Degeri girin= "); scanf("%d",&k);
    tekrar(dizi,k);
    return 0;
}
void tekrar(int d[N],int b){
    int temp=0;
    for(int i=0;i<N;i++){
        if(d[i]==b){
            temp++;
        }
    }
    printf("%d",temp);
}
