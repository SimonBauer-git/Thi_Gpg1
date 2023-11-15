#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int wert;
  int divisor =2;

  printf("bitte geben sie eine Natürliche Zahl ein \n");
  scanf("%i", &wert);
  // überprüfen ob eingabe passt
  if (wert <= 1) {
    printf("Fehler: eingegebene Zahl <= 1");
    return -1;
  }
  while (wert/divisor!=1) {
    if (wert % divisor==0)
    {printf("%i",divisor);
        wert=wert/divisor;}
    if (wert%divisor !=0)
    {divisor++;}
  }
  printf("%i", wert);
}
