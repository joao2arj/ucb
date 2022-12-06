#include <stdio.h>
#include <time.h>

//Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e
//apresente o resultado na tela.

int main(){
	int i, valor[10], soma = 0;
	
	for(i=0; i < 10; i++){
		printf("Digite o valor: ");
		scanf("%d", &valor[i]);
		
		soma = soma + valor[i];
	}
	
	printf("Total: %d", soma);
	
	return 0;
}
