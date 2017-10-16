
//=====================================================================
//
//  Programa em C
//
//=====================================================================
#include <stdio.h>

int main()
{
  int v1;
  int contador;
  printf ("Informe o numero: ");
  scanf("%i",&v1);
  contador = 1;
  
  while (contador < 10)
  {
  
  v1=v1+3;
  printf("\nContador = %i", contador);
  printf ("\nv1 = %i", v1);
  printf("\n");
  contador++;
        
  }      
  
  printf("\n\n");
               
  system("pause");
  return 0;

}
