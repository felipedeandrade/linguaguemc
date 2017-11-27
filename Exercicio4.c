
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
  int temp, entrada1, entrada2;

  srand( (unsigned)time(NULL) );
  do
   {

    printf("\nInforme a primeira posicao: ");
    scanf("%i", &entrada1);
   }
  while ( (entrada1 < 0 )  || (entrada1 >= qtde ) ) ;

  do
  {

     printf("\n\nInforme a segunda posicao: ");
    scanf("%i", &entrada2);
  }
  while ( entrada2 < 0 || entrada2 >= qtde );

  printf("\n\n Numeros aleatorios \n\n");
  for(cont=0;cont<=qtde-1;cont++)
  {
    numero = rand() % 100;

    vet_numero[cont] = numero;
    printf("\n ( %i ) - %i ", cont , numero );
   }

  printf("\n ---------------------------------\n\n");



  temp = vet_numero[entrada1];
  vet_numero[entrada1] = vet_numero[entrada2];
  vet_numero[entrada2] = temp ;

  printf("\n\n Numeros do Vetor apos as trocas \n\n" );
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
