/* Erstes C-Programm Hello World 
   1. VL EMB
*/

#include <stdio.h>	// Bibliothek einbinden
#include <stdlib.h>			// fuer Ein-/Ausgabe

int main(){
int number;
printf("enter an integer: ");
scanf("%d",&number);
printf("you entered %d",number);
	return 0;	// Rueckgabe 0, alles ok
}