#include <stdio.h>

int main() {

  int sayac;
  int i;

  for(i=1;i<=25;i++) {
    //sayac = sayac +i;
    sayac += i;
  }

  printf("%d", sayac);

  return 0;
}
