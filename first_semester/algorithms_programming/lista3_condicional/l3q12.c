#include <stdio.h>
#include <math.h>

//Leia 2 valores com uma casa decimal (x e y), que devem representar as
//coordenadas de um ponto em um plano. A seguir, determine qual o quadrante
//ao qual pertence o ponto, ou se est� sobre um dos eixos cartesianos ou na
//origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem
//�Origem�. Se o ponto estiver sobre um dos eixos escreva �Eixo X� ou �Eixo Y�,
//conforme for a situa��o.

int main(){
	
	float x, y;
	
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	
	printf("Digite o valor de y: ");
	scanf("%f", &y);
	
	if(x == 0 && y ==0){
		printf("Origem.");
	}
	else if(x > 0 && y > 0){
		printf("Primeiro quadrante");
	}
	else if(x > 0 && y < 0){
		printf("Quarto quadrante");
	}
	else if(x < 0 && y > 0){
		printf("Segundo quadrante");
	}
	else{
		printf("Terceiro quadrante");
	}
	return 0;
}
