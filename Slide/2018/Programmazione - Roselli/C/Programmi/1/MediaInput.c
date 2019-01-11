/*
 * MediaInput.c
 *
 *  Created on: 4-nov-2009
 *      Author: Veronica
 */

#include <stdio.h>
#include <stdlib.h>
int main ()
{
     int a, b; /*definizione delle variabili locali al main*/
     float media;
     printf("Inserisci il primo valore \n");
     scanf("%d", &a);
     printf("Inserisci il secondo valore \n");
     scanf("%d", &b);
     media= (float)(a+b)/2;
     printf("Valore medio: %f \n", media);
     system ("pause");
     return 0;

}
