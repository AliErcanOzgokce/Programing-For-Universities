#include <stdio.h>
void perfect(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        for (int j = 1; j < i; j++)
        {
            if(i%j==0){
                sum+=j;
            }
        }
        if(i==sum){
            printf("%d",i);
        }
    }
}

int main(){
    int first,finish;
    printf("Baslangıc Degeri= "); scanf("%d",&first);
    printf("Bitis Degeri= "); scanf("%d",&finish);
    perfect(first,finish);
    return 0;
}