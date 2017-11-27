
//=====================================================================
//
//  Programa em C
//
//=====================================================================
#include <stdio.h>

#define qtde 20

int main()
{
  int vet_numero[qtde], numero;
  int cont;
  int maior, posicao;

  srand( (unsigned)time(NULL) );

  for(cont=0;cont<=qtde-1;cont++)
  {
    numero = rand() % 11 ;
    vet_numero[cont] = numero;
   }

  printf("\n ---------------------------------\n\n");

  printf("\n\n Numeros   \n\n" );

  for(cont=1;cont<qtde;cont++)
  {
     numero = vet_numero[cont];
     printf("\n posicao = %i          numero -  %i ", cont, numero );

     if ( vet_numero[cont] == 5 )
        vet_numero[cont] = 37 ;
  }

  printf("\n ---------------------------------\n\n");


  printf("\n\n\n\n\n ---------------------------------\n\n");

  printf("\n\n Numeros  Apos as Trocas \n\n" );

  for(cont=1;cont<qtde;cont++)
  {
     numero = vet_numero[cont];
     printf("\n posicao = %i          numero -  %i ", cont, numero );

     if ( vet_numero[cont] == 5 )
        vet_numero[cont] = 37 ;
  }

  printf("\n ---------------------------------\n\n");


  printf("\n\n\n\n ");
  system("pause");
  return 0;
}
