/*
 * VettoreEFunzioni.c
 *
 *  Created on: 08/dic/2009
 *      Author: Acer
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void inizializza(int vettore[], int dim, int valore);
void visualizza(int vettore[], int dim);

int
main (void)
{
     int n, val_inizializzazione;
     int vett[MAX];
     printf("Inserire il numero degli elementi del vettore (Massimo 100) -->");
     scanf("%d", &n);
     printf("Inserire il valore di inizializzazione degli elementi del vettore -->");
     scanf("%d", &val_inizializzazione);
     inizializza(vett, n, val_inizializzazione);
     visualizza(vett, n);
     system("pause");
     return(0);
}

void inizializza(int vettore[], int dim, int valore)
{
        int i;
        for (i=0; i<dim; i++)
        {
          vettore[i]=valore;
        }
}

void visualizza(int vettore[], int dim)
{
        int i;
        for (i=0; i<dim; i++)
        {
           printf("Il %d valore e' --> %d\n", (i+1), vettore[i]);
        }
}
