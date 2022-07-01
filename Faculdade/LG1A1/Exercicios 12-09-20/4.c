/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Variaveis Globais */
int i=0, s=1;

/* Corpo do Programa */
int main ()
{
 setlocale (LC_ALL,"");
 for ( i = 1 ; i<17 ; i++ )
 {
 	printf ("%iº - %i\n",i,s);
	s = s * 2;
 }
 system ("pause");
 
 return (0);
}

