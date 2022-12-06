#include <stdio.h>
#include <math.h>
#include <string.h>

//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
//peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):

int main(){
	int sexo;
	double altura, pesoIdeal;
	
	printf("Sexo:\n1.Homem\n2.Mulher\nOpcao: ");
	fflush(stdin);
	scanf("%d", &sexo);
	
	printf("Altura: ");
	fflush(stdin);
	scanf("%lf", &altura);
	
	if(sexo == 2){
		pesoIdeal = (62.1 * altura) - 44.7;
		printf("Seu peso ideal e: %.2lf", pesoIdeal);
	}
	else{
		pesoIdeal = (72.7 * altura) - 58;
		printf("Seu peso ideal e: %.2lf", pesoIdeal);
	}
	
	return 0;
}
