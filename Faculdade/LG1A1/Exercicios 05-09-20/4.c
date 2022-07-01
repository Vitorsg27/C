/*BIBLIOTECAS*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*VARIÁVEIS GLOBAIS*/
char  menu, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
int tentativas = 3;

/*CORPO DO PROGRAMA*/
int main()
{

	setlocale(LC_ALL,"Portuguese");
	do
	{
	
		printf("Digite sua Senha: ");
		d1 = getch();
		printf("*");
		d2 = getch();
		printf("*");
		d3 = getch();
		printf("*");
		d4 = getch();
		printf("*");
		d5 = getch();
		printf("*");
		d6 = getch();
		printf("*");
		d7 = getch();
		printf("*");
		d8 = getch();
		printf("*");
		d9 = getch();
		printf("*");
		d10 = getch();
		printf("*");
		d11 = getch();
		tentativas = tentativas -1 ;
	
		/*Caso Acerte a Senha*/
		if (d1 == 'i'&& d2 == 'r'&& d3 =='o'&& d4 == 'n'&& d5 == ' '&& d6 == 'm'&& d7 =='a'&& d8 == 'i'&& d9 == 'd'&& d10 =='e'&& d11 =='n')
		{
			
			system("cls");
			printf("Acesso Vip!\n\n");
			
		}
		/*Caso Erre a Senha*/
		else
		{
			printf("\n\n====================");
			printf("\n BARRADO NA ENTRADA\n");
			printf("====================\n");
			printf("\nTentativas restantes:%.i\n\n\n", tentativas);
			system("pause");
			system("cls");
		}

	}
	while (!(d1 == 'i' && d2 == 'r' && d3 == 'o' && d4 == 'n' && d5 == ' ' && d6 == 'm' && d7 == 'a' && d8 == 'i' && d9 == 'd' && d10 == 'e' && d11 == 'n') && tentativas > 0);
	
	/*Caso Erre 3 vezes a senha*/
	if (tentativas <= 0)
		{
			printf ("================================");
			printf ("\n MÁXIMO DE TENTATIVAS ALCAÇADO!\n");
			printf ("================================\n\n");
		}
	else exit(0);

system("pause");
return 0;
}
