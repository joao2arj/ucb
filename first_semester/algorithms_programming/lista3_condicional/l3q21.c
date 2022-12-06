#include <stdio.h>
#include <math.h>

//Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
//seguida, calcule e mostre as raízes dessa equação

int main(){
	
	float a, b, c;
	
	int delta, x1, x2;
	
	printf("Digite o coeficiente a: ");
	scanf("%f", &a);
	
	printf("Digite o coeficiente b: ");
	scanf("%f", &b);
	
	printf("Digite o coeficiente c: ");
	scanf("%f", &c);

	if(a == 0){
		printf("Os coeficientes nao correspondem a uma equacao de 2 grau.\n");
	}
	
	delta = pow(b, 2) - 4 * a * c;
	
	if(delta > 0){
		printf("Duas raizes distintas\n");
		
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		
		printf("Raiz 1: %d\nRaiz 2: %d", x1, x2);
	}
	else if(delta < 0){
		printf("Nao existe raiz");
	}
	else{
		printf("Raiz unica: ");
		printf("%d", sqrt(delta));
	}
	return 0;
}
