/*BIBLIOTECAS*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*VARIÁVEIS GLOBAIS*/
char  menu, d1, d2, d3, d4;

/*CORPO DO PROGRAMA*/
int main()
{
	inicio:
	setlocale(LC_ALL,"Portuguese");
	printf("Digite sua Senha: ");
	d1 = getch();
	printf("*");
	d2 = getch();
	printf("*");
	d3 = getch();
	printf("*");
	d4 = getch();
	printf("*");
	if (d1 == '1'&& d2 == '3'&& d3 =='1'&& d4 == '0')
	{
		menu:
		system("cls");
		printf(" Escolha uma opção:\n\n");
		printf("=============");
		printf("\n a = saldo");
		printf("\n b = depósito");
		printf("\n c = pagamentos");
		printf("\n d = transferências");
		printf("\n e = sair");
		printf("\n=============\n\n");
		menu = getch();
		switch (menu)
		{
			case 'a': case 'A': printf("\nOperação : saldo\n\n"); break;
			case 'b': case 'B': printf("\nOperação : depósito\n\n"); break;
			case 'c': case 'C': printf("\nOperação : pagamentos\n\n"); break;
			case 'd': case 'D': printf("\nOperação : transferências\n\n"); break;
			case 'e': case 'E': printf("\nEncerrando operações");
				printf("."); sleep(1); printf("."); sleep(1); printf("."); return 0;
			default : printf("\nOpção inválida!\n"); getch(); goto menu;
		}
	}
	else
	{
		printf("\nSenha incorreta\n");
		system("pause");
		system("cls");
		goto inicio;
	}
system("pause");
return 0;
}
