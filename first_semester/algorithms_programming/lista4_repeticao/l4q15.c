#include <stdio.h>
#include <time.h>

//Apresente um programa que calcule o valor de qualquer Hn. Em matemática, o número
//harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou
//seja:

int main(){
	
	int i, hn;
	float resultado = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &hn);
	
	for(i = 1; i <= hn; i++){
		resultado += 1.0/i;
		
	}
	
	printf("Resultado: %.1f", resultado);
	
	return 0;
}
