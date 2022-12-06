#include <stdio.h>
#include <math.h>

//Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
//seguintes categorias:

int main(){
	
	int idade;
	
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	
	if(idade >= 5 && idade <= 7){
		printf("Nadador infantil A.");
	}
	else if(idade >= 8 && idade <= 10){
		printf("Nadador infantil B.");
	}
	else if(idade >= 11 && idade <= 13){
		printf("Nadador juvenil A.");
	}
	else if(idade >= 14 && idade <= 17){
		printf("Nadador juvenil B.");
	}
	else{
		printf("Nadador senior.");
	}
	
	return 0;
}
