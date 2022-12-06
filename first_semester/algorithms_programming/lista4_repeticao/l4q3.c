#include <stdio.h>

//Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
//naturais ímpares (sem usar comando condicional).

int main(){
	int num, i=0;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	for(i=0; i < num; i++){
		while(i % 2 != 0){
			printf("%d\n", i);
			i++;
		}
	}
	
	return 0;
}
