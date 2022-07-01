/* Bibliotecas */
#include "libDriveThru.h"

/* Protótipos de funções */
int   main (void);

/* Corpo do programa */
int   main (void)
{	char  esc;
	FILE *A;
    setlocale (LC_ALL, "");
    printf ("\n[D] = cadastro Default? ");
    printf ("\n[E] = Excluir produtos cadastrados ");
    printf ("\n[C] = Cancelar operação");
    printf ("\n[Qualquer tecla] = cadastro sequencial");
    printf ("\nSua opção: ");  fflush (stdin); esc = getche();
    
    switch (esc){
    	case'D': case 'd': cadastra_produtos_default (); return(0); break;
    	case'E': case 'e': A = fopen ("PRODUTOS.DAT","w"); fclose(A); break;
    	case'C': case 'c': return (0);
	}
	  do
	  {
	    system ("cls");
		grava_produto(captura_produto());
		printf ("\nCadastra outro produto? [S=sim]");
		fflush (stdin); esc = getche();
	  }
	  while (esc == 'S' || esc == 's');
	return (0);
}
