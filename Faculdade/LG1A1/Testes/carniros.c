#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int    carneirinhos=-1;
char   opc; /* 1 = sim   2 = não */

int main()
{
	/* pergunta se dormiu */
	do
	{
	printf ("\nDormiu? [1=sim][2=nao]");
	opc = getche ();
	carneirinhos++;
	}
	while (opc == '2');

	
	printf ("\nPrecisei contar %i carneirinhos", carneirinhos);
	getch();
	return (0);
}

