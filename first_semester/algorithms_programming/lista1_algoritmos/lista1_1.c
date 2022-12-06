#include <stdio.h>
#include <stdlib.h>

int main() {
	
int hora, min, seg;

printf("Digite a quantidade de horas:\n");
scanf("%d", &hora);

min = hora*60;
seg = hora*3600;

printf("%d horas correspondem a %d minutos ou %d segundos\n", hora, min, seg);
	
}
