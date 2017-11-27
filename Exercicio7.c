
//=====================================================================
//
//  Programa em C
//
//=====================================================================
#include <stdio.h>

#define qtde 10

int main()
{
  int numero;
  int cont;
  int maior, primeiro;

  srand( (unsigned)time(NULL) );
  maior = 0 ;

  primeiro = 1 ;
  printf("\n ---------[ Numeros ] ------------------\n\n");

  for(cont=1;cont<=qtde;cont++)
  {
    numero = rand() % 50 ;
    printf("\n ( %i ) -  %i", cont , numero);

    if ( ( numero % 2 == 1 ) )
    {

        if ( (numero > maior ) || (primeiro == 1) )
        {
            primeiro = 0 ;
            maior = numero ;
        }
    }
   }

  printf("\n\n ---------------------------------\n\n");

  printf("\n\n ");


  if ( maior == 0 )
    printf("Nao teve numero impar ");
  else
    printf("Maior impar =  %i", maior);



  printf("\n ---------------------------------\n\n");

  printf("\n\n\n\n ");
  system("pause");
  return 0;
}
