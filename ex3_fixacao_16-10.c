#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  
  int n1,n2,cont;
  
  n1 = 0;
  
  for (cont=1 ; cont < 6 ; cont++)
  {
      n2 = 1 + (rand() % 99);    
      printf ("Numero aleatorio: %i ",n2);
      printf ("\n");
      
      if (n2 > n1)
      {
             n1 = n2;
      }
      printf ("\n");
  }
  printf ("\n----\n");
  printf ("O maior valor foi o %i.",n1);
  printf ("\n----\n\n");
  
  system("PAUSE");	
  return 0;
}
