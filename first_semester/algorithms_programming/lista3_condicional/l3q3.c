#include <stdio.h>

//Faça um programa que leia um número inteiro e verifique se esse número é par ou
//ímpar.

int main(){
	int a;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	if(a % 2 == 0){
		printf("%d e um numero par", a);
	}
	else {
		printf("%d e um numero impar", a);
	}
	
	return 0;
}
