/*
 * Scrivi File.c
 *
 *  Created on: 15/dic/2009
 *      Author: Acer
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int
main ()

{
        FILE *primo_file;
        char ch[60];
        int i, lung;
        strcpy(ch, "ciao oggi è l'ultima lezione");
        lung=strlen(ch);
        primo_file=fopen("CiaoMondo.txt", "w+");
        if (primo_file==NULL)
        {
           printf("Impossibile aprire il file");
        }
        else
        {
           for(i=0; i<=lung; i++)
                 putc(ch[i], primo_file);
           printf("Il file e' stato creato con successo.\n");
           fclose(primo_file);
        }
        system("pause");
        return(0);
}
