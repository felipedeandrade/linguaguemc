#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Preencha um vetor de n�meros inteiros, de 10 posi��es, com n�meros rand�micos entre o intervalo 0 e 49. */

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
		printf("Vetor[%i] = %i \n",cont, n); // Apresente os n�meros do vetor
 	};
 	
 	printf("\n ----- \n\n");
 	
 	// Coloque o maior n�mero na posi��o 9, e o valor da posi��o 9 para a posi��o que o maior n�mero ocupava
 	vDe9 = vetor[9];
 	vetor[9] = nMaior;
 	vetor[vMaior] = vDe9;
 	
 	// Apresenta os valores ap�s a troca
 	for(cont=0;cont<=9;cont++){
 		printf("Vetor[%i] = %i \n",cont, vetor[cont]);
	}
 		
	system("pause");
	return 0;
}
