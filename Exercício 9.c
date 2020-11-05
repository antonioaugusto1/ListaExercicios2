#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	char palavra[99], aux[99], tamanho;
	
	int i, j=0;
	
	printf("Digite a palavra ou frase: ");
	setbuf(stdin,NULL);

	gets(palavra);
	
	tamanho = (strlen(palavra)-1);
		
	for(i=tamanho; i>=0; i--){
 		aux[j] = palavra[i];
 		j++;	
 	}
 	
	aux[j] = 0;
	
	printf("A inversão do que foi digitado: %s\n", aux);
	
	system("PAUSE");
	return 0;
	
}
