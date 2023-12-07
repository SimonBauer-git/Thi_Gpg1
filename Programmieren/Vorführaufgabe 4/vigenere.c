// eingabe in zahlen umwandeln, um diese zahlen das alphabet verschieben erledigt
// dann um diese zahl verschieben, buchstabe pro buchstabe
// dann die eingegebenen buchstaben den auszugebenden buchstaben zuweisen, ebenfalls für jeden buchstaben

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
char schlüsseltabelle[27][16];
void wort_in_zahlen(char schlüsselwort[], int eingabe_z[]) // wandle das codewort das eingegeben wurde in zahlen um, damit man das alphabet shiften kann.
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

        z++;
        eingabe_z[z] = i;
    }
    tabelle_erstellen(eingabe_z);
}

void tabelle_erstellen(int eingabe_z[]) // erstelle die schlüsseltabelle in einem mehrdimensionalen array
{
    int i = 0;
    while (i < 27)
    { // verschiebe die erste zeile um den ersten buchstaben
        schlüsseltabelle[i][0] = alphabet[eingabe_z[0] + i];
        printf("%c", schlüsseltabelle[0][0]);
        i++;
    }
    
}

void entschlüsseln()
{
}

void verschlüsseln()
{
}

int main()
{
    int modus;
    char schlüsselwort[10];
    int eingabe_z[10];

    printf("was wollen sie tun(1 = verschlüsseln, 2 = entschlüsseln)\n");
    scanf("%i", &modus);
    printf("geben sie das schlüsselwort an\n");
    scanf("%s", &schlüsselwort);
    printf("schlüsselwort: %s\n", schlüsselwort);
    wort_in_zahlen(schlüsselwort, eingabe_z);

    if (modus == 1)
    {
       
        verschlüsseln();
    }
    if (modus == 2)
    {
       
        entschlüsseln();
    }
    if (modus != 2 && modus != 1)
    {
        printf("ungültige Eingabe");
        return -1;
    }
}
