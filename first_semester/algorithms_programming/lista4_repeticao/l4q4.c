#include <stdio.h>

//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando
//números maiores que 0.

int main(){
	int num, i=0, j=0;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	for(i=0; i < num; i++){
		while(i % 3 == 0){
			printf("%d\n", i);
			i++;
			j++;
			
			}
			if(j == 5){
				exit(0);
			}
		}
	
	return 0;
}
