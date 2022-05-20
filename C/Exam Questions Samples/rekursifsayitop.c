 #include <stdio.h>
#define N 50
int topla(int dizi[],int son);
int  main(){
    int dizi[N];
    int son;
    printf("Degeri girin= "); scanf("%d",&son);
    for(int i=0;i<son;i++){
        dizi[i]=i+1;
    }
    printf("%d",topla(dizi,son));
}
int topla(int dizi[],int son){
    if(son <= 0){
        return 0;
    }
    return(topla(dizi,son-1)+ dizi[son-1]);
    
}