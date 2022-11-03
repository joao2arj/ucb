#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE"); //Setando os caracteres para o padrão português
	
	int id, i, j, opc;
	char nome[1000][50], email[1000][50], sexo[1000][15], endereco[1000][100];
    double altura[1000];
    int vacina[1000];
	
	menu:
    printf("PROJETO 1: VETORES\n\n1. Incluir um usuário\n2. Editar um usuário\n3. Excluir um usuário\n4. Buscar um usuário pelo e-mail\n5. Exibir todos os usuários cadastrados\n6. Fazer backup de todos os usuários cadastrados\n7. Restaurar dados\n\nDigite a opção desejada: ");
    fflush(stdin);
    scanf("%d", &opc);
    system("cls");	
	
	switch(opc){
		case 1: //CADASTRO (JOAO)
    
    		printf("Digite a quantidade de usuários que serão cadastrados: ");
			fflush(stdin);
    		scanf("%d", &j);
    		system("cls");
    		
    		do{	//VALIDAÇÃO DE QUANTIDADE DE USUÁRIOS A SEREM CADASTRADOS
				if(j > 1000 || j < 0) {
	    			printf("AVISO: Por favor, digite uma quantidade válida!\nQuantidade: ");
	    			fflush(stdin);
	    			scanf("%d", &j);
	    			system("cls");
				}
			} while(j > 1000 || j < 0);
    	
    		for(i=0;i<j;i++){

	            //NOME
	            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d)#\n\nNome: ", i+1);
	            fflush(stdin);
	            fgets(nome[i], 50, stdin);
	            system("cls");
	
	            //E-MAIL
	            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d)#\n\nE-mail: ", i+1);
	            fflush(stdin);
	            fgets(email[i], 50, stdin);
	            system("cls");

            //VALIDAÇÃO "@" NO E-MAIL
            do {
	            if(strchr(email[i], '@') == 0) {
	                printf("\nAVISO: E-mail inválido!\nDigite novamente: ");
	                fflush(stdin);
	                fgets(email[i], 50, stdin);
	                system("cls");
	            }
            } while (strchr(email[i], '@') == 0);
            
            //SEXO
            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d) #\n\n", i+1);
            printf("Digite uma das opções abaixo:\n-Feminino\n-Masculino\n-Não declarar\nSexo: ");
            fflush(stdin);
            scanf("%s", &sexo[i]);
            system("cls");
            
            //VALIDAÇÃO DO SEXO
			do{
				if(strcmp(sexo[i], "Feminino") != 0 && strcmp(sexo[i], "Masculino") != 0 && strcmp(sexo[i], "Não declarar") != 0) {
            		printf("AVISO: Formato de sexo inválido!\n\n");
            		printf("Digite uma das opções abaixo:\n-Feminino\n-Masculino\n-Não declarar\nSexo: ");
            		fflush(stdin);
            		scanf("%s", &sexo[i]); //NECESSÁRIO USAR SCANF AO INVÉS DE FGETS (CONFLITO NO STRCMP)
            		system("cls");
				}
			} while(strcmp(sexo[i], "Feminino") != 0 && strcmp(sexo[i], "Masculino") != 0 && strcmp(sexo[i], "Não declarar") != 0);

            //ENDEREÇO
            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d)#\n\nEndereço: ", i+1);
            fflush(stdin);
            fgets(endereco[i], 100, stdin);
            system("cls");
            
            //ALTURA
            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d)#\n\nAltura (entre 1 e 2 metros): ", i+1);
            fflush(stdin);
            scanf("%lf", &altura[i]);
            system("cls");
            
            //VALIDAÇÃO DA ALTURA
         	do{
			 	if(altura[i] < 1 || altura[i] > 2) {
         			printf("AVISO: Altura inválida!\n\nAltura (entre 1 e 2 metros): ");
         			fflush(stdin);
            		scanf("%lf", &altura[i]);
            		system("cls");
			 	}
			} while(altura[i] < 1 || altura[i] > 2);
            
            //VACINA
            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d)#\n\nVacina:\n", i+1);
            printf("Digite uma das opções abaixo:\n0. Não vacinei\n1. Vacinei\nVocê vacinou? ");
            fflush(stdin);
            scanf("%d", &vacina[i]);
            system("cls");
            
            //VALIDAÇÃO DE VACINA
            do{
            	if(vacina[i] != 1 && vacina[i] != 0){
            		printf("AVISO: Reposta inválida!\n\nDigite uma das opções abaixo:\n0. Não vacinei\n1. Vacinei\nVocê vacinou? ");
            		fflush(stdin);
            		scanf("%d", &vacina[i]);
            		system("cls");
				}
			} while(vacina[i] != 1 && vacina[i] != 0);
            
            printf("\n# USUÁRIO #%d CADASTRADO COM SUCESSO! #\n\n\n", i+1);
    		
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
}}
