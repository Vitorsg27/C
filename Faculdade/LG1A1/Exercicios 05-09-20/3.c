/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


/* Variávies de Memória */
int		limite = 0;
int		multiplo = 1;
float	numero;
float	resultado;

int main()
{
	setlocale (LC_ALL, "portuguese");
	printf ("Tabuada Automática\n");
	printf ("Insira o número desejado:\n\n");
	scanf ("%f", &numero);
	printf ("\n\n");
	fflush (stdin);
    do
 	{
	resultado = numero * multiplo;
	printf ("%.f * %i = %.f\n", numero, multiplo, resultado);
	multiplo++;
	limite++; 
	}
	while ( limite <10);
	getch;
	return (0);
}
