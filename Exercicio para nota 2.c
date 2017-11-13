#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Preencha um vetor de números inteiros, de 10 posições, com números randômicos entre o intervalo 0 e 49. */

int main() {
	
	int vetor[9], cont, n, nMaior, vMaior,vDe9;
	srand (time(NULL));
	nMaior = 0;
	
	for (cont=0;cont<=9;cont++){
    	n = rand() % 49;
    	vetor[cont] = n;
		if (n > nMaior){
			nMaior = n;
			vMaior = cont;
		}
		printf("Vetor[%i] = %i \n",cont, n); // Apresente os números do vetor
 	};
 	
 	printf("\n ----- \n\n");
 	
 	// Coloque o maior número na posição 9, e o valor da posição 9 para a posição que o maior número ocupava
 	vDe9 = vetor[9];
 	vetor[9] = nMaior;
 	vetor[vMaior] = vDe9;
 	
 	// Apresenta os valores após a troca
 	for(cont=0;cont<=9;cont++){
 		printf("Vetor[%i] = %i \n",cont, vetor[cont]);
	}
 		
	system("pause");
	return 0;
}
