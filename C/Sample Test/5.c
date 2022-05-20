#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float ort (int *);
void rasgele(int s[]);
#define N 10
void main() {
    int i, s[N];
    rasgele(s);
    for (i=0; i<N; i++)
        printf("%4d\n",s[i]);
    printf("Ortalama:%6.2f\n", ort(&s[0]));
}
float ort (int *s) { //Burda ortalama alırken adres opreatörü ile göndermek çok önemli
    int i,m;
    float t = 0;
    for (i=0; i<N; i++)
        t += s[i];
    m=t/N; //Ortalama burda alındı
    return m;
}
void rasgele(int s[]) { 
    int i;
    srand(time(NULL));
    for (i=0; i<N; i++)
        s[i] = rand() %100 +1 ; //1 ile 100 arasında al demek
}
