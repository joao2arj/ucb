#include <stdio.h>

//Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares.

int main(){
	int soma=0, i=0, j=0;
	
	for(i=1; i <= 100; i++){
		if(i % 2 == 0){
			soma = soma + i;
		}
	}
	
	printf("Soma: %d", soma);
	
	return 0;
}
