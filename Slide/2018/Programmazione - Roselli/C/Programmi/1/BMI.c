/*
  Name: Calcola l'Indice di Massa Corporea
  Copyright:
  Author:
  Date: 24/10/06 18.52
  Description: Questo programma consente di calcolare l'indice di massa corporea
               (bmi)
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
     float altezza, peso, bmi;
     printf("Inserire l'altezza espressa in metri (es. 1.61) ---->   ");
     fflush(stdout);
     scanf("%f", &altezza);
     printf("Inserire il peso espresso in kg (es. 60.5) ---->   ");
     fflush(stdout);
     scanf("%f", &peso);
     /* calcolo dell'indice di massa corporea */
     bmi = peso/(altezza * altezza);
     printf("L'indice di massa corporea e' pari a %f  \n", bmi);
     fflush(stdout);
     system("pause");
     return 0;
}
