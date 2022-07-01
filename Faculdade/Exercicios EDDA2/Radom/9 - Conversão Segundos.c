// Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int Num, d, h, m, s;

int main(){
	
	setlocale (LC_ALL,"");
	printf ("Digite o Número de segundos: ");
	scanf ("%d", &Num);
	d = (Num /60/60/24);
	h = (Num /60/60) %24;
	m = (Num /60) %60;
	s = Num %60;
	
	printf ("\n%d dias, %d horas, %d minutos, %d segundos", d, h, m, s);
	
	return(0);
	
}
