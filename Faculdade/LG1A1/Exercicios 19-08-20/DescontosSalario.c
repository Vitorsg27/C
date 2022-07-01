/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/* variaveis de memoria */
float bruto;
float IR;
float liquido;
float previdencia;

/* corpo do programa */
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	printf ("\nCalculo de Descontos sobre Salário\n");
	printf("\nInforme o Salário bruto\n");
	fflush (stdin);
	scanf ("%f", &bruto);
	previdencia = bruto * 0.085;
	IR = bruto * 0.275;
	liquido = bruto - previdencia - IR;
	printf ("\n\nSalário Líquido é: R$%.2f", liquido);
	printf ("\nImposto de renda é: R$%.2f", IR);
	printf ("\nPrevidencia é: R$%.2f", previdencia);
	getch();
	return (0);
}
