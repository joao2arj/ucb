#include <stdio.h>

//Faça um programa que mostre ao usuário um menu com quatro opções de operações
//matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e
//o seu programa pede dois valores numéricos e realiza a operação, mostrando o
//resultado.

int main(){
	int opc;
	float num1, num2, valor;
	
	printf("Digite a operacao a ser feita:\n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\nOpcao: ");
	scanf("%d", &opc);
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &num2);
	
	switch(opc){
		case 1:
			valor = num1 + num2;
			printf("Resultado: %.2f", valor);
			break;
		
		case 2:
			valor = num1 - num2;
			printf("Resultado: %.2f", valor);
			break;
			
		case 3:
			valor = num1 * num2;
			printf("Resultado: %.2f", valor);
			break;
			
		case 4:
			valor = num1 / num2;
			printf("Resultado: %.2f", valor);
			break;
			
		default:
			printf("ERRO!");	
	}
	
	return 0;
}
