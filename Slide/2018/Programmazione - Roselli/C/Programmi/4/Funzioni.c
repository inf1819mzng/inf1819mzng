/*
 * Funzioni.c
 *
 *  Created on: 03/dic/2009
 *      Author: Acer
 */

#include <stdio.h>
#include <stdlib.h>

void cerchio (void);
void intersezione (void);
void base (void);
void triangolo (void);

int
main (void)
{
     cerchio();
     triangolo();
     intersezione ();
     system ("pause");
     return (0);
}

void
cerchio (void)
{
        printf("     *   \n");
        printf("  *     * \n");
        printf("    * *  \n");
}

void
intersezione (void)
{
     printf("    / \\  \n");
     printf("   /   \\  \n");
     printf("  /     \\  \n");
}

void
base (void)
{
     printf("  --------\n");
}

void triangolo (void)
{
     intersezione();
     base();
}
