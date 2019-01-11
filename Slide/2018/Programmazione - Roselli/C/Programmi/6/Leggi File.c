/*
 * Leggi File.c
 *
 *  Created on: 15/dic/2009
 *      Author: Acer
 */
#include <stdio.h>
#include <stdlib.h>

int
main ()
{
        FILE *primo_file;
        char ch;
        primo_file=fopen("CiaoMondo.txt", "r");
        if (primo_file==NULL)
        {
           printf("Impossibile aprire il file\n");
        }
        else
        {
          for(ch=getc(primo_file); ch!=EOF; ch=getc(primo_file))
                 printf("%c", ch);
          fclose(primo_file);
        }
        printf("\n");

        system("pause");
        return(0);

}
