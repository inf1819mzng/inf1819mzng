#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int
main()
{

     int tavola [MAX][10];
     int n, i,j;
     do
     {
    	 printf("Inserire la dimensione della tavola (max 20)-->");
    	 scanf("%d", &n);
     }while (n<=0 && n>20);
     for (i=0;i<n;i++)
     {
    	 for (j=0; j<10;j++)
    	 {
    		 tavola[i][j]=(i+1)*(j+1);
    	 }
     }
     for (i=0;i<n;i++)
     {
       	 for (j=0; j<10;j++)
        	 {
         		 printf("%dx%d=%d\n", i+1, j+1, tavola[i][j]);
         	 }
       	 printf("\n\n");
     }

     system("pause");
     return 0;
}
