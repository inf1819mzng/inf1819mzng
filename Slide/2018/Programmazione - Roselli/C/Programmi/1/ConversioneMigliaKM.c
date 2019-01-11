/*
  Name: ConvertiInKM
  Copyright:
  Author:
  Date: 23/10/06 18.26
  Description: Questo programma converte una distanza espressa in miglia
                ad una distanza espressa in KM
*/
#include <stdio.h>
#include <stdlib.h>
#define KMS_PER_MIGLIA 1.609 /* 1609e-3 costante utile per la conversione */

int main ()
{
     float miglia, kms;
     printf("Inserire la distanza in Miglia (es. 21.33) ---->   ");
     fflush(stdout);
     scanf("%f", &miglia);

     /* conversione della distanza in km */
     kms = KMS_PER_MIGLIA * miglia;
     printf("La distanza %f corrisponde a %f chilometri.  \n", miglia, kms);
     fflush(stdout);
     system("pause");
     return 0;
}
