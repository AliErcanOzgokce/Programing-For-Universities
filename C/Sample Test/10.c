#include<stdio.h>
int fakt(int a){
    
    int i; int t=1;
    for(i=1;i<=a;i++){
        t=t*i;
    }
    return t;
}
int islem(int s){
    int i; int top=0; int sonuc=0;
    for(i=1;i<=s;i++){
        top=fakt(i)/i;
        sonuc+=top;
    }
    return sonuc;
}
void main(){
    int sayi;
    printf("sayiyi gir"); scanf("%d",&sayi);
    printf("%d",islem(sayi));
}