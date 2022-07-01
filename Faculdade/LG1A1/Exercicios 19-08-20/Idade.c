/* Bibliotecas */
#include <stdio.h>
#include <conio.h>

/* Variáveis globais */
char  genero; /* m ou M = Masculino  f ou F = Feminino */
float altura, peso;


/* Corpo do progrma */
int   main()
{
	printf ("\n========================");
	printf ("\n   Escolha seu genero   ");
	printf ("\n   m ou M = Masculino   ");
	printf ("\n   f ou F = Feminino    ");
	printf ("\n========================");
	printf ("\n     Sua escolha: ");
	genero = getche();
	
	switch ( genero )
		{
		case 'm': case 'M': case 'f': case 'F':
			printf ("\n==============================");
			printf ("\n Informe sua altura em metros ");
			printf ("\n==============================\n");
			fflush (stdin);
			scanf ("%f", &altura);
			/* Define a altura do cliente */
			switch ( genero )
			{
				case 'm': case 'M': peso = (altura * 72.7) - 58; 
					printf ("\n\nPeso ideal: %.f", peso); 	
				break;
				
				case 'f': case 'F': peso = (altura * 62.1) - 44.7;
					printf ("\n\nPeso ideal: %.f", peso);
				break;
			}	
		}
		break;
			
	getche();
	return (0);
}
