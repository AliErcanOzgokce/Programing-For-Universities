#include<stdio.h>
#define N 10
int sirala(int dizi[N]);
int main(){
    int seri[N];
    int temp;
    for(int i=0;i<10;i++){
        printf("%d. Elemanı girin= ",i+1); scanf("%d",&seri[i]);
    }
    sirala(seri);
    for(int i=0;i<N;i++){
        printf("%d\n",seri[i]);
    }
}
int sirala(int dizi[N]){
    int temp;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(dizi[i]>dizi[j]){
                temp=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=temp;
            }
        }
    }
    return dizi[N];
}