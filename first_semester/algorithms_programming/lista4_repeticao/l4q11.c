#include <stdio.h>
#include <time.h>

//Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores. Exemplo: Os
//divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66.

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
