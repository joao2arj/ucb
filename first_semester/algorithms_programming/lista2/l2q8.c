#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além
de identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha
pode aparecer em mais de uma posição. */

int main() {
	
	int idade[100], pessoas, i;
	
	prinft("Digite a quantidade de pessoas:\n");
	scanf("%d", &pessoas);
	
	for(i=1;i<pessoas;i++){
		printf("Digite a idade da pessoa %d:\n", i);
		scanf("%d", &idade[i]);}
	
	return 0;
}
