#include <stdio.h>
#include <time.h>

//Elabore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite um
//n�mero negativo. O programa tem de retornar o maior e o menor n�mero lido.

int main(){
	
	int num,  numMaior, numMenor;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(num > 0){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		numMenor = numMenor;
		
		if(num > numMaior){
			numMaior = num;
		}
		else if(num < numMenor){
			numMenor = num;
		}
	}
	
	printf("Maior numero digitado: %d\nMenor numero digitado: %d.", numMaior, numMenor);
	
	return 0;
}
