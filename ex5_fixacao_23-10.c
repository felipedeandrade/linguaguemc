#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// 5. Informar um número inteiro. Apresentar como saída o fatorial deste número.

int main()
{
  
  int fat, n;
  
  printf("Insira um valor para o qual deseja calcular seu fatorial: ");
  scanf("%d", &n);
  
  for(fat = 1; n > 1; n--)
  
  fat = fat * n;
  
  printf("\nFatorial calculado: %d \n", fat);
  
  system("PAUSE");	
  return 0;
}
