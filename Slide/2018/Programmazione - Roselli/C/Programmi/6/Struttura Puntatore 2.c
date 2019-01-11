#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
        char cognome[20];
        char nome[20];
        char matricola[6];
        char corso_di_laurea[20];
} studente_t;
void inserisci_dettagli(studente_t *stud);
void stampa_dettagli(studente_t stud);

int
main ()
{
     studente_t studente;
     printf("**********************************************************\n" );
     printf("**    Inserisci i dati identificativi dello studente    **\n" );
     printf("**********************************************************\n" );
     inserisci_dettagli(&studente);

     printf("\n\n\n**************************************************************\n" );
     printf("**    I dati identificativi dello studente inseriti sono:   **\n" );
     printf("**************************************************************\n" );
     stampa_dettagli(studente);
     system("pause");
     return(0);
}

void inserisci_dettagli(studente_t *stud)
{
     printf("\n\n       COGNOME   --> " );
     scanf("%s", stud->cognome);
     printf("\n\n       NOME   --> " );
     scanf("%s", stud->nome);
     printf("\n\n       MATRICOLA   --> " );
     scanf("%s", stud->matricola);
     printf("\n\n       CORSO DI LAUREA IN   --> " );
     scanf("%s", stud->corso_di_laurea);

}

void stampa_dettagli(studente_t stud)
{
     printf("\n\n       COGNOME   --> %s", stud.cognome);
     printf("\n\n       NOME   -->  %s", stud.nome);
     printf("\n\n       MATRICOLA   --> %s", stud.matricola);
     printf("\n\n       CORSO DI LAUREA IN   --> %s\n\n", stud.corso_di_laurea);
}
