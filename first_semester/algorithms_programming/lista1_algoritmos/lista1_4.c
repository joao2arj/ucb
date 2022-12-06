#include <stdio.h>

int main(){
	
int n1, n2, resto, quociente;

printf("Digite o numero dividendo:\n");
	scanf("%d", &n1);

printf("Digite o numero divisor:\n");
	scanf("%d", &n2);
	
resto = n1%n2;	
quociente = n1/n2;
	
printf("O resto da divisao e: %d\n O quociente da divisao e:%d\n", resto, quociente);
}
