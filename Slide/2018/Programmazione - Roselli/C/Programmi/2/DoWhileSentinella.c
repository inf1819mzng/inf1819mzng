/*
 * DoWhileSentinella.c
 *
 *  Created on: 11-nov-2009
 *      Author: Veronica Rossano
 *  Il programma calcola il quadrato di un numero immesso in input dall'utente
 *  fino a quando l'utente non digita -1 per terminare. Obiettivo è mostrare
 *  il funzionamento del do while con sentinella
 */

#include <stdio.h>
#include <stdlib.h>
int main ()
{
     int numero, quadrato;
     printf("******************************************************************************");
     printf("\n****   Il programma calcola il quadrato di una serie di interi positivi   ***");
     printf("\n****             dati in input dall'utente. Digitare -1 per terminare     ***");
     printf("\n******************************************************************************");
     do
     {
    	 printf("\n\nInserire il valore da elevare al quadrato --> ");
    	 scanf("%d", &numero);
    	 if (numero!=-1)
         {
    		 quadrato=numero*numero;
    		 printf("Il quadrato di %d e' %d", numero, quadrato);
         }
     }while(numero!=-1);
     system ("pause");
     return 0;
}
