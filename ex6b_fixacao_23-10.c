#include <stdio.h>
#include <stdlib.h>

// 6b.Informa a quantidade de notas para um saque.

int main()
{
    
  int notas[7] = {100,50,20,10,5,1};
  int qtd[7] = {};
  int saque, saque2, qtd_notas,cont;
  
  printf ("Digite o valor desejado do saque: ");
  scanf ("%i", &saque);
  saque2 = saque;
  printf ("\n------\n\n");
  
  for (cont=0; cont<7; cont++)
  {
   qtd_notas = saque/notas[cont];
   if (qtd_notas > 0)
   {
   qtd[cont] = qtd_notas;               
   printf("Sera necessario %i notas de R$%i \n\n", qtd_notas, notas[cont]);
   if ( saque % notas[cont] != 0)
   {
        saque = saque - (qtd_notas * notas[cont]);
   }
   else
   {
       break;
   }
   }
   
  }
  printf ("\n------ \n\n");
  printf("Totalizando o valor solicitado de R$%i.\n\n",saque2); 
  system("PAUSE");	
  return 0;
}
