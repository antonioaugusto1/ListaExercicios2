#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"

int main(){

	setlocale (LC_ALL, "Portuguese");

	int num[100], n, i, soma=0, opcao;
	printf("Digite a quanidade de posições do vetor: ");
	scanf("%d",&n);
	
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		geraVet(num,n);
	} else{
		leiaVet(num, n);	
		mostraVet(num, n);
	}

	for(i=0; i<n; i++){
		soma = soma + num[i];
	}
	   	
	printf("Soma do vetor:%d\n", soma);
	
	system("PAUSE");
	return 0;
}
