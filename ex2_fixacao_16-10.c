#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  int n1,n2,cont;
  
  n1 = 0;
  
  for (cont=1 ; cont < 6 ; cont++)
  {
  printf ("Informe um numero inteiro: ");
  scanf ("%i", &n2);
  
  printf ("\n");
  
  if (n2 > n1)
     {
      n1 = n2;    
     }
  
  }
  
  printf ("O maior valor foi o %i.",n1);
  
  printf ("\n");
  
  system("PAUSE");	
  return 0;
}
