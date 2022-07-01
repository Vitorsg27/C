// Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    int Dia;   	
    int Mes;    	
    int Ano; 	
} Data; 			

int main (){
	
	Data data1, data2;
	setlocale (LC_ALL,"");
	printf ("Data de validade do Produto\n");
	printf ("Insira o dia: ");
	scanf("%d", &data1.Dia);
	printf ("Insira o mês: ");
	scanf("%d", &data1.Mes);
	printf ("Insira o ano: ");
	scanf("%d", &data1.Ano);
	
	printf ("\n\nData de hoje\n");
	printf ("Insira o dia: ");
	scanf("%d", &data2.Dia);
	printf ("Insira o mês: ");
	scanf("%d", &data2.Mes);
	printf ("Insira o ano: ");
	scanf("%d", &data2.Ano);
	
	if (data1.Ano>data2.Ano)
		printf ("\nO produto está dentro da validade");
	if (data2.Ano>data1.Ano)
		printf ("\nO produto está vencido!");
	if (data1.Ano==data2.Ano){
		if (data1.Mes>data2.Mes)
		printf ("\nO produto está dentro da validade");
		if (data2.Mes>data1.Mes)
		printf ("\nO produto está vencido!");
		if (data1.Mes==data2.Mes){
			if (data1.Dia>data2.Dia)
			printf ("\nO produto está dentro da validade");
			if (data2.Dia>data1.Dia)
			printf ("\nO produto está vencido!");
			if (data1.Dia==data2.Dia)
			printf ("\nO produto vence hoje!");
			
			
		}
	}

	
	return (0);
}
