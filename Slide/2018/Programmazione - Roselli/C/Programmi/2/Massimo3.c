/*
 * Massimo.c
 *
 *  Created on: 06/nov/2009
 *      Author: Veronica Rossano
 *
 *  Restituisce il massimo tra tre numeri dati in input - Utilizzato come esempio
 *  per la selezioni innestate
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
 int a, b, c, max;
 printf("Inserire il primo valore ----> ");
 fflush(stdout);
 scanf("%d", &a);
 printf("Inserire il secondo valore ----> ");
 fflush(stdout);
 scanf("%d", &b);
 printf("Inserire il terzo valore ----> ");
 fflush(stdout);
 scanf("%d", &c);
 if (a>b)
		 if (a>c)
			 max=a;
		 else
			 max=c;
 else
	 if (b>c)
		 max=b;
	 else
		 max=c;
 printf("Il massimo e' %d \n", max);
 fflush(stdout);
 system("pause");
 return 0;
}
