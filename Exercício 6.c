#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int vet[100], n, num, opcao, opcao1, i;
	
	printf("Digite a quantidade de elementos no vetor: ");
	scanf("%d",&n);
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	geraVet(vet,n);
	
	for(i=0; i<n; i++){
		if(num == vet[i]){
			opcao = 1;
			opcao1 = i;
			break;
		}
	}
	
	if(opcao == 1){
		printf("O numero %d esta na posicao %d do vetor!\n", num, opcao1);
	} else
	
	printf("O numero %d nao esta no vetor!\n", num);
	
	printf("\n");
	mostraVet(vet, n);
	
	system("PAUSE");
	return 0;
}
