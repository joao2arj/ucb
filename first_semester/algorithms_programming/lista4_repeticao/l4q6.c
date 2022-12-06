#include <stdio.h>
#include <time.h>

//Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e
//terminando em 0. Mostre uma mensagem “FIM!” após a contagem.

int main(){
	int soma=0, i=0, j=0;
	
	for(i=10; i >= 0; i--){
		printf("%d\n", i);
		sleep(1);
	}
	
	printf("FIM!");
	
	return 0;
}
