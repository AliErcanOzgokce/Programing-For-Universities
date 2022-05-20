#include <stdio.h>//Sayıların yerini değiştiren program
void swap(int *,int *);
int main(){
    int a,b;
    printf("a ve b yi gir= "); scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a ve b (swap)= %d %d",a,b);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}