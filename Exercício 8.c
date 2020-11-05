#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int vetA[100], vetB[100], n, x, i;
	
	printf("Digite quantos elementos o vetor terá: ");
	scanf("%d",&n);
	
	printf("Digite um valor: ");
	scanf("%d",&x);
	
	leiaVet(vetA,n);	
	
	printf("Vetor final: \n");
	
	for(i=0; i<n; i++){
		vetB[i] = vetA[i] * x;
		
		printf("Posicao[%d]: %d x %d = %d\n", i, vetA[i], x, vetB[i]);
	
	}
		
	system("PAUSE");
	return 0;
}
