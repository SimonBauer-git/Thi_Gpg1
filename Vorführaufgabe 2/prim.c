
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int eingabewert;
  int ausgabewert;
  int divisor;
  int faktor;

  printf("bitte geben sie eine Natürliche Zahl ein \n");
  scanf("%d", &eingabewert);
  // überprüfen ob eingabe passt
  if (eingabewert <= 1) {
    printf("Fehler: eingegebene Zahl <= 1");
    return -1;
  }
  while (sqrt(eingabewert) >= divisor) {
    eingabewert / divisor;
    divisor++;
  }
  printf("%i", divisor);
}