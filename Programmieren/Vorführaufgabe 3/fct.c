#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int fct(int n, int a, int b, int g, int *rückgabe, char *zeichen) {
  *rückgabe =200;
  *zeichen='H';
}

int main() {
  int *rückgabe;
  char *zeichen;
  fct(1, 2, 3, 4, &rückgabe, &zeichen);
  printf("rückgabe: ");
  printf("%i", "%i", rückgabe, zeichen);
  return 0;
}
