#include <stdio.h>
#include <time.h>

//Fa�a um programa que leia 10 inteiros e imprima sua m�dia.

int main(){
	int i;
	float media = 0, valor[10];
	
	for(i=0; i < 10; i++){
		printf("Digite o valor: ");
		scanf("%f", &valor[i]);
		
		media = media + (valor[i])/10;
	}
	
	printf("Total: %.2f", media);
	
	return 0;
}
