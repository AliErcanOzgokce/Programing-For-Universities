#include <stdio.h> 
void kareleri(int []); void main()
{ 
    int a[10];
    int i;
    for (i=0; i<10; i++)
        a[i] = i + 1;
    printf("Dizinin eleman degerleri:\n");
    for (i=0; i<10; i++)
        printf("%d ",a[i]);
    kareleri(a);
    printf("\nKare alma islemi sonrasi degerler:\n");
    for (i=0; i<10; i++)
        printf("%d ",a[i]);
}
void kareleri(int a[]) { 
    int i;
    for (i=0; i<=9; i++)
        a[i] = a[i] * a[i];
}
