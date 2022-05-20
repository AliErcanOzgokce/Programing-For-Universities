#include <stdlib.h>
#include <stdio.h>
struct kitapbilgi{
    char kitapad[30];
    char yazar[30];
    int fiyat;
    float puan;
};
int main(){
    struct kitapbilgi kb={"Biz","Yazar",12,8.4532};

    printf("Kitap adi= %s\n",kb.kitapad);
    printf("Yazar adi= %s\n",kb.yazar);
    printf("Fiyati= %d\n",kb.fiyat);
    printf("Puani= %.2f\n",kb.puan);
    return 0;
}