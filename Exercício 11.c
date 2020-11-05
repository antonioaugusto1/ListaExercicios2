#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bbvt.h"
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char gabarito[10], respostas[10];
	int i, alunos, x, acertos[100];
		
	printf("Informe o gabarito da prova (A, B, C ou D): \n");
	for(i=0; i<10; i++){
		printf("Questao %d: ",i+1);
		setbuf(stdin, NULL);
		scanf("%s",&gabarito[i]);	
	}
	
	printf("\n");
	
	printf("Informe o numero de alunos: ");
	scanf("%d",&alunos);
	printf("\n===========================================================================\n");
		
	for(i=0; i<alunos; i++){
		printf("Aluno %d\n",i+1);
		
		printf("Informe as respostas: \n");
		acertos[i]=0;
		
		for(x=0; x<10; x++){
			printf("Questao %d: ",x+1);
		setbuf(stdin, NULL);
		scanf("%s",&respostas[x]);
		
		if(respostas[x] == gabarito[x]){
			
			acertos[i]++;
				}
		}	printf("\n===========================================================================\n");
					}
		
		for(i=0; i<alunos; i++){
			printf("O aluno %d acertou: %d \n", i+1, acertos[i]);
		}
		
	system("PAUSE");
	return 0;
}
