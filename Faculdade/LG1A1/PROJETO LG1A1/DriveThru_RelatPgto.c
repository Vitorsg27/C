/* Bibliotecas */
#include "libDriveThru.h"

/* Protótipos de funções */
int   main (void);

/* Corpo do programa */
int   main (void)
{
	setlocale (LC_ALL, "");
    system ("cls");
    printf("---------------------------------------------\n");
	printf("       RELATÓRIO DE PAGAMENTOS GERAIS       \n");
	printf("---------------------------------------------\n");
    relatorio_pagamentos();
    printf("\n\nRelatório de Pagamentos em cartão:\n");
	relatorio_cartoes();  
	return (0);
}
