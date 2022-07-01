// Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes

#define MAX 5

int Num;

int main (){

	setlocale (LC_ALL,"");
	printf ("Insira o Número desejado:");
	scanf ("%d", &Num);
	if (Num %2==0)
		printf ("\n\nO número %d é par", Num);
	else 
		printf ("\n\nO número %d é impar", Num);
	return (0);
}
