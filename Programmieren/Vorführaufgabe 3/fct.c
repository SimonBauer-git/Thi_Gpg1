#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float fct(float x, int n)
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
int nullstelle(int n, int a, int b, int g, int *x0, int *anzit)
{
    *x0 = 1;
    *anzit = 1;
    float mittelwert = (a + b) / 2;
    float fx1;
    float fx2;

    fx1 = fct(a, n);
    fx2 = fct(b, n);
    while ((mittelwert - g != 0) || (g - mittelwert != 0))
    {
        if ((fx1 < 0 && fx2 < 0) || (fx1 > 0 && fx2 > 0))
        {
            mittelwert = (a + b) / 2;
            fx1 = fct(a, n);
            fx2 = fct(b, n);
            
        }
    }
}

int main()
{ // 1. Aufgabe
    int n, ok, x0, anzit;
    float fx;
    float x;
    printf("welche Funktion wollen sie berechnen\n");
    scanf("%i", &n);
    printf("Geben sie einen Wert für x an\n");
    scanf("%f", &x);
    fx = fct(x, n);
    printf("%f\n", fx);

    // 2. Aufgabe
    double a, b;
    int g;

    printf("geben sie die intervallgrenze a ein\n");
    scanf("%d", &a);

    printf("geben sie die intervallgrenze b ein\n");
    scanf("%d", &b);

    printf("geben sie die genauigkeit g ein\n");
    scanf("%d", &g);

    nullstelle(n, a, b, g, &x0, &anzit);
    printf("ergebnisse sind: %i, %d, %d, %i, %i, %i", n, a, b, g, x0, anzit);
    return 0;
}
