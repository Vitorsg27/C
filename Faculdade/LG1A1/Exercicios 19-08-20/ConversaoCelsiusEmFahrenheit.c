/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/* variaveis de memoria */
float celsius;
float Fahrenheit;
float Resultado;

/* corpo do programa */
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	printf ("\nConversão °C em °F\n");
	printf("\nInforme a temperatura em °C\n");
	fflush (stdin);
	scanf ("%f", &celsius);
	Fahrenheit = (celsius * 1.8) + 32;
	printf ("\n\nTemperatura é: %.f", Fahrenheit);
	printf ("°F");
	getch();
	return (0);
}
