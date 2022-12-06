#include <stdio.h>
#include <time.h>

//Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são
//múltiplos de 3 ou 5.

int main(){
	
	int i = 0, soma = 0;
	
	for(i=0; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0){
			soma += i;
		}
	}
	
	printf("Soma: %d", soma);
	return 0;
}
