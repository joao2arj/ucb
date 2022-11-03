#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void cadastro(){
	int i, j;
	char nome[5][50], email[5][50], sexo[5][15], endereco[5][100];
    double altura[5];
    int vacina[5];
    
    printf("Digite a quantidade de usuários que serão cadastrados: ");
		fflush(stdin);
    	scanf("%d", &j);
    	system("cls");
    
    for(i=0;i<j;i++){

            //NOME
            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d)#\n\n", i+1);
            printf("Nome: ");
            fflush(stdin);
            fgets(nome[i], 50, stdin);
            system("cls");

            //E-MAIL
            printf("# INCLUIR UM USUÁRIO #\n\n");
            printf("E-mail: ");
            fflush(stdin);
            fgets(email[i], 50, stdin);
            system("cls");

            //OCORRÊNCIA DE "@" NO E-MAIL
            do {
	            if(strchr(email[i], '@') == 0) {
	                printf("\nAVISO: E-mail inválido!\nDigite novamente: ");
	                fflush(stdin);
	                fgets(email[i], 50, stdin);
	                system("cls");
	            }
            } while (strchr(email[i], '@') == 0);
            
            //SEXO
            printf("# INCLUIR UM USUÁRIO #\n\n");
            printf("Digite uma das opções abaixo:\n-Feminino\n-Masculino\n-Não declarar\n");
			printf("Sexo: ");
            fflush(stdin);
            fgets(sexo[i], 3, stdin);
            system("cls");
            
            //AJUSTAR
            //VALIDAÇÃO DO SEXO
            if(sexo[i] != "Feminino" || sexo[i] != "Masculino" || sexo[i] != "Não declarar" ) {
            	printf("Formato de sexo inválido!\n\n");
            	printf("Digite uma das opções abaixo:\n-Feminino\n-Masculino\n-Não declarar\n");
				printf("Sexo: ");
            	fflush(stdin);
            	fgets(sexo[i], 30, stdin);
            	system("cls");
			}
			
            
            //ENDEREÇO
            printf("# INCLUIR UM USUÁRIO #\n\n");
            printf("Endereço:\n");
            fflush(stdin);
            fgets(endereco[i], 20, stdin);
            system("cls");
            
            //ALTURA
            printf("# INCLUIR UM USUÁRIO #\n\n");
			printf("Altura (entre 1 e 2 metros): ");
            fflush(stdin);
            scanf("%lf", &altura[i]);
            system("cls");
            
         	if(altura[i] < 1 || altura[i] > 2) {
         		printf("AVISO: Altura inválida!\n");
         		printf("Digite a altura (Entre 1 e 2 metros): ");
         		fflush(stdin);
            	scanf("%lf", &altura[i]);
            	system("cls");
			 }
            
            //VACINA
            printf("# INCLUIR UM USUÁRIO #\n\n");
            printf("Digite uma das opções abaixo:\n0. Não vacinei\n1. Vacinei\n");
			printf("Você vacinou? ");
            fflush(stdin);
            scanf("%d", &vacina[i]);
            system("cls");
            
            printf("\n# USUÁRIO CADASTRADO COM SUCESSO! #\n\n\n");

    };
}

void exibir_usuarios(){
	
}
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int id, i, j, opc;
	char nome[5][50], email[5][50], sexo[5][15], endereco[5][100];
    double altura[5];
    int vacina[5];
	
	menu:
    printf("PROJETO 1: VETORES\n\n1. Incluir um usuário\n2. Editar um usuário\n3. Excluir um usuário\n4. Buscar um usuário pelo e-mail\n5. Exibir todos os usuários cadastrados\n6. Fazer backup de todos os usuários cadastrados\n7. Restaurar dados\n\nDigite a opção desejada: ");
    fflush(stdin);
    scanf("%d", &opc);
    system("cls");	
	
	switch(opc){
		case 1: //CADASTRO (JOAO)
    		
    		cadastro();
    		
    		goto menu;
			break;
			
		case 2: //EDITAR (LUCAS)
			
			goto menu;
			break;
			
		case 3: //DELETAR (HENRIQUE)
		
			goto menu;
			break;
			
		case 4: //BUSCAR UM USUÁRIO ()
		
			goto menu;
			break;
			
		case 5: //EXIBIR TODOS (JOAO)
		
			goto menu;
			break;
			
		case 6: //FAZER BACKUP ()
		
			goto menu;
			break;
			
		case 7: //RESTAURAR DADOS ()
		
			goto menu;
			break;
			
		default:
			
			printf("# AVISO: Opção inválida! #\n\n");
			goto menu;
	}
	
	return 0;
}
