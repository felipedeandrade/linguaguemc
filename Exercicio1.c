
//=====================================================================
//
//  Programa em C
//
//=====================================================================
#include <stdio.h>

#define qtde 30

int main()
{
  int vet_numero[qtde], numero;
  int cont;
  int maior, posicao;
  int aux;
  srand( (unsigned)time(NULL) );


  printf("\n\n Numeros aleatorios \n\n");
  for(cont=0;cont<=qtde-1;cont++)
  {
    numero = rand() % 200;

    vet_numero[cont] = numero;
    printf("\n ( %i ) - %i ", cont , numero );
   }

  printf("\n ---------------------------------\n\n");

  printf("\n\n numeros em ordem invertida  \n\n" );

  maior=0;
  for(cont=qtde-1;cont>=0;cont--)
  {
     numero = vet_numero[cont];
     printf("\n posicao = %i          numero -  %i ", cont, numero );

     if ( ( numero > maior ) || ( cont == qtde - 1) )
     {
        maior = numero;
        posicao = cont;
     }

  }

  // inverter posicao, posicao do maior numero com a posicao 29
  aux = vet_numero[posicao] ;
  vet_numero[posicao] = vet_numero[29] ;
  vet_numero[29] = aux ;


  printf("\n ---------------------------------\n\n");

  printf("\n Maior numero = %i     ( posicao = %i  ) \n\n", maior, posicao );

  for(cont=qtde-1;cont>=0;cont--)
  {
     printf("\n posicao = %i          numero -  %i ", cont, vet_numero[cont] );
  }

  printf("\n\n\n\n ");
  system("pause");
  return 0;
}
