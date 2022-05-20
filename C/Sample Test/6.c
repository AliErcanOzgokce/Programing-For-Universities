#include <stdio.h>
#include <stdlib.h>
#define N 5
int menu(int);
void giris();
void okuma();
char ad[N][80];
char tel[N][20];
int saat[N];
long maas[N];
void main() { 
    int sec;
    do
    {   
        sec=menu(sec);
        switch(sec)
       {    case 0: break;
            case 1: giris(); break;
            case 2: okuma(); break;
            default: printf("Yeniden deneyiniz");
        } 
    }
    while(sec!=0);
}
int menu(int i)
{ char str[80]; printf("\n");
    printf("0 - Cikis\n");
    printf("1 - Bilgi Girisi\n");
    printf("2 - Bilgi Okuma\n");
    printf ("\nSeciminizi giriniz:");
    gets(str);
    i = atoi(str);
    return i;
}
 void giris() { 
    int i;
    char temp[80];
    for(i=0; i<N; i++)
    {   printf("\n") ;
        printf("Iscinin adini giriniz :");
        gets(ad[i]);
        printf("Telefon numarasinı giriniz :");
        gets(tel[i]);
        printf("Calisilan saat sayisini giriniz :");
        gets(temp);
        saat[i]=atoi(temp);
        printf("Saat ucretini giriniz :");
        gets(temp);
        maas[i]=atoi(temp);
    }
}
void okuma() { 
    int i;
    for(i=0; i<N; i++)
    {   printf("\n") ;
        printf("Adı : %s Telefon no : %s\n", ad[i], tel[i]);
        printf ("Haftalik odeme: %d\n",maas[i] * saat[i]);
    }
}