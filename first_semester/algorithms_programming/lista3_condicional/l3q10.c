#include <stdio.h>
#include <math.h>

//Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a
//seguir, verifique e mostre qual a classificação dessa pessoa.

int main(){
	
	float altura, peso;
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	printf("Digite o peso: ");
	scanf("%f", &peso);
	
	if(altura < 1.2 && peso <= 60){
		printf("Classificacao A.");
	}
	else if(altura >= 1.2 && altura <= 1.7 && peso <= 60){
		printf("Classificacao B.");
	}
	else if(altura > 1.7 && peso <= 60){
		printf("Classificacao C.");
	}
	else if(altura < 1.2 && peso >= 60 && peso <= 90){
		printf("Classificacao D.");
	}
	else if(altura >= 1.2 && altura <= 1.7 && peso >= 60 && peso <= 90){
		printf("Classificacao E.");
	}
	else if(altura > 1.7 && peso >= 60 && peso <= 90){
		printf("Classificacao F.");
	}
	else if(altura < 1.2 && peso >= 60 && peso > 90){
		printf("Classificacao G.");
	}
	else if(altura >= 1.2 && altura <= 1.7 && peso > 90){
		printf("Classificacao H.");
	}
	else if(altura > 1.7 && peso >= 60 && peso > 90){
		printf("Classificacao I.");
	}
	else{
		printf("Nadador senior.");
	}
	
	return 0;
}
