#include <stdio.h>

//Fa�a um programa para verificar se determinado n�mero inteiro lido � divis�vel por 3 ou
//5, mas n�o simultaneamente pelos dois.

int main(){
	int num1;
	
	printf("Digite o valor: ");
	scanf("%d", &num1);
	
	if(num1 % 3 == 0 && num1 % 5 == 0){
		printf("O numero e divisivel simultaneamente por 3 e 5.");
	}
	else if(num1 % 3 == 0 && num1 % 5 != 0){
		printf("O numero e divisivel por 3.");
	} 
	else{
		printf("O numero e divisivel por 5.");
	}
	return 0;
}
