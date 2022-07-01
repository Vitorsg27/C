// Bibliotecas
#include "libDriveThru.h"

/* Protótipos de funções */
int   main (void);

/* Corpo do programa */
int main (void){
	char  opc;
	setlocale (LC_ALL, "");
	FILA fila; iniciarFila(&fila);
	registro_pagamento Rpgto;
	bool confir;
	LerArquivoPagamentos(&fila);
	printQtdFila(&fila);
	confir = excluirElementoFila(&fila , &Rpgto);
	if(confir == false){
		printf("\n--------------------------");
	   	printf("\nAguardando algum pagamento\n");
		printf("--------------------------");
	}else{
		printf("\n------------------------------------");
		printf("\nConfirmar entrega do Pedido [%03i]", Rpgto.Codpgto);
		printf("\n1 - Sim   [Outra tecla] - Não");
		printf("\n------------------------------------");
		fflush (stdin); opc = getch();
		if (opc != '1')
			return (0);
		else{	
		    salvarFila(&fila);
			printf ("\n--------------------------------");
		    printf ("\n PEDIDO [%03i] PAGO COM %s", Rpgto.Codpgto, Rpgto.Formapgto);
		    printf ("\n--------------------------------");
		}
	}
    
    
    getch();
    return (0);
}
