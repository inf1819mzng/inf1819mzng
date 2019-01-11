#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 60

typedef struct
{
        char cognome[20];
        char nome[20];
        int laboratorio;
        int scritto;
        int orale;
        int media;
} studente_t;

studente_t inserisci_dettagli(void);
void stampa_dettagli(studente_t stud);

int
main ()
{
     studente_t studente[MAX];
     int n,i;
     printf("Inserire il numero degli studenti (Massimo 60) -->");
     scanf("%d", &n);
     for(i=0; i<n; ++i)
     {
              printf("\n\n**    Inserisci i dati del %d studente    **", i+1 );
              studente[i]=inserisci_dettagli();
     };
     for(i=0; i<n; ++i)
     {
              printf("\n\n**    I voti del %d studente sono    **", i+1 );
              stampa_dettagli(studente[i]);
     };
     system("pause");
     return(0);
}

studente_t inserisci_dettagli()
{
     studente_t stud;
     printf("\n\n       COGNOME   --> " );
     scanf("%s", stud.cognome);
     printf("\n\n       NOME   --> " );
     scanf("%s", stud.nome);
     printf("\n\n       VOTO DELLA PROVA DI LABORATORIO   --> " );
     scanf("%d", &stud.laboratorio);
     printf("\n\n       VOTO DELLA PROVA SCRITTA   --> " );
     scanf("%d", &stud.scritto);
     printf("\n\n       VOTO DELLA PROVA ORALE   --> " );
     scanf("%d", &stud.orale);
     stud.media=(stud.laboratorio+stud.orale+stud.scritto)/3;
     return(stud);

}

void stampa_dettagli(studente_t stud)
{
     printf("\n\n       COGNOME   --> %s", stud.cognome);
     printf("\n\n       NOME   -->  %s", stud.nome);
     printf("\n\n       PROVA DI LABORATORIO   --> %d", stud.laboratorio);
     printf("\n\n       PROVA SCRITTA   --> %d", stud.scritto);
     printf("\n\n       PROVA ORALE   --> %d\n\n", stud.orale);
     printf("\n\n       VOTO FINALE --> %d\n\n", stud.media);
}
