#include <stdio.h>
#include <stdlib.h>

typedef enum
	{lunedi, martedi, mercoledi, giovedi, venerdi, 	sabato, domenica}
settimana;



int main ()
{
     float temperatura[7];
     float media=0;
     settimana i;

     printf("\n\n***** Il programma calcola la media della temperatura di una settimana ****\n\n");
     for(i=lunedi; i<=domenica; ++i)
     {
                   printf("Inserisci la temperatura di ");
                   switch (i)
                     {
                            case lunedi: printf("lunedi' -->");
                                  break;
                            case martedi: printf("martedi' -->");
                                  break;
                            case  mercoledi: printf("mercoledi' -->");
                                  break;
                            case giovedi: printf("giovedi' -->");
                                  break;
                            case venerdi: printf("venerdi' -->");
                                  break;
                            case sabato: printf("sabato -->");
                                  break;
                            case domenica: printf("domenica -->");
                                  break;
                     }
                   scanf("%f", &temperatura[i]);
                   media+=temperatura[i];
     }
    media/=7;
    printf("La temperatura media della settimana e' stata : %.2f\n", media);
    system("pause");
    return 0;
}

