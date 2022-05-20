#include <stdio.h>
int fakt(int a){
    int i;
    int top=1;
    for(i=1;i<=a;i++){
        top*=i;
    }
    return top;
}
int main(){
    int d;
    printf("Faktoriyelini almak istedginiz sayi= "); scanf("%d",&d);
    printf("%d",fakt(d));
    return 0;
}