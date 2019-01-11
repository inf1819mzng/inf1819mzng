
/*
 * HelloWorld.c
 *
 *  Created on: 06/nov/2009
 *      Author: Veronica Rossano
 *
 *    Questo programma scrive Hello World 10 volte
 */

#include <stdio.h>
int main ()
{
     int conta;
     conta=0;
     while (conta<10)
     {
    	 conta=conta+1;
    	 printf("%d. Hello world \n", conta);
     }
     return 0;
}
