#include <stdio.h>
#include <stdlib.h>

// 6.Informa a quantidade de notas para um saque.

int main()
{
    
  int notas[6] = {2,5,10,20,50,100};
  int saque, qtd_notas,cont;
  
  printf ("Digite o valor desejado do saque: ");
  scanf ("%i", &saque);
  printf ("\n ------ \n");
  
  for (cont=0; cont<6; cont++)
  {
   qtd_notas = saque/notas[cont];
   printf("A menor quantidade de notas de %d para o valor de %i. \n",notas[cont],qtd_notas);    
  }
  
  system("PAUSE");	
  return 0;
}
