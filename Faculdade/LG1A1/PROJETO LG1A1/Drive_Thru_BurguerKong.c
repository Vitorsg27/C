/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Protótipos de funções */
char 	menu 	(void);
void 	admin 	(char escolha);
int 	main	(void);

/* Construção de funções */
char  menu (void)
{
	char  opc;
	do
	{
	   system ("cls");
	   printf ("\n-------------- DRIVE THRU DO BURGUER KONG --------------");
	   printf ("\n             1 - Cadastrar produtos                     ");
	   printf ("\n             2 - Relatório de produtos                  ");
	   printf ("\n             3 - Relatório de pagamentos                ");
	   printf ("\n             4 - Vendas                                 ");
	   printf ("\n             5 - Pague                                  ");
	   printf ("\n             6 - Fila de espera                         ");
	   printf ("\n             7 - Entrega do pedido                      ");
	   printf ("\n             0 - SAIR                                   ");
	   printf ("\n--------------------------------------------------------");
	   printf ("\n            Selecione a opção desejada: ");
	   fflush (stdin); opc = getche();
	}
	while ( opc != '1' && opc != '2' && opc != '3' && opc != '4' && opc != '5' && 
			opc != '6' && opc != '7' && opc != '0');
	return (opc);	
}

void admin ( char escolha )
{
	system ("cls");
	switch ( escolha )
	{
		case '1': system("DriveThru_Cadastro");			break;
		case '2': system("DriveThru_Relatorio"); 		break;
		case '3': system("DriveThru_RelatPgto"); 		break;
		case '4': system("DriveThru_Vendas"); 			break;
		case '5': system("DriveThru_Pague"); 			break;
		case '6': system("DriveThru_Fila_estatica");	break;
		case '7': system("DriveThru_Leve"); 			break;
		case '0': exit(0); 								break;
	}
}

/* Corpo do programa*/
int 	main	(void)
{   char  esc;
	setlocale (LC_ALL, "");
	do
	{
		esc = menu();
		admin (esc);
	}
	while (esc != '0');
	return (0);
}
