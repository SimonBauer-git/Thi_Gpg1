#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double fct(double x, int n)
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
void nullstelle(int n, double a, double b, double g, double *x0, int *anzit, int *ok)
{
    double mittelwert;
    
    if ((fct(a,n) > 0 && fct(b,n) < 0)||(fct(a,n) < 0 && fct(b,n) > 0))
    {
    while (fabs(b - a) > g)
    {
        mittelwert = (a + b) / 2;

        if (fct(mittelwert, n) == 0)
        {
            break;
        }

        if ((fct(a,n) > 0 && fct(mittelwert,n) < 0)||(fct(a,n) < 0 && fct(mittelwert,n) > 0)) {
            b = mittelwert;}

        else
        {
            a = mittelwert;
        }

    (*anzit)++;
    }
(*x0)=mittelwert;

}
else
{(*ok)=0;}}

int main()
{   int n, anzit, ok;
    double a, b, g, x0;

    printf("welche Funktion wollen sie berechnen\n");
    scanf("%i", &n);

    printf("geben sie die intervallgrenze a ein\n");
    scanf("%lf", &a);

    printf("geben sie die intervallgrenze b ein\n");
    scanf("%lf", &b);

    printf("geben sie die genauigkeit g ein\n");
    scanf("%lf", &g);
    if(a<b)
    {nullstelle(n, a, b, g, &x0, &anzit, &ok);}                     //erkennt wie das interval eingegeben wurde, ob a oder b die obere grenze ist

    if(a>b)
    {nullstelle(n, b, a, g, &x0, &anzit, &ok);}

    
    if (ok !=0){
    printf("die Nullstelle liegt bei %lf", x0);
    printf(", Anzahl der Iterationsschritte: %i", anzit);
    }
    
    else
    {printf("keine Nullstelle gefunden");}
    return 0;
}
