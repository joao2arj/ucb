#include <stdio.h>

//Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou
//�mpar.

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
