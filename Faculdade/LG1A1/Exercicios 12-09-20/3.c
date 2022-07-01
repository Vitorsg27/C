/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
 
/* Variaveis Globais */
int n, s=0, i=0;

/* Corpo do Programa */
int main(void)
{  
	setlocale(LC_ALL,"");
    printf ("Insira o Número:\n");
	scanf("%d", &n);
    while (i < n)
     {
         i = i + 1;
         s = s + i;
     }
    printf("\nSoma dos números inteiros anteriores a %d = %d\n",n, s);
    return 0;
}
