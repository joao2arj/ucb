#include <stdio.h>
#include <time.h>

//Escreva um programa que leia um n�mero inteiro, maior ou igual a zero, do usu�rio.
//Imprima o en�simo termo da sequ�ncia de Fibonacci. Essa sequ�ncia come�a no termo de
//ordem zero, e, a partir do segundo termo, seu valor � dado pela soma dos dois termos
//anteriores. Alguns termos dessa sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

int main(){
	
	int i, j, f1 = 0, f2 = 1, prox = 0;
	
	printf("Digite o numero: ");
	scanf("%d", &j);
	
	for(i=0; i <= j;i++){
		prox = f1 + f2;
		f1 = f2;
		f2 = prox;
		
		printf("%d\n", f1);
	}
	return 0;
}
