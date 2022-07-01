/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Variaveis Globais */
int cont, mult;

/* Corpo do Programa */
int main ()
{
	setlocale (LC_ALL,"");
	for ( cont = 15 ; cont<201 ; cont++ )
	{
	 	mult = cont * cont;
	    printf ("%d² = %d\n", cont, mult);
	    
	}
	system ("pause");
 
 return (0);
}

