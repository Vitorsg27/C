// Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes

#define MAX 5

int Num;

int main (){

	setlocale (LC_ALL,"");
	printf ("Insira o N�mero desejado:");
	scanf ("%d", &Num);
	if (Num %2==0)
		printf ("\n\nO n�mero %d � par", Num);
	else 
		printf ("\n\nO n�mero %d � impar", Num);
	return (0);
}
