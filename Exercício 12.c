#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, vet[100], face[6], i;
	
	printf("Digite quantas vezes o dado foi lancado: ");
	scanf("%d",&num);
	
	printf("Digite os resultados dos lancamentos: \n");
	leiaVet(v,n);
	
	for(i=0; i<6; i++){
		face[i]=0;
	}
	
	for(i=0; i<n; i++){
		if(v[i] == 1){
			face[0]++;
		} else if(v[i] == 2){
			face[1]++;
		} else if(v[i] == 3){
			face[2]++;
		} else if(v[i] == 4){
			face[3]++;
		} else if(v[i] == 5){
			face[4]++;
		} else if(v[i] == 6){
			face[5]++;
		}
	}
	for(i=0; i<6; i++){
		printf("A face %d apareceu %d vezes!\n", i+1, fc[i]);
	}
	
	system("PAUSE");
	return 0;
}
