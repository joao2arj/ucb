#include <stdio.h>

int main(){

//int n1, n2;
float n1, n2, media;

printf("Digite a primeira nota:\n");
	scanf("%f", &n1);	
	
printf("Digite a segunda nota:\n");
	scanf("%f", &n2);	
	
media = ((n1*0.35)+(n2*0.75))/n1+n2;

printf("A sua media foi: %f.\n", media);
		
return 0;
}
