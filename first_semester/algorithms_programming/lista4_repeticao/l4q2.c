#include <stdio.h>

//Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
//naturais de 0 at� N em ordem decrescente.

int main(){
	
	int n, i;
	
	printf("Digite o valor: ");
	scanf("%d", &n);
	
	for(i=n; i >= 0; i--){
		printf("%d ", i);
	}
	return 0;
}
