
//=====================================================================
//
//  Programa em C
//
//=====================================================================
#include <stdio.h>
#include <stdlib.h>

#define qtde  20

int main()
{

  int vet_num1[qtde], vet_num2[qtde], vet_num3[qtde];
  int cont;
  int numero;

  srand( (unsigned)time(NULL) );

  for(cont=0;cont<=qtde-1;cont++)
  {
    numero = rand() % 100;
    vet_num1[cont] = numero;

    numero = rand() % 100;
    vet_num2[cont] = numero;

    vet_num3[cont] = vet_num2[cont] + vet_num1[cont];

   }

  printf("\n ---------------------------------\n\n");

  printf("\n\n Vetores \n\n");
  printf("\n          A          B         C  \n\n" );

  for(cont=0;cont<=qtde-1;cont++)
  {
    printf("\n ( %.2i% )    %.3i   +    %.3i   =    %.3i ", cont, vet_num1[cont] , vet_num2[cont], vet_num3[cont] );
  }

  printf("\n ---------------------------------\n\n");





  printf("\n\n\n");
  system("pause");
  return 0;

}
