#include <stdio.h>

//Fa�a um programa que receba um n�mero inteiro maior do que 1 e verifique se o n�mero
//fornecido � primo ou n�o.

int main() {
	int num, i, resultado = 0;
	 
	printf("Digite um numero: ");
	scanf("%d", &num);
 
	 for (i = 2; i <= num / 2; i++) {
	    if (num % i == 0) {
	       resultado++;
	       break;
	    }
	 }
 
	 if (resultado == 0)
	    printf("%d e um numero primo\n", num);
	 else
	    printf("%d nao e um numero primo\n", num);
	 
 return 0;
}
