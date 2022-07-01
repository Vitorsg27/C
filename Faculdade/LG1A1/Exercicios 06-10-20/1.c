#include <stdio.h>
#include <locale.h>
#define N 4 /* Sempre que N aparecer tera valo = 4 */

typedef struct	/*Cria uma estrutura*/
{
	char name [20], rua [20]; /* Define que os nomes podem ter até 20 caracteres */
	int num;
	char cidade [20];
	int cep, eng, math, phys, med;
}student;

student data[N]= /* Define os dados da matriz */
{
	{"Evandro","Rua Um",	1, "São Paulo", 055001,	82, 72, 58,},
	{"Thomas","Rua Dois",	2, "Barueri", 055002,	77, 82, 79,},
	{"Sabrina","Rua Trinta e Quatro",3,"São Paulo", 055034,	52, 62, 39,},
	{"Melinda","Rua Quatro",	4,"New York", 325692,	61, 82, 88,},
};

void media (void)
{
	int i;
	for (i=0; i<N; i++)
	data[i].med = (data[i].eng + data[i].math + data[i].phys) / 3;
}


int main (void)
{
	/* Mostra os dados de cada elemento da matriz */
	setlocale(LC_ALL,"");
	int i;
	media();
	for (i=0; i<N; i++)
	{
		printf ("%7s: Eng =%3d   Math =%3d   Phys =%3d   Media =%3d\nEndereço: %-15s Nº%d %10s CEP:%d\n\n\n", data[i].name, data[i].eng, data[i].math, data[i].phys, data[i].med,
		data[i].rua, data[i].num, data[i].cidade, data[i].cep);
	}
	
	return (0);	
}
