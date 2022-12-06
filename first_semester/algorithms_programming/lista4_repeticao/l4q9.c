#include <stdio.h>
#include <time.h>

//Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
//lido.

int main(){
	int i = 0, valorMaior = 0, valorMenor = 10, valor;
	
	for(i=0; i < 10; i++){
		printf("Digite o valor: ");
		scanf("%d", &valor);
		
		if(valor > valorMaior){
			valorMaior = valor;
		}
		else if(valor < valorMenor){
			valorMenor = valor;
		}
	}
	
	printf("Valor maior: %d\nValor menor: %d.", valorMaior, valorMenor);
	
	return 0;
}
