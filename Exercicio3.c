
//=====================================================================
//
//  Programa em C
//
//=====================================================================
#include <stdio.h>
#include <stdlib.h>

#define qtde_nota 6
int main()
{


  int qtde[6], nota[6];
  int saldo, saque;
  int cont;

  printf("\nInforme o valor do saque: ");
  scanf("%i", &saque);

  saldo = saque;

  nota[0] = 100;
  nota[1] = 50;
  nota[2] = 20;
  nota[3] = 10;
  nota[4] = 5;
  nota[5] = 1;

  for(cont=0; cont<=5 ; cont++)
  {
     qtde[cont] = saldo / nota[cont];
     saldo = saldo - ( qtde[cont] * nota[cont] );
  }

  for(cont=0; cont<=5 ; cont++)
  {
     printf("\n Notas de %i :  [ %i ] ",nota[cont], qtde[cont]);
  }

  printf("\n\n\n");
  system("pause");
  return 0;

}
