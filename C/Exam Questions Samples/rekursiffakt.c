#include <stdio.h>
int fakt(int x);
int main(){
    int x;
    printf("Degeri girin= "); scanf("%d",&x);
    printf("%d",fakt(x));
    return 0;
}
int fakt(int x){
    
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    
    return fakt(x-1)*x;
}