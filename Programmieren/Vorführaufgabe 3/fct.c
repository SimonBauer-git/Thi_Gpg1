#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float fct(double x, int n)
{
    switch (n)
    {
    case 1:
        return 2 * x - 4;
        break;
    case 2:
        return (1. / 7) + (1. / x);
        break;
    case 3:
        return (exp(x) - (2 * x) - 3);
        break;
    case 4:
        return (pow((x - 2.0), 3.0) + 2.0);
        break;
    case 5:
        return sin(2 * x);
        break;
    }
}
int nullstelle(int n, int a, int b, int g, int *ok, int *x0, int *anzit)
{
    *ok = 2;
    *x0 = 1;
    *anzit = 1;
}

int main()
{
    int n, ok, x0, anzit;
    double fx;
    double x;
    prinf("welche Funktion wollen sie berechnen");
    scanf("%i", &n);
    prinf("Geben sie einen Wert für x an");
    scanf("%d", &x);
    fx = fct(n, x);
    printf("%d", fx);
    nullstelle(1, 2, 3, 4, &ok, &x0, &anzit);
    return 0;
}
