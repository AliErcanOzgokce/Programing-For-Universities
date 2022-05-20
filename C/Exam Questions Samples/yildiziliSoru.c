#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int sirala(int k[N], int bas, int son);
int buyukkucuk(int m[N]);
int main(){
   int d[N];
   sirala(d,0,N);
}
int rasgele(int d[N]){
    srand(time(NULL));
    for(int k=0;k<N;k++){
        d[k]=rand()%100+1;
    }
    return d[N];
}
int buyukkucuk(int m[N]){
    rasgele(m);
    int temp=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(m[i]>m[j]){
            temp = m[i];
            m[i]= m[j];
            m[j]= temp;
            }
        }
    }
    return m[N];
}
int sirala(int k[N], int bas, int son){
    buyukkucuk(k);
    if(bas>=son) return 0;
    printf("%d\n",k[bas]);
    return sirala(&k[N],bas+1,son);
}
