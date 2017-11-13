#include <stdio.h>
#include <stdlib.h>

// Leia 10 números. Apresente a soma dos números pares e a soma dos números ímpares.

int main()
{

	int x,n1,np,ni;
	
	np = 0;
	ni = 0;
	
	for (x=0;x<=9;x++) 
	{	
		printf("%i - Digite um numero: ", x);
		scanf("%i", &n1);	
			if (n1 % 2 == 0){
				np = np + n1;
			} else {
				ni = ni + n1;
			}
	}
	
	printf("\n ----- \n");
	printf ("A soma dos numeros pares: %i \n", np);
	printf ("A soma dos numeros impares: %i \n", ni);
	printf("\n ----- \n");

  system("PAUSE");	
  return 0;
}
