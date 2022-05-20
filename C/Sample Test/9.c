#include <stdio.h>
int tekmiciftmi(int s1){
    int m;
    m=s1%2;    
    return(m);
}
int main(){
    int a;
    printf("a yı girin= "); scanf("%d",&a);

    if(tekmiciftmi(a)!=0){//burda eğer sayının modu 0 ise buraya girecek değilse else e girecek
        printf("Bu numara tek");
    }
    else{
        printf("Bu numara cift");
    }
}