#include <stdio.h>

//Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e
//atribua esta opera��o � vari�vel PROD. A seguir mostre a vari�vel PROD com
//mensagem: PROD = �valor de PROD�.

int main(){
	int a, b, prod;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	
	prod = a*b;
	
	printf("PROD: %d", prod);
	
	
	return 0;
}
