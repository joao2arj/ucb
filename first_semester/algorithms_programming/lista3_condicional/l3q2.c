#include <stdio.h>

//Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
//números forem iguais, imprima a mensagem “Números iguais”.

int main(){
	int a, b;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	if(a > b){
		printf("%d e maior que %d", a, b);
	}
	else if(a == b){
		printf("Os numeros sao iguais");
	}
	else {
		printf("%d e maior que %d", b, a);
	}
	
	
	
	return 0;
}
