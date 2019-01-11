/*
 * ArrayMultidim-Temperatura.c
 *
 *  Created on: 08/dic/2009
 *      Author: Acer
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum
        {min, max}
min_max;

typedef enum
	{lunedi, martedi, mercoledi, giovedi, venerdi, 	sabato, domenica}
settimana;

void stampagiorno(settimana giorno);

int
main (void)
{
     double temperatura[7][2];
     double media_min=0, media_max=0;
     settimana i;
     for(i=lunedi; i<=domenica; ++i)
     {
                   printf("Inserire le temperature minima e massima di ");
                   stampagiorno(i);
                   printf(" separate da uno spazio -->");
                   scanf("%lf %lf", &temperatura[i][min], &temperatura[i][max]);
                   media_min+=temperatura[i][min];
                   media_max+=temperatura[i][max];
     }
    media_min/=7;
    media_max/=7;
    printf("La temperatura minima media della settimana e' stata : %.2f\n", media_min);
    printf("La temperatura massima media della settimana e' stata : %.2f\n", media_max);
    system("pause");
    return(0);
}

void
stampagiorno(settimana giorno)
{
  switch (giorno)
  {
  case lunedi: printf("lunedi'");
          break;
  case martedi: printf("martedi'");
          break;
  case  mercoledi: printf("mercoledi'");
          break;
  case giovedi: printf("giovedi'");
          break;
  case venerdi: printf("venerdi'");
          break;
  case sabato: printf("sabato");
          break;
  case domenica: printf("domenica");
          break;
  }
}

