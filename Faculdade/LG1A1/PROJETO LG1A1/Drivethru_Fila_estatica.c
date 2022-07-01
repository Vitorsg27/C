// estrutura de fila - implementação estatica
// entra no final e sai no primeiro
#include "libDriveThru.h"

//STRUCT UTILIDADA: registro_pagamento

int main(){
	FILA fila; iniciarFila(&fila); //inicia a fila ao criar 
	registro_pagamento reg;
	FILE *A;
	LerArquivoPagamentos(&fila);
	printf ("\n---------------------------------------------");
	printf("\nElementos na fila: ");
	printf ("\n---------------------------------------------");
	exibirFila(&fila); 
	printf ("\n---------------------------------------------");
	printQtdFila(&fila);
	printf ("\n---------------------------------------------");
	
	getch();
	return (0);	 
}
