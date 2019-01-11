/*
 * ArrayMultidim-ValoriAssegnati.c
 *
 *  Created on: 13/dic/2010
 *      Author: Acer
 */

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

int
main (void)
{
     settimana i;
     float media=0;
     float temp[7][2] = {{10.5, 16.5}, {12.4, 22.3}, {12.4, 22.3}, {10.5, 16.5}, {1, 7}, {10, 6.5}, {5, 12.5}};
     for (i=lunedi;i<=domenica; i++)
     {
      media=(temp[i][0]+temp[i][1])/2;
      printf("\nLa media del %d  giorno della settimana e' stata --> %.2f \n", i+1, media);
     }
     system("pause");
     return(0);
}
