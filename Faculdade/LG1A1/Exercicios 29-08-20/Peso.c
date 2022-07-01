/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

/* Variáveis globais */
char  genero;
float altura, peso;


/* Corpo do progrma */
int   main()
{
	inicio:
	setlocale (LC_ALL, "Portuguese");
	printf ("\n========================");
	printf ("\n   Escolha seu genero   ");
	printf ("\n   1 = Masculino   ");
	printf ("\n   2 = Feminino    ");
	printf ("\n========================");
	printf ("\nSua escolha: ");
	genero = getche();
	
	/*Caso digite numero inválido*/
	 if (genero != '1' && genero != '2') 
            {
                system ("cls");
                printf ("=====================\n");
                printf ("Cálculo do Peso Ideal\n");
                printf ("=====================\n");
                printf ("\nOpção Inválida.");
                sleep (1); printf ("."); sleep (1); printf ("."); /*Timer para voltar ao inicio*/
                system ("cls");
                goto inicio;
            }
            
    /*Caso digite numero válido*/        
	switch ( genero ) 
		{
		case '1': case '2':
			printf ("\n\n\n=============================================");
			printf ("\n Informe sua altura em metros usando virgula");
			printf ("\n=============================================\n");
			fflush (stdin);
			scanf ("%f", &altura);
			/* Define a altura do cliente */
			switch ( genero )
			{
				case '1': peso = (altura * 72.7)- 58;
					printf ("\n\nPeso ideal: %.fKg", peso);
				break;
				
				case '2': peso = (altura * 62.1) - 44.7;
					printf ("\n\nPeso ideal: %.fKg", peso);
				break;
			}	
		}
 	
			
	getche();
	return (0);
}
