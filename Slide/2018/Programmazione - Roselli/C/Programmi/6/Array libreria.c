/*
 * Array libreria.c
 *
 *  Created on: 15-dic-2009
 *      Author: Veronica
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define MAX 100

int cerca_in_vettore(int vettore[], int dim, int valore);

int
main (void)
{
     int n, valore, pos;
     int vett[MAX];
     printf("Inserire il numero degli elementi del vettore (Massimo 100) -->");
     scanf("%d", &n);
     inizializza(vett, n);
     printf("\n\nInserire il numero da cercare -->");
     scanf("%d", &valore);
     pos=cerca_in_vettore(vett, n, valore);
     if (pos==-1)
        printf("\nL'elemento cercato non esiste\n\n");
     else
        printf("\nL'elemento cercato si trova in posizione %d\n\n", (pos+1));
     system("pause");
     return(0);
}


int cerca_in_vettore(int vettore[], int dim, int valore)
{
        int i, posizione;
        posizione=-1;
        i=0;
        while ((i<dim) && (posizione==-1))
        {
              if (vettore[i]==valore)
                 posizione=i;
              ++i;
        };
        return (posizione);

}
