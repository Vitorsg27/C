/* Bibliotecas */
#include "libDriveThru.h"

/* Prot�tipos de fun��es */
int   main (void);

/* Corpo do programa */
int   main (void)
{
	setlocale (LC_ALL, "");
    system ("cls");
    printf("---------------------------------------------\n");
	printf("       RELAT�RIO DE PAGAMENTOS GERAIS       \n");
	printf("---------------------------------------------\n");
    relatorio_pagamentos();
    printf("\n\nRelat�rio de Pagamentos em cart�o:\n");
	relatorio_cartoes();  
	return (0);
}
