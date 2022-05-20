#include <stdio.h>
int swap(int *, int *);
int main(){
    int b[10];
    int s1,s2;
    int a,c;
    for(int i=0;i<10;i++){
        b[i]=i+1;
    }
    printf("Hangi degerleri degistirmek istersiniz= "); scanf("%d%d",&s1,&s2);
    swap(&b[s1-1],&b[s2-1]);
    
    for(int j=0;j<10;j++){
        printf("%d, ",b[j]);
    }
    return 0;
}
int swap(int *a, int *c){
    int temp;
    temp= *a;
    *a= *c;
    *c= temp;
    return *a, *c;
}