#include <stdio.h>
#include <time.h>

//Apresente um programa que calcule o valor de qualquer Hn. Em matem�tica, o n�mero
//harm�nico designado por Hn define-se como o en�simo termo da s�rie harm�nica. Ou
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
