#include <stdio.h>
#include <math.h>

//Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a
//seguir, verifique e mostre qual a classificação dessa pessoa.

int main(){
	
	int x, y, z, opc, media;
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	
	printf("Digite o valor de z: ");
	scanf("%d", &z);
	
	printf("Escolha a opcao de media:\n1. Geometrica\n2. Ponderada\n3. Harmonica\n4. Aritmetica\nOpcao: ");
	scanf("%d", &opc);
	
	if(opc == 1){
		media = x * y * z;
	}
	else if(opc == 2){
		media = (x + 2 * y + 3 * z) / 6;
	}
	else if(opc == 3){
		media = 1 / (1/x) + (1/y) + (1/z);
	}
	else if(opc == 4){
		media = (x + y + z)/ 3;
	}
	else{
		printf("Opcao incorreta. ERRO!");
	}
	
	printf("Media: %d", media);
	return 0;
}
