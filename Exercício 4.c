#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int vet[100], n, i, vpar=0, mpar=0, opcao;
	
	printf("Digite a quantidade de elementos no vetor: ");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		geraVet(vet,n);
	} else 
		leiaVet(vet,n);
	
	for(i=0; i<n; i++){
		if(vet[i] % 2 == 0){
			vpar++;
			mpar = mpar + vet[i];
		}
	}
	
	mostraVet(vet,n);
	
	printf("Quantidade de valores pares no vetor: %d\n", vpar);
	printf("Media dos valores pares: %d\n", mpar / vpar);
	
	system("PAUSE");
	return 0;
}
