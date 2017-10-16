
//=====================================================================
//
//  Programa em C
//
//=====================================================================
#include <stdio.h>

int main()
{
  int nota;
  
  printf("\n\nInforme uma nota: ");
  scanf("%i", &nota);
  
  if (nota > 10) {
     printf ("\nInforma um numero de 0 a 10");
     printf ("\n-----");
     return main();
     }
  else {
       printf ("\nA nota informada = %i\n\n",nota);
              if (nota >= 6){
              printf("Aprovado");      
              }
              else {
              printf ("Reprovado");
              }
       } 
       
  printf("\n\n");
               
  system("pause");
  return 0;

}
