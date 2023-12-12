// eingabe in zahlen umwandeln, um diese zahlen das alphabet verschieben erledigt
// dann um diese zahl verschieben, buchstabe pro buchstabe
// dann die eingegebenen buchstaben den auszugebenden buchstaben zuweisen, ebenfalls für jeden buchstaben

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int modus;

char schlüsselwort[9];
int eingabe_s[99];


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
//extend();
}

/*void extend()//erweitere das schlüsselwort auf 99 zeichen
{int y=0;
    int z = 0;

    while (z < 99)
    {
        int i = 0;
        while (i < strlen(schlüsselwort))
        {
            eingabe_s[y] = eingabe_s[i];
        y++;    
        i++;}
        
        z++;
    }
}
*/
void text_in_zahlen() // wandle den text der eingegeben wurde in zahlen um, damit man das alphabet shiften kann.
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

        eingabe_t[z] = i;
        z++;
    }
}

void entschlüsseln()
{

    int i = 0;
    while (i < strlen(text))
    {
        if (text[i] != 32)
        {
            if (eingabe_s[i] - eingabe_t[i] < 0)
            {
                printf("%c", alphabet[eingabe_t[i] - eingabe_s[i]]);
            }
            else
            {
                printf("%c", alphabet[(eingabe_t[i] - eingabe_s[i]) + 26]); // loopback wenn die summe größer als 27 ist
            }
        }
        else
        {
            printf(" ");
        }
        i++;
    }
}

void verschlüsseln()
{
    int i = 0;
    while (i < strlen(text))
    {
        if (text[i] != 32)
        {
            if (eingabe_s[i] + eingabe_t[i] < 27)
            {
                printf("%c", alphabet[eingabe_s[i] + eingabe_t[i]]);
            }
            else
            {
                printf("%c", alphabet[(eingabe_s[i] + eingabe_t[i]) - 26]); // loopback wenn die summe größer als 27 ist
            }
        }
        else
        {
            printf(" ");
        }
        i++;
    }
}

int main()
{

    printf("was wollen sie tun(1 = verschlüsseln, 2 = entschlüsseln)\n");
    scanf("%i", &modus);
    printf("geben sie das schlüsselwort an\n");
    scanf("%s", &schlüsselwort);
    printf("schlüsselwort: %s\n", schlüsselwort);
    printf("geben sie den gewünschten text ein:\n");
    scanf("%s", &text);

    schlüsselwort_in_zahlen();
    text_in_zahlen();

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
