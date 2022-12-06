#include <stdio.h>

//Faça um programa que leia um número inteiro positivo N e imprima todos os números
//naturais de 0 até N em ordem crescente.

int main(){
	
	int n, i;
	
	printf("Digite o valor: ");
	scanf("%d", &n);
	
	for(i=0;i <= n;i++){
		printf("%d ", i);
	}
	return 0;
}
