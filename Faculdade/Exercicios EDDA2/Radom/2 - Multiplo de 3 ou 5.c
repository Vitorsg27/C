// Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Num;

int main (){

	setlocale (LC_ALL,"");
	printf ("Insira o N�mero desejado: ");
	scanf ("%d", &Num);
	if (Num %3==0 || Num %5==0){
	
		if (Num %3==0 & Num %5!=0)
			printf ("\n\nO n�mero %d � multiplo de 3.", Num);
		if (Num %5==0 & Num %3!=0)
			printf ("\nO n�mero %d � multiplo de 5.", Num);
		if (Num %5==0 & Num %3==0)
			printf ("\nO n�mero %d � multiplo de 3 e 5.", Num);
	}
	else 
		printf ("\n\nO n�mero %d n�o � multiplo de 3 e nem de 5.", Num);
		
	return (0);
}
