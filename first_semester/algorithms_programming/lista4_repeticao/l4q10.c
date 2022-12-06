#include <stdio.h>
#include <time.h>

//Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua
//m�dia.

int main(){
	
	int i = 0;
	float num, media = 0;
	
	for(i=0; i < 10; i++){
		printf("Digite um numero positivo: \n");
		scanf("%f", &num);
		
		if(num <= 0){
			printf("ERRO: Digite um numero positivo! ");
			scanf("%f", &num);
		}
		
		media = media + num/10;
	}
	
	printf("Media: %.2f.", media);
	
	return 0;
}
