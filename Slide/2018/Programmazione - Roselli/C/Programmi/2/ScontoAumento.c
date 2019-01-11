/*
 * ScontoAumento.c
 *
 *  Created on: 8-nov-2009
 *      Author: Veronica Rossano
 *  Description: Programma che calcola, a partire da un importo dato in input all'utente, uno sconto o
 *               un aumento
*/

#include <stdio.h>
#include <stdlib.h>


int main ()
{
     /*Dichiarazione delle variabili locali*/
     float importo ;/* I/O, */
     int numero ;  /* I/O, */

     printf("**********************************************************\n");
     printf("**              Calcola sconto e aumento                **\n");
     printf("** Dato in input un importo e il numero dell'operazione **\n");
     printf("**          da eseguire il programma restituisce        **\n");
     printf("**                 l'importo aggiornato                 **\n");
     printf("**********************************************************\n");

    do
    {
         printf ("\n\n\n--->  1  <--- per uno sconto del 10 per cento");
         printf ("\n--->  2  <--- per uno sconto del 20 per cento ");
         printf ("\n--->  3  <--- per un aumento del 30 per cento");
         printf ("\n--->  4  <--- per un aumento del 40 per cento ");
         printf ("\n--->  5  <--- per uscire");
         printf ("\n\nDigitare il numero dell'operazione da eseguire---> ");
         fflush(stdout);
         scanf ("%d", &numero);
         switch (numero)   {
                case 1:
                     printf ("\nInserire l'importo da scontare  ---> ");
                     fflush(stdout);
                     scanf ("%f", &importo);
                     importo *= .9 ;
                     printf ("\n Importo aggiornato=  %.2f   \n\n", importo);
                     fflush(stdout);
                     break ;
                case 2:
                     printf ("\nInserire l'importo da scontare  ---> ");
                     fflush(stdout);
                     scanf ("%f", &importo);
                     importo *= .8;
                     printf ("\n Importo aggiornato=  %.2f   \n\n", importo);
                     fflush(stdout);
                     break ;
                case 3 :
                     printf ("\nInserire l'importo da aumentare  ---> ");
                     fflush(stdout);
                     scanf ("%f", &importo);
                     importo *= 1.3;
                     printf ("\n Importo aggiornato=  %.2f   \n\n", importo);
                     fflush(stdout);
                     break ;
                case 4 :
                     printf ("\nInserire l'importo da aumentare  ---> ");
                     fflush(stdout);
                     scanf ("%f", &importo);
                     importo *= 1.4;
                     printf ("\n Importo aggiornato=  %.2f   \n\n", importo);
                     fflush(stdout);
                     break ;
                default :
                        printf ("\n");
         }  /* fine switch */

        system ("PAUSE");
        fflush(stdout);
   } while ( numero != 5 ) ;

return 0;
}
