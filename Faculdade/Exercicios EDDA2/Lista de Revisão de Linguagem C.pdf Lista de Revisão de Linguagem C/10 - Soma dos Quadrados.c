#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int num1, num2, num3, valorFinal;

int main (){
	
	setlocale (LC_ALL,"");
	printf("Insira os 3 n�meros inteiros a serem calculados: \n\n");
	printf ("1�:");
		scanf ("%i", &num1);
	printf ("2�:");
		scanf ("%i",&num2);
	printf ("3�:");
		scanf ("%i",&num3);
	
	num1 = num1 * num1;
	num2 = num2 * num2;
	num3 = num3 * num3;
	
	valorFinal= num1 + num2 + num3;
	
	printf("\n\nResultado da soma dos quadrados dos tr�s n�meros: %i", valorFinal);
	
	return (0);
}
