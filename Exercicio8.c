
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
  int maior, pos_maior, pos_menor, menor;

  srand( (unsigned)time(NULL) );


  printf("\n\n Numeros aleatorios \n\n");
  for(cont=0;cont<=qtde-1;cont++)
  {
    numero = rand() % 50;

    vet_numero[cont] = numero;
    printf("\n ( %i ) - %i ", cont , numero );
   }

  printf("\n ---------------------------------\n\n");

  printf("\n\n numeros do Vetor  \n\n" );

  maior=0;
  menor=0;

  for(cont=0;cont< qtde;cont++)
  {
     numero = vet_numero[cont];
     printf("\n posicao = %i          numero -  %i ", cont, numero );

     if ( ( numero > maior ) || ( cont == 0) )
     {
        maior = numero;
        pos_maior = cont;
     }

     if ( ( numero < menor ) || ( cont == 0) )
     {
        menor = numero;
        pos_menor = cont;
     }


  }

  printf("\n ---------------------------------\n\n");

  vet_numero[pos_maior] = menor ;
  vet_numero[pos_menor] = maior ;


  printf("\n\n numeros do Vetor - Apos trocas \n\n" );

  for(cont=0;cont< qtde;cont++)
  {
     numero = vet_numero[cont];
     printf("\n posicao = %i          numero -  %i ", cont, numero );

  }

  printf("\n ---------------------------------\n\n");



  printf("\n\n\n\n ");
  system("pause");
  return 0;
}
