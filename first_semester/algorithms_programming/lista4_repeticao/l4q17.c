#include <stdio.h>
#include <time.h>

//Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas
//do chamado triângulo de Floyd:
//1
//2 3
//4 5 6
//8 9 10
//11 12 13 14 15
//16 17 18 19 20 21

int main(){
	
	int i, j, n, c = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			c++;
			printf("%d ", c);
		}
		printf("\n");
	}
	
	return 0;
}
