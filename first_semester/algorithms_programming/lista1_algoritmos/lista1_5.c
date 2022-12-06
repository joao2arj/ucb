#include <stdio.h>

int main(){
	
int metros, rolos, avulso;

printf("Digite a quantidade de metros necessaria:\n");
	scanf("%d", &metros);

rolos = metros/50;	
avulso = metros%50;

if(avulso==0){
	printf("Serao necessarios %d rolos \n", rolos);
}

else{
	printf("Serao necessarios %d rolos e %d metros de fio avulso. \n", rolos, avulso);
}

	
return 0;
}
