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
	printf ("Primeira data\n");
	printf ("Insira o dia: ");
	scanf("%i", &data1.Dia);
	printf ("Insira o m�s: ");
	scanf("%i", &data1.Mes);
	printf ("Insira o ano: ");
	scanf("%i", &data1.Ano);
	
	printf ("\n\nSegunda data\n");
	printf ("Insira o dia: ");
	scanf("%i", &data2.Dia);
	printf ("Insira o m�s: ");
	scanf("%i", &data2.Mes);
	printf ("Insira o ano: ");
	scanf("%i", &data2.Ano);
	
	if (data1.Ano>data2.Ano)
		printf ("\n2� data ocorreu antes da 1�");
	if (data2.Ano>data1.Ano)
		printf ("\n1� data ocorreu antes da 2�");
	if (data1.Ano==data2.Ano){
		if (data1.Mes>data2.Mes)
		printf ("\n2� data ocorreu antes da 1�");
		if (data2.Mes>data1.Mes)
		printf ("\n1� data ocorreu antes da 2�");
		if (data1.Mes==data2.Mes){
			if (data1.Dia>data2.Dia)
			printf ("\n2� data ocorreu antes da 1�");
			if (data2.Dia>data1.Dia)
			printf ("\n1� data ocorreu antes da 2�");
			if (data1.Dia==data2.Dia)
			printf ("\nAs datas s�o iguais");
			
			
		}
	}

	
	return (0);
}
