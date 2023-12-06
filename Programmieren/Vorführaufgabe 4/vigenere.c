#include <stdlib.h>
#include <stdio.h>

char alphabet[26] = {'a', 'b' ,'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};

void verschlüsseln ()
{//eingabe in zahlen umwandeln, um diese zahlen das alphabet verschieben
//dann um diese zahl verschieben, buchstabe pro buchstabe
//dann die 
}

void entschlüsseln()
{}

int main()
{
    int modus;
    char schlüsselwort [10];

    printf("was wollen sie tun(1 = verschlüsseln, 2 = entschlüsseln)\n");
    scanf("%i", &modus);
    printf("geben sie das schlüsselwort an\n");
    scanf("%s",&schlüsselwort);
    printf("schlüsselwort: %s\n", schlüsselwort);
    
    if (modus == 1)
    {
        printf("verschlüsseln");
        verschlüsseln();
    }
    if (modus == 2)
    {
        printf("entschlüsseln");
        verschlüsseln();
    }
    if (modus !=2 && modus !=1)
    {
        printf("ungültige Eingabe");
        return -1;
    }
}
