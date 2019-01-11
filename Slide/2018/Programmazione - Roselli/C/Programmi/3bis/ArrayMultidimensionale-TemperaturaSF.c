/*
 * ArrayMultidimensionale-TemperaturaSF.c
 *
 *  Created on: 13/dic/2010
 *      Author: Acer
 */

/*
 * ArrayMultidim-Temperatura.c
 *
 *  Created on: 13/12/2010
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

int
main (void)
{
     double temperatura[7][2];
     double media_min=0, media_max=0;
     settimana i;
     for(i=lunedi; i<=domenica; ++i)
     {
                   printf("Inserire le temperature minima e massima del %d giorno", i+1);
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
