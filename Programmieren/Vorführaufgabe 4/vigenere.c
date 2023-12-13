// eingabe in zahlen umwandeln, um diese zahlen das alphabet verschieben
// dann um diese zahl verschieben, buchstabe pro buchstabe
// dann die eingegebenen buchstaben den auszugebenden buchstaben zuweisen, ebenfalls für jeden buchstaben

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};

void schlüsselwort_in_zahlen(char schlüsselwort[], char eingabe_s[])
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
    extend(schlüsselwort, eingabe_s);
}

void extend(char schlüsselwort[], char eingabe_s[]) // erweitere das schlüsselwort auf 99 zeichen
{
    long int y = 0;
    long int z = 0;

    while (z < 99)
    {
        int i = 0;
        while (i < strlen(schlüsselwort))
        {
            eingabe_s[y] = eingabe_s[i];
            y++;
            i++;
        }

        z++;
    }
}

void text_in_zahlen(char text[], char eingabe_t[]) // wandle den text der eingegeben wurde in zahlen um, damit man das alphabet shiften kann.
{
    int z = 0;
    int y = 0;
    while (z < strlen(text))
    {
        if (text[z] != 32) // überprüfe ob es ein leerzeichen ist
        {
            int i;
            i = 0;
            while (i <= 26 && alphabet[i] != text[z])
            {

                i++;
            }

            eingabe_t[z] = i;
        }
        z++;
    }
}

void entschlüsseln(char text[], char eingabe_s[], char eingabe_t[])
{

    int i = 0;
    while (i < (strlen(text) - 1))
    {
        if (text[i] != 32)
        {
            if (eingabe_s[i] - eingabe_t[i] <= 0)
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

void verschlüsseln(char text[], char eingabe_s[], char eingabe_t[])
{
    int i = 0;
    while (i < (strlen(text) - 1))
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
    int eingabe_t[99];
    int eingabe_s[1000];
    char schlüsselwort[9];
    int modus;
    char text[99];

    printf("was wollen sie tun(1 = verschlüsseln, 2 = entschlüsseln)\n");
    scanf("%i", &modus);
    printf("geben sie das schlüsselwort an\n");
    scanf("%s", &schlüsselwort);
    printf("schlüsselwort: %s\n", schlüsselwort);
    getchar();
    printf("geben sie den gewünschten text ein:\n");
    fgets(text, sizeof(text), stdin);

    schlüsselwort_in_zahlen(schlüsselwort, eingabe_s);
    text_in_zahlen(text, eingabe_t);

    if (modus == 1)
    {

        verschlüsseln(text, eingabe_s, eingabe_t);
    }
    if (modus == 2)
    {

        entschlüsseln(text, eingabe_s, eingabe_t);
    }
    if (modus != 2 && modus != 1)
    {
        printf("ungültige Eingabe");
        return -1;
    }
}
