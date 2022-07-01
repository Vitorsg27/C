/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Variaveis Globais */
int    carneirinhos=-1;
char   opc='2'; /* 1 = sim   2 = não */

/* Corpo do Programa */
int main()
{
	/* Pergunta se dormiu */
	while (opc == '2')
	{
	printf ("\nDormiu? [1=sim][2=nao]");
	opc = getche ();
	carneirinhos++;
	}

	/* Resultado */
	printf ("\nPrecisei contar %i carneirinhos", carneirinhos);
	getch();
	return (0);
}

