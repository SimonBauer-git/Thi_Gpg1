/* Taschenrechner
1.eingabe:
lese benötigte zahlen ein
prüfe ob eingabe passt, wenn nicht beende programm (ist die eingabe korrekt, int char, bruch mit z.B. 8/0 oder so)
2.verarbeitung:
entscheide welche rechenoperation
führe rechenoperation aus
3.

*/

#include <stdio.h>  // Bibliothek einbinden
#include <stdlib.h> // fuer Ein-/Ausgabe
int gemeinsamer_nenner;
int first_number[3];
int second_number[3];
int first_number_zähler;
int second_number_zähler;
int ergebnis[3];
int is_correct[5];
char operation;
int flag = 0;

int main()
{
    eingabe();
    if (flag == 1)
    {
        rechnung();
        if (flag == 1)
        {
            ausgabe();
        }
    }

    return 0; // Rueckgabe 0, alles ok
}

void eingabe()
{
    // eingabeteil
    printf("bitte geben sie den Zähler der erste Zahl ein:");
    is_correct[0] = scanf("%i", &first_number[1]);

    if (is_correct[0] == 1 && getchar() == '\n')
    {
        printf("bitte geben sie den Nenner der ersten Zahl ein:");
        is_correct[1] = scanf("%i", &first_number[2]);

        if (is_correct[1] == 1 && getchar() == '\n')
        {
            printf("bitte geben sie eine rechenoperation ein (Mögliche Eingabe: +,-,*,/)");
            is_correct[2] = scanf("%c", &operation);

            if (is_correct[2] == 1 && getchar() == '\n')
            {
                printf("bitte geben sie den Zähler zweiten Zahl ein:");
                is_correct[3] = scanf("%i", &second_number[1]);

                if (is_correct[3] == 1 && getchar() == '\n')
                {
                    printf("bitte geben sie den Nenner der zweiten Zahl ein:");
                    is_correct[4] = scanf("%i", &second_number[2]);
                }
                if (is_correct[4] != 1 || getchar() != '\n')
                {
                    printf("eingabe falsch \n");
                    return 0;
                }
            }
        }
    }
    if (is_correct[0] == 1 && is_correct[1] == 1 && is_correct[2] == 1 && is_correct[3] == 1 && is_correct[4] == 1 && (operation == '+' || operation == '-' || operation == '*' || operation == '/') && (first_number[2] != 0 && second_number[2] != 0))
    {
        flag = 1;
        printf("eingabe korrekt\n");
    }
    else
    {
        printf("eingabe falsch\n");
        flag = 0;
    }
}

void rechnung()
{ // rechenoperationen
    switch (operation)
    {
    case '+':
        gemeinsamer_nenner = first_number[2] * second_number[2];
        first_number_zähler = first_number[1] * second_number[2];
        second_number_zähler = second_number[1] * first_number[2];

        ergebnis[1] = first_number_zähler + second_number_zähler;
        ergebnis[2] = gemeinsamer_nenner;
        break;

    case '-':
        gemeinsamer_nenner = first_number[2] * second_number[2];
        first_number_zähler = first_number[1] * second_number[2];
        second_number_zähler = second_number[1] * first_number[2];

        ergebnis[1] = first_number_zähler - second_number_zähler;
        ergebnis[2] = gemeinsamer_nenner;
        break;

    case '*':
        ergebnis[1] = first_number[1] * second_number[1];
        ergebnis[2] = first_number[2] * second_number[2];
        break;

    case '/':
        if (second_number[1] != 0)
        {
            ergebnis[1] = first_number[2] * second_number[1];
            ergebnis[2] = first_number[1] * second_number[2];
        }
        else
        {
            printf("aber teilung durch 0 nicht möglich");
            flag = 0;
        }
        break;
    }
}

void ausgabe()
{ // ausgabeteil
    printf("Ergebnis %i", ergebnis[1]);
    printf("/");
    printf("%i\n", ergebnis[2]);
    printf("Dezimal, Gekürzt ");
    printf("%.2f\n", (float)ergebnis[1] / (float)ergebnis[2]);
}
