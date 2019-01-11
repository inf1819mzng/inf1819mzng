/*
 * Struttura Libro.c
 *
 *  Created on: 15/dic/2009
 *      Author: Acer
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
        char autore[20];
        char titolo[50];
        char isbn[11];
        int disponibilita;
} libro_t;

libro_t inserisci_dettagli();
void stampa_dettagli(libro_t book);

int
main ()
{
     libro_t libro;
     printf("**********************************************************\n" );
     printf("**                Inserisci i dati del libro            **\n" );
     printf("**********************************************************\n" );
     libro=inserisci_dettagli();
     printf("\n\n\n******************************************\n" );
     printf("**    I dati del libro inseriti sono:   **\n" );
     printf("******************************************\n" );
     stampa_dettagli(libro);
     system("pause");
     return(0);
}

libro_t inserisci_dettagli()
{
     libro_t book;
     printf("\n\n       AUTORE   --> " );
     scanf("%s", book.autore);
     printf("\n\n       TITOLO   --> " );
     scanf("%s", book.titolo);
     printf("\n\n       ISBN   --> " );
     scanf("%s", book.isbn);
     printf("\n\n       DISPONIBILITA'  --> " );
     scanf("%d", &book.disponibilita);

}

void stampa_dettagli(libro_t *book)
{

     printf("\n\n       AUTORE   --> %s", book->autore);
     printf("\n\n       TITOLO   --> %s",  book->titolo);
     printf("\n\n       ISBN   --> %s", book->isbn);
     printf("\n\n       DISPONIBILITA'  --> %d \n\n", book->disponibilita);
}
