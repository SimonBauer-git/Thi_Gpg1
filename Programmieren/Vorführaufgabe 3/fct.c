#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int fct(int x, int n) {
  switch (n) {
  case 1:
    return 2*x-4;
    break;
  case 2:
    return (1/7)+(1/x);
    break;
  case 3:
  printf("3");
    break;
  case 4:
  printf("4");
    break;
  case 5:
  printf("5");
    break;
  }
}
int nullstelle(int n, int a, int b, int g, int *ok, int *x0, int *anzit) {
  *ok = 2;
  *x0 = 1;
  *anzit = 1;
}

int main() {
  int n, ok, x0, anzit;
  int fx;
  fx =fct(1,2);
  printf("%i", fx);
  nullstelle(1, 2, 3, 4, &ok, &x0, &anzit);
  return 0;
}
