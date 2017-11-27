
//=====================================================================
//
//  Programa em C
//
//=====================================================================
#include <stdio.h>

#define qtde 10

int main()
{
  int vet_numero[qtde], numero;
  int cont;
  int maior, posicao;

  srand( (unsigned)time(NULL) );

  for(cont=0;cont<=qtde-1;cont++)
  {
    numero = 2 + 2 * ( rand() % 100 );
    vet_numero[cont] = numero;
   }

  printf("\n ---------------------------------\n\n");

  printf("\n\n numeros   \n\n" );

  for(cont=1;cont<qtde;cont++)
  {
     numero = vet_numero[cont];
     printf("\n posicao = %i          numero -  %i ", cont, numero );
  }

  printf("\n ---------------------------------\n\n");

  printf("\n\n\n\n ");
  system("pause");
  return 0;
}
