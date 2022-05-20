#include <stdio.h>

int main() {
    int N;
    int toplam=1;
    printf("Deger girin:");
    scanf("%d",&N);
    for(int i=N;i>0;i--) {
        toplam*=i;
    }
    printf("%d",toplam);
}
