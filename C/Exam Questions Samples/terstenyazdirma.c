#include<stdio.h>
void ters(int series[5]);
int main(){
    int series[5];
    for(int i=0;i<5;i++){
        printf("dizinin %d. degerini girin= ",i+1); scanf("%d",&series[i]); 
    }
    ters(series);
}
void ters(int series[5]){
    for(int i=5-1;i>=0;i--){
        printf("%d, ",series[i]);
    }
}