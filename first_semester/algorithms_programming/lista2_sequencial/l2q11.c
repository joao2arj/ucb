#include <stdio.h>
#include <math.h>

//Faça um programa que calcule e mostre a área da superfície e o volume de uma
//esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é:
//(4/3) * pi * R³. A fórmula para calcular a área é: 4 * pi * R². Considere (atribua)
//para pi o valor 3.14159. Use o conceito de constante Dica: Ao utilizar a fórmula,
//procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++),
//assumem que o resultado da divisão entre dois inteiros é outro inteiro.

#define pi 3,14159

int main(){

	float r, area, volume;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &r);

	area = 4 * pi * pow(r, 2);
	volume = (4.0/3) * pi * pow(r, 3);
	
	
	printf("Area: %.2lf, volume: %.2lf.", area, volume);
	return 0;
}
