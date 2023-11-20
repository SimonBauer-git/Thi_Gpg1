#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned long int wert;
  unsigned long int limit;
  int eingabekorrekt;
  // oberes limit
  printf("bitte geben sie die obere Grenze des Bereichs an: \n");
  eingabekorrekt = scanf("%i", &limit);
  // überprüfen ob eingabe passt
  if (eingabekorrekt != 1 || getchar() != '\n')
  {
    printf("Fehler: Eingabe ist keine natürliche zahl");
    return -1;
  }
  if (limit <= 1)
  {
    printf("Fehler: eingegebene Zahl <= 1");
    return -1;
  }
  // unteres limit
  printf("bitte geben sie die untere Grenze des Bereichs an: \n");
  eingabekorrekt = scanf("%i", &wert);
  // überprüfen ob eingabe passt
  if (eingabekorrekt != 1 || getchar() != '\n')
  {
    printf("Fehler: Eingabe ist keine natürliche Zahl");
    return -1;
  }
  if (wert <= 1)
  {
    printf("Fehler: eingegebene Zahl <= 1");
    return -1;
  }

  while (wert <= limit)
  {
    printf("%i:\n", wert);
    rechnung(wert);
    wert++;
  }
}

int rechnung(int wert)
{
  unsigned long int divisor = 2;
  while (wert / divisor != 1)
  {
    if (wert % divisor == 0)
    {
      printf("%i", divisor);
      printf("*");
      wert = wert / divisor;
    }
    if (wert % divisor != 0)
    {
      divisor++;
    }
  }
  printf("%i\n", wert);
}
