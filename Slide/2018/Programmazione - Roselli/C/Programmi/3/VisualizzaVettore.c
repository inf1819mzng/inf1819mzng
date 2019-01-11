/*
 * VisualizzaVettore.c
 *
 *  Created on: 03/dic/2009
 *      Author: Acer
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main ()
{
        int i;
        int vettore[]={0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
        for (i=0; i<MAX; i++)
        {
           printf("Il %d valore e' --> %d\n", (i+1), vettore[i]);
        }
        system("pause");
        return(0);
}
