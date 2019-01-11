/*
 * CelsiusFahrenheit.c
 *
 *  Created on: 03/dic/2009
 *      Author: Acer
 */

#include <stdio.h>
#include <stdlib.h>

double celsius(double km);
double fahrenheit(double temp_cels);

int
main (void)
{
 double profondita,temperatura_c, temperatura_f;
 printf("Inserisci la profondita' espressa in km --> ");
 scanf("%lf", &profondita);
 temperatura_c=celsius(profondita);
 printf("\n\nLa temperatura alla profondità di %.2f km in gradi Celsius e' %.3f",
                                             profondita, temperatura_c);
 temperatura_f=fahrenheit(temperatura_c);
 printf(" mentre in gradi Fahrenheit e' %.3f\n\n", temperatura_f);
 system("pause");
 return 0;
}

double celsius(double km)
{
       return(10*km+20);
}
double fahrenheit(double temp_cels)
{
       return(1.8*temp_cels+32);
}
