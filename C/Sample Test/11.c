#include<stdio.h>
#define N 5
int max(int s[N]);
int min(int k[N]);

void main(){
    int dizi[N];
    int d;
    for(int i=0;i<N;i++){
        printf("%d. Degerini gir = ",i+1); scanf("%d",&d);
        dizi[i]=d;
    }
    printf("Max = %d",max(dizi));
    printf("Min = %d",min(dizi));
}
int max(int s[N]){
    int ebs,i;
    for(i=0;i<N;i++){
        if(s[i]>ebs){
            ebs=s[i];
        }
    }
    return ebs;
}
int min(int k[N]){
    int eks=k[1]+1;//Burdaki amacım dizideki herhangi bir sayıdan daha büyük olmasını sağlamak
    for(int i=0;i<N;i++){
        if(k[i]<eks){
            eks=k[i];
        }
    }
    return eks;
}