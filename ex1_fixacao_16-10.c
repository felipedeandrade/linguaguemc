#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  int n1,n2;
  
  printf ("Informe um numero inteiro: ");
  scanf ("%i", &n1);
  
  printf ("\n");
  
  printf ("Informe um numero inteiro: ");
  scanf ("%i", &n2);
  
  printf ("\n");
  
  if (n1 > n2)
  {
         printf("O maior numero é o %i. \n", n1);
  }
  else 
  {
       printf("O maior numero é o %i. \n", n2);     
  }
  
  printf ("\n");
  
  system("PAUSE");	
  return 0;
}
