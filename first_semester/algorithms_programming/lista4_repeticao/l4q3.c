#include <stdio.h>

//Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros n�meros
//naturais �mpares (sem usar comando condicional).

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
