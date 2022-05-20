#include <stdio.h>
char isim[30];
int giris(char isim[30]);
void yazdir(char isim[30]);
int main(){
    int secim;
    
    printf("1-Bilgi Girisi\n");
    printf("2-Girilen Bilgiyi Okuma\n");
    printf("3-Cikis\n");
    printf("\n\nSecim = "); scanf("%d",&secim);
    switch (secim)
    {
    case 1:
        giris(isim);
        break;
    case 2:
        yazdir(isim);
        break;
    default:
        break;
    }
    return 0;
}
int giris(char isim[30]){
    scanf("%s",isim);
    printf("Bilgi girisi basarili\n");
    return isim;
}
void yazdir(char isim[30]){
    giris(isim);
    printf("%s",isim);
    printf("\nYazdirma Basarili");
}