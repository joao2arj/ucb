#include <stdio.h>

//Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
//produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B -
//C * D). Apresente o resultado da seguinte forma:
//DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
//DIFERENCA = “vaor de DIFERENCA

int main(){
	int a, b, c, d, diferenca;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	
	printf("Digite o quarto valor: ");
	scanf("%d", &d);
	
	diferenca = (a*b) - (c*d);
	
	printf("%d * %d - %d * %d", a, b, c, d);
	printf("\nDiferenca: %d", diferenca);
	
	
	return 0;
}
