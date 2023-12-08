// eingabe in zahlen umwandeln, um diese zahlen das alphabet verschieben erledigt
// dann um diese zahl verschieben, buchstabe pro buchstabe
// dann die eingegebenen buchstaben den auszugebenden buchstaben zuweisen, ebenfalls für jeden buchstaben

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int modus;

    char schlüsselwort[10];
    int eingabe_s[10];
    
    char text[99];
    int eingabe_t[99];

char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
void schlüsselwort_in_zahlen(char schlüsselwort[], int eingabe_s[]) // wandle das codewort das eingegeben wurde in zahlen um, damit man das alphabet shiften kann.
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
        eingabe_s[z] = i;
    }

}

void text_in_zahlen(char text[], int eingabe_t[]) // wandle den text der eingegeben wurde in zahlen um, damit man das alphabet shiften kann.
{
    int z = 0;
    while (z < strlen(text))
    {
        int i;
        i = 0;
        while (i <= 26 && alphabet[i] != text[z])
        {

            i++;
        }

        z++;
        eingabe_t[z] = i;
    }

printf("%i",eingabe_t[0]);}

/*void tabelle_erstellen(int eingabe_t[]) // erstelle die schlüsseltabelle in einem mehrdimensionalen array
{
    int i = 0;
    while (i < 27)
    { // verschiebe die erste zeile um den ersten buchstaben
        schlüsseltabelle[i][0] = alphabet[eingabe_t[0] + i];
        printf("%c", schlüsseltabelle[0][0]);
        i++;
    }
    
}*/


void entschlüsseln()
{
}

void verschlüsseln(int eingabe_s[], int eingabe_t[])
{printf("%c" ,alphabet[eingabe_s[0]+eingabe_t[0]]);
}

int main()
{
    printf("was wollen sie tun(1 = verschlüsseln, 2 = entschlüsseln)\n");
    scanf("%i", &modus);
    printf("geben sie das schlüsselwort an\n");
    scanf("%s", &schlüsselwort);
    printf("schlüsselwort: %s\n", schlüsselwort);
    printf("geben sie den gewünschten text ein:\n");
    scanf("%s",&text);

    schlüsselwort_in_zahlen(schlüsselwort, eingabe_s);
    text_in_zahlen(text, eingabe_t);

    if (modus == 1)
    {
       
        verschlüsseln(eingabe_s, eingabe_t);
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
