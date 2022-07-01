/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Variaveis Globais */
int i=3;

/* Corpo do Programa */
int main ()
{
	setlocale (LC_ALL,"");
	printf ("Multiplos de 3:\n\n");
	for ( i = 3 ; i<101 ; i=i+3 )
		{
		 	printf ("%i\n",i);
		}
	 system ("pause");
	 
 return (0);
}

