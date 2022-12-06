#include <stdio.h>

//Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
//de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
//forma “valor de A” + “valor de B” = “valor de X”.

int main(){
	int a, b, x;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	
	printf("%d + %d = %x", a, b, a + b);
	
	
	return 0;
}
