#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i, maior=0, menor=1000, vet[100], n, opcao;
	
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d",&n);
	
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&opcao);
	
	if(opcao == 1)
			geraVet(vet,n);
	else
		leiaVet(vet,n);	

	mostraVet(vet,n);
	
	for(i=0; i<n; i++){
		if(vet[i] > maior){
			maior = vet[i];
		}
		if (vet[i] < menor){
			menor = vet[i];
		}
	}
	
	printf("\nMaior valor: %d \n", maior);
	printf("Menor valor: %d \n", menor);
	
	system("pause");
	return 0;
}
