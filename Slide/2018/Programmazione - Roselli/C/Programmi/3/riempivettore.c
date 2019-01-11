/*
 * riempivettore.c
 *
 *  Created on: 03/dic/2009
 *      Author: Acer
 */


#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main ()
{
     int vettore[MAX];
     int i;
        for (i=0; i<MAX; ++i)
        {
          printf("\nInserire il %d valore --> ", (i+1));
          scanf("%d", &vettore[i]);
        }
     system("pause");
     return(0);
}

