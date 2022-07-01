/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
/* variaveis de memoria */
float numero;
float Quadrado;
float Dobro;

/* corpo do programa */
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	printf ("\nCalculo de Dobro e Quadrado\n");
	printf("\nInforme o numero\n");
	fflush (stdin);
	scanf ("%f", &numero);
	Dobro = 2 * numero;
	Quadrado = (numero * numero);
	printf ("\n\nDobro é: %.f", Dobro);
	printf ("\n\nQuadrado é: %.f", Quadrado);
	getch();
	return (0);
}
