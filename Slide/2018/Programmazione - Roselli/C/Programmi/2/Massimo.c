/*
 * Massimo.c
 *
 *  Created on: 06/nov/2009
 *      Author: Veronica Rossano
 *
 *  Restituisce il massimo tra due numeri dati in input - Utilizzato come esempio
 *  per la selezione a due vie
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
 int a, b, max;
 printf("Inserire il primo valore ----> ");
 fflush(stdout);
 scanf("%d", &a);
 printf("Inserire il secondo valore ----> ");
 fflush(stdout);
 scanf("%d", &b);
 if (a>b)
    max=a;
 else
     max=b;
 printf("Il massimo e' %d \n", max);
 fflush(stdout);
 system("pause");
 return 0;
}
