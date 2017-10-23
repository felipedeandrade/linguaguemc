#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  
  int n1,n2,cont;
  
  printf ("Informe um número para saber sua tabuada: ");
  scanf ("%i", &n1);
  
  for (cont=0 ; cont < 11 ; cont++)
  {
      n2 = n1 * cont;    
      printf ("%i x %i = %i ",cont,n1,n2);
      printf ("\n");
  }
  
  system("PAUSE");	
  return 0;
}
