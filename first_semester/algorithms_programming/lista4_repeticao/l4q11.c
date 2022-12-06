#include <stdio.h>
#include <time.h>

//Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os
//divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

int main(){
	
	int i = 0, num;
	
	printf("Digite um numero positivo: \n");
	scanf("%d", &num);
	
	printf("Divisores do numero %d\n", num);
	
	for(i=1; i <= num; i++){
		if(num % i == 0){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
