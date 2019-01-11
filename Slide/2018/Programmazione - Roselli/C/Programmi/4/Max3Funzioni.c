
/*
 * Massimo.c
 *
 *  Created on: 06/nov/2009
 *      Author: Veronica Rossano
 *
 *  Restituisce il massimo tra tre numeri dati in input - Utilizzato come esempio
 *  per l'uso delle funzioni. La soluzione infatti viene ottenuta cercando il massimo
 *  tra i numeri confrontandoli a coppie.
*/

#include <stdio.h>
#include <stdlib.h>

int maxcoppia(int primo, int secondo);

int main ()
{
 int a, b, c, massimo;
 printf("Inserire il primo valore ----> ");
 scanf("%d", &a);
 printf("Inserire il secondo valore ----> ");
 scanf("%d", &b);
 printf("Inserire il terzo valore ----> ");
 scanf("%d", &c);
 massimo=maxcoppia(a,b);
 massimo=maxcoppia(massimo,c);
 printf("Il massimo e' %d \n", massimo);
 system("pause");
 return 0;
}

int maxcoppia(int primo, int secondo)
{
	int max;
	if (primo>secondo)
		max=primo;
	else
		max=secondo;
	return (max);
}
