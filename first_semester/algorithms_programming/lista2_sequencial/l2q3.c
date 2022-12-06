#include <stdio.h>

int main() {
	int num1;
	float num2;
	double num3;
	char palavra1, palavra2;
	int booleano;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num1);
	
	printf("Digite um numero real: ");
	scanf("%f", &num2);
	
	printf("Digite outro numero real: ");
	scanf("%lf", &num3);
	
	printf("Digite uma letra: ");
	fflush(stdin);
	scanf("%c", &palavra1);
	
	printf("Digite uma palavra: ");
	fflush(stdin);
	scanf("%s", &palavra2);
	
	printf("Digite um valor booleano: ");
	fflush(stdin);
	scanf("%d", &booleano);
	
	printf("Numero inteiro: %d\nNumeros reais:\n%.lf\n%.lf\nLetra: %c\nString: %s\nLogico:", num1, num2, num3, palavra1, palavra2, booleano);
	
	return 0;
}
