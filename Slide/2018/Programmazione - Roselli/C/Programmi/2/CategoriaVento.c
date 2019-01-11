/*
 * CategoriaVento.c
 *
 *  Created on: 06/nov/2009
 *      Author: Veronica Rossano
 *
 *      Questo programma classifica il vento sulla base della sua velocità specificata in input  (in Km/h)
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
 float velocita;
 printf("Inserire la velocità del vento in Km/h (es. 20.5) ----> ");
 fflush(stdout);
 scanf("%f", &velocita);
 if (velocita<25)
	printf("Vento Debole\n");
 else if (velocita>=25 && velocita<=38)
	printf("Vento Forte\n");
 else if (velocita>=39 && velocita<=54)
	printf("Tempesta\n");
 else if (velocita>=55 && velocita<=72)
	printf("Forte Tempesta\n");
 else
	printf("Uragano\n");
 fflush(stdout);
 system("pause");
 return 0;
}

