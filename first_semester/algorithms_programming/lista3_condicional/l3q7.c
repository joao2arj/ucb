#include <stdio.h>
#include <math.h>
#include <string.h>

//Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior
//do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem
//positivos e se a vari�vel A for par escrever a mensagem "Valores aceitos", sen�o
//escrever "Valores nao aceitos".

int main(){
	
	int a, b, c, d;
	
	printf("Digite o numero de A: ");
	scanf("%d", &a);
	
	printf("Digite o numero de B: ");
	scanf("%d", &b);
	
	printf("Digite o numero de C: ");
	scanf("%d", &c);
	
	printf("Digite o numero de D: ");
	scanf("%d", &d);
	
	if(b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0){
		printf("Valores aceitos.");
	}
	else{
		printf("Valores nao aceitos.");
	}
	
	return 0;
}
