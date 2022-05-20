#include <stdlib.h>
#include <stdio.h>
void yildiz(int en, int boy){
    int j,k;

    for(j=1;j<=boy;j++){
        for(k=1;k<=en;k++){
            if(j==1 || j==boy || k==1 || k==en){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){

    int s1,s2;
    printf("s1 ve s2 degerlerini giriniz= "); scanf("%d%d",&s1,&s2);
    yildiz(s1,s2);

}