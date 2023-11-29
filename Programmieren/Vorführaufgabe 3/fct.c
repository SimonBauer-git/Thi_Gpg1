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
void nullstelle(int n, double a, double b, double g, double *x0, int *anzit)
{
    *x0 = 1;
    double mittelwert = fabs(a + b) / 2;
    double fx1;
    double fx2;
    fx1 = fct(a, n);
    fx2 = fct(b, n);
    while (g < fabs(b-a))
    {   fx1 = fct(a, n);
        fx2 = fct(b, n);
        mittelwert=fct((fabs(a+b))/2,n);
        if ((fx1 > 0 && mittelwert < 0)||(fx1 < 0 && mittelwert > 0))       //schauen ob in im interval a mittelwert ein vorzeichenwechsel ist
        {
            a=mittelwert;
        }

        if ((fx2 > 0 && mittelwert < 0)||(fx2 < 0 && mittelwert > 0))       //schauen ob in im interval b mittelwert ein vorzeichenwechsel ist
        {
            b=mittelwert;
        }
        
    *anzit++; }
    *x0 = fabs(a + b) / 2;
    printf("ergebnisse sind: %d, %i", *x0, *anzit);
}

int main()
{ // 1. Aufgabe
    int n, anzit;
    double fx, x0;
    printf("welche Funktion wollen sie berechnen\n");
    scanf("%i", &n);

    // 2. Aufgabe
    double a, b;
    double g;

    printf("geben sie die intervallgrenze a ein\n");
    scanf("%i", &a);

    printf("geben sie die intervallgrenze b ein\n");
    scanf("%i", &b);

    printf("geben sie die genauigkeit g ein\n");
    scanf("%i", &g);

   nullstelle(n, a, b, g, &x0, &anzit);
    
    return 0;
}
