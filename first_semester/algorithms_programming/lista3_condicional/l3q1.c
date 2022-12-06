#include <stdio.h>

//Faça um programa que leia dois números e mostre qual deles é o maior.

int main(){
	int a, b;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	if(a > b){
		printf("%d e maior que %d", a, b);
	} else {
		printf("%d e maior que %d", b, a);
	}
	
	
	
	return 0;
}
