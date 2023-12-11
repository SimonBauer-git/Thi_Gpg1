#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int modus;

char schlüsselwort[9];
int eingabe_s[9];
int eingabe_s_xt[99];

char text[99];
int eingabe_t[99];

char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
void schlüsselwort_in_zahlen()
{
    int z = 0;
    while (z < strlen(schlüsselwort))
    {
        int i;
        i = 0;
        while (i <= 26 && alphabet[i] != schlüsselwort[z])
        {

            i++;
        }

        eingabe_s[z] = i;
        z++;
    }
    extend();
}

void extend()
{
    int z = 0;

    while (z < 99)
    {
        int i = 0;
        while (i < strlen(schlüsselwort))
        {
            eingabe_s_xt[i] = eingabe_s[i];
            
        printf("%i, ", eingabe_s_xt[i]);
        i++;}
        
        z++;
    }
}

int main()
{
    printf("geben sie das schlüsselwort an\n");
    scanf("%s", &schlüsselwort);
    printf("schlüsselwort: %s\n", schlüsselwort);
    schlüsselwort_in_zahlen();
}
