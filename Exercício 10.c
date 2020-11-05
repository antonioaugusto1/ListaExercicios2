#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int vet[100], n, valor, quantidade=0, i;
	
	printf("Digite quantos elementos o vetor terá: ");
	scanf("%d",&n);
	
	printf("Digite o valor a ser encontrado no vetor: ");
	scanf("%d",&valor);
	
	printf("Informe os valores do vetor: \n");
	leiaVet(vet, n);
	
	for(i=0; i<n; i++){
		if(vet[i] == valor){
			quantidade++;
		}
	}
	
	printf("O valor %d foi encontrado %d vez(ez) no vetor \n", valor, quantidade);
	
	printf("\n Vetor:\n");
	mostraVet(vet, n);
		
	system("PAUSE");
	return 0;
}
