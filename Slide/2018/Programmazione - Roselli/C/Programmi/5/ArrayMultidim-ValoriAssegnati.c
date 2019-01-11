/*
 * ArrayMultidim-ValoriAssegnati.c
 *
 *  Created on: 08/dic/2009
 *      Author: Acer
 */
#include <stdio.h>
#include <stdlib.h>

typedef enum
	{lunedi, martedi, mercoledi, giovedi, venerdi, 	sabato, domenica}
settimana;

void stampagiorno(settimana giorno);

int
main (void)
{
     settimana i;
     float media=0;
     float temp[7][2] = {{10.5, 16.5}, {12.4, 22.3}, {12.4, 22.3}, {10.5, 16.5}, {10.5, 16.5}, {10.5, 16.5}, {10.5, 16.5}};
     for (i=lunedi;i<=domenica; i++)
     {
      media+=(temp[i][0]+temp[i][1])/2;
      printf("\nLa media di ");
      stampagiorno(i);
     printf(" e' stata --> %.2f \n", media);
     }
     system("pause");
     return(0);
}

void
stampagiorno(settimana giorno)
{
  switch (giorno)
  {
  case lunedi: printf("lunedi' ");
          break;
  case martedi: printf("martedi' ");
          break;
  case  mercoledi: printf("mercoledi' ");
          break;
  case giovedi: printf("giovedi' ");
          break;
  case venerdi: printf("venerdi' ");
          break;
  case sabato: printf("sabato ");
          break;
  case domenica: printf("domenica ");
          break;
  }
}

