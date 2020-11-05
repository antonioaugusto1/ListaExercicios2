#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int vet[100], n, opcao, impar, i;
	
	printf("Digite a quantidade de elementos no vetor: ");
	scanf("%d",&n);
	
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		geraVet(vet, n);
	} else 
		leiaVet(vet, n);
		
		mostraVet(vet, n);
		
	for(i=0; i<n; i++){
		if(vet[i] % 2 != 0){
			impar++;
		}
	}
	
	printf("Quantidade de elementos impares: %d \n", impar);
	
	system("PAUSE");
	return 0;
}
