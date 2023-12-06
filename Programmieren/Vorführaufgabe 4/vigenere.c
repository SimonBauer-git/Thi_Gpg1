#include <stdlib.h>
#include <stdio.h>

int main()
{
    char schlüssel[][16] = {
        {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},
    };
    int modus;

    printf("was wollen sie tun(1 = verschlüsseln, 2 = entschlüsseln)\n");
    scanf("%i", &modus);

    if (modus == 1)
    {
        printf("verschlüsseln");
    }
    if (modus == 2)
    {
        printf("entschlüsseln");
    }
    else
    {
        printf("ungültige Eingabe");
        return -1;
    }
}