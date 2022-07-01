#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5 	//define o tamanho do vetor

int main () {
   int i;
   time_t t;
   
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 50 */
   for( i = 0 ; i < TAM ; i++ ) {
      printf("%d\n", rand() % 100);
   }
   
   return(0);
}
