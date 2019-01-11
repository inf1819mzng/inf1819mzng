/*
 * Media.c
 *
 *  Created on: 06/nov/2009
 *      Author: Veronica Rossano
 *
 *  Questo programma realizza la media tra due numeri senza l'uso delle funzioni di input
 */

#include <stdio.h>
int main ()
{
     int a, b, media; /*definizione delle variabili locali al main*/
     a=6;
     b=10;
     media=(a+b)/2;
     printf("Media tra 6 e 10: %d ", media);
     return 0;
}
