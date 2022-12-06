#include <stdio.h>
#include <math.h>

//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
//número digitado ao quadrado e raiz quadrada do número digitado.

int main(){
	int num;
	double raizNum;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	raizNum = sqrt(num);
	
	if(num > 0){
		printf("%d ao quadrado = %d, raiz quadrada de %d = %.2lf", num, num*num, num, raizNum);
	}
	
	return 0;
}
