#include <stdio.h> 
int kareleri(int); 
void main()
{ int a[10];
    int i;
    for (i=0; i<10; i++)
        a[i] = i + 1;
    printf("Dizinin eleman degerleri:\n");
    for (i=0; i<10; i++)
        printf("%d ",a[i]);
    for (i=0; i<10; i++)
        a[i] = kareleri(a[i]);
    printf("\nKare alma islemi sonrasi degerler:\n");
    for (i=0; i<=9; i++)
        printf("%d ",a[i]);
}
int kareleri(int b)
{
return b * b; 
}