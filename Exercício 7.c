#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"
int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int vet1[100], vet2[100], result[100], n, i, opcao;
	
	printf("Digite a quantidade de elementos no vetor: ");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
			geraVet(vet1, n);
			geraVet(vet2, n);
			
	} else{
		printf("Primeiro vetor: \n");
		leiaVet(vet1,n);
		
		printf("Segundo vetor: \n");
		leiaVet(vet2,n);
	}
	
	printf("Vetor resultante: \n");
	
	for(i=0; i<n; i++){
		result[i] = vet1[i] * vet2[i];
		
		printf("Posicao[%d]: %d x %d = %d\n", i, vet1[i], vet2[i], result[i]);	
	}
	
	system("PAUSE");
	return 0;
}
