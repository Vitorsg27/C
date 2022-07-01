
#pragma hdrstop
 
#include <tchar.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 
//---------------------------------------------------------------------------
 
#pragma argsused
void _tmain(){
	printf("Volume da lata de oleo\n");
	system("chcp 1252 > nul");
 
	printf("\nInforme a altura da lata: ");
	float vAltura;
	scanf("%f", &vAltura);
 
	printf("\nInforme o raio da circunferência da lata: ");
	float vRaio;
	scanf("%f", &vRaio);
 
	float vVolume = 3.14159 * (vRaio * vRaio) * vAltura;
 
	printf("\nO volume da lata é: %-7.2f", (vVolume));
 
	printf("\n\n");
	system("pause");
}
