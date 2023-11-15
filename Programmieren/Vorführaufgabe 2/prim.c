#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned long int wert;
  unsigned long int limit;
  //oberes limit
  printf("bitte geben sie die obere grenze des Bereichs an: \n");
  scanf("%i", &limit);
  // überprüfen ob eingabe passt
  if (limit <= 1) {
    printf("Fehler: eingegebene Zahl <= 1");
    return -1;
  }
  //unteres limit
  printf("bitte geben sie die untere grenze des Bereichs an: \n");
  scanf("%i", &wert);
  // überprüfen ob eingabe passt
  if (wert <= 1) {
    printf("Fehler: eingegebene Zahl <= 1");
    return -1;
  }

while (wert<limit)
{printf("%i:\n",wert);
  rechnung(wert);
  wert++;}

}

int rechnung (wert)
{   unsigned long int divisor=2;
    while (wert/divisor!=1) {
    if (wert % divisor==0)
    {printf("%i",divisor);
    printf("*");
    wert=wert/divisor;}
    if (wert%divisor !=0)
    {divisor++;}
  }
  printf("%i\n", wert);}
