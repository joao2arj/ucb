#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um
//valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual
//o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As
//moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de
//notas necessárias..



int main()

{

float Dinheiro=0;

int r1=0,r2=0,r5=0,r10=0,r20=0,r50=0,r100=0,c1=0,c5=0,c10=0,c25=0,c50=0;


printf("\n Digite o Valor: ");

scanf("%f",&Dinheiro);


// Pega a parte inteira do valor

int parteInteira = (int) Dinheiro;

/* Pega a parte fracionária e multiplica por 100

* porque só existem 2 casas decimais para os centavos

*/

int parteFracionaria = (Dinheiro - parteInteira) * 100;


// Loop para converter a parte inteira em cédulas

do

{

if(parteInteira>=100)

{

parteInteira-=100;

r100++;

}

else if(parteInteira>=50)

{

parteInteira-=50;

r50++;

}

else if(parteInteira>=20)

{

parteInteira-=20;

r20++;

}

else if(parteInteira>=10)

{

parteInteira-=10;

r10++;

}

else if(parteInteira>=5)

{

parteInteira-=5;

r5++;

}

else if(parteInteira>=1)

{

parteInteira-=1;

r1++;

}


}while(parteInteira!=0);


// Loop para converter a parte fracionária em centavos

do

{

if(parteFracionaria>=50)

{

parteFracionaria-=50;

c50++;

}

else if(parteFracionaria>=25)

{

parteFracionaria-=20;

c25++;

}

else if(parteFracionaria>=10)

{

parteFracionaria-=10;

c10++;

}

else if(parteFracionaria>=5)

{

parteFracionaria-=5;

c5++;

}

else if(parteFracionaria>=1)

{

parteFracionaria-=1;

c1++;

}

}while(parteFracionaria!=0);

printf("\n %d nota(s) de 100 Reais.",r100);

printf("\n %d nota(s) de 50 Reais.",r50);

printf("\n %d nota(s) de 20 Reais.",r20);

printf("\n %d nota(s) de 10 Reais.",r10);

printf("\n %d nota(s) de 5 Reais.",r5);

printf("\n %d nota(s) de 1 Reais.",r1);

printf("\n %d moeda(s) de 50 Centavos.",c50);

printf("\n %d moeda(s) de 25 Centavos.",c25);

printf("\n %d moeda(s) de 10 Centavos.",c10);

printf("\n %d moeda(s) de 05 Centavos.",c5);

printf("\n %d moeda(s) de 01 Centavos.",c1);


getch();

return 0;

}
