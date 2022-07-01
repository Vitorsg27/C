/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/* variaveis de memoria */
float primeiro;
float segundo;
float Resultado;

/* corpo do programa */
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	printf ("\nCalculo de Potencia\n");
	printf("\nInforme a base\n");
	fflush (stdin);
	scanf ("%f", &primeiro);
	printf("\nInforme o expoente\n");
	fflush (stdin);
	scanf ("%f", &segundo);
	Resultado = pow(primeiro, segundo);
	printf ("\n\nResultado é: %.f", Resultado);
	getch();
	return (0);
}
