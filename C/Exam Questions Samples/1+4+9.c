#include<stdio.h>
int kare(int a){
    return(a*a);
}
int main(){
    int top=0;
    for(int i=1;i<=10;i++){
        top+=kare(i);
    }
    printf("%d",top);
    return 0;
}