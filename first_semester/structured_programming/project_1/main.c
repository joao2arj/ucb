#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE"); //Setando os caracteres para o padrão português
	
	int id[1000], id_b[1000],i, j, opc, excluir, Idexcluir[1000], Ideditar[1000], editar;
	char nome[1000][50], email[1000][50], sexo[1000][15], endereco[1000][100], emailb[1000][50], nome_b[1000][50], email_b[1000][50], sexo_b[1000][15], endereco_b[1000][100];
    	double altura[1000], altura_b[1000];
    	int vacina[1000], vacina_b[1000];
    
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
	    			system("cls");}
			} while (j > 1000 || j < 0);
    	
    			for(i=0;i<j;i++){	//ID
				printf("# Usuário (%d) esse será seu ID: ", i+1);
				srand(time(NULL));
				id[i] = rand()%1000;
    				printf("%d #\nDigite 'OK' para prosseguir: ", id[i]); 
    				scanf("%d", &id);
    				system("cls");
    		
			    	//NOME
			    	printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nNome: ", i+1, id[i]);
			    	fflush(stdin);
			    	fgets(nome[i], 50, stdin);
			    	system("cls");
	
	            //E-MAIL
	            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nE-mail: ", i+1, id[i]);
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
            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\n", i+1, id[i]);
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
            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nEndereço: ", i+1, id[i]);
            fflush(stdin);
            fgets(endereco[i], 100, stdin);
            system("cls");
            
            //ALTURA
            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nAltura (entre 1 e 2 metros): ", i+1, id[i]);
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
            printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nVacina:\n", i+1, id[i]);
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

    		
}
			goto menu;
			break;
			
		case 2: //EDITAR (LUCAS)

			printf("# Editar um usuário #");
			printf("\n\nDigite o Id do usuário que deseja Editar: ");
			fflush(stdin);
			scanf("%d", &Ideditar);
			system("cls");

			if(id[i] == Ideditar[i]){
				printf("# Editar Usuário #\n\n");
				printf("Usuário: %s", nome);
				printf("\nDigite uma das opções abaixo: ", nome);
			    printf("Qual informacao voce deseja alterar ?\n[1]: Nome\n[2]: Email\n[3]: Sexo\n[4]: Endereco\n[5]: Altura\n[6]: Vacina\n\n");
				fflush(stdin);
				scanf("%d", &editar);
		}
		else if(id[i] != Ideditar[i]){
				printf("# Editar usuário #");
				printf("\n\nEste Id não corresponde à nenhum usuário\nVocê será encaminhado de volta ao menu!");
				Sleep(7000);
				system("cls");
				goto menu;
		}
		switch (editar){
		case 1:
		    // EDITAR NOME
			printf("O Nome que deseja:");
			fflush(stdin);
			fgets(nome[i], 50, stdin);
			Sleep(7000);
			system("cls");
            printf("Usuario Editado com sucesso\n Você sera enviado ao Menu");
            break;
			goto menu;
		case 2:
		    // EDITAR EMAIL
		    printf("# EDITAR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nNovo E-mail: ", i+1, id);
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
			Sleep(7000);
			system("cls");
			printf("Email alterado com sucesso\n Você sera enviado ao Menu");
			goto menu;
		    break;
		case 3:
		    // EDITAR SEXO
            printf("# EDITAR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\n", i+1, id);
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
			Sleep(7000);
			system("cls");
			printf("Sexo alterado com sucesso\n Você sera enviado ao Menu");
			goto menu;
		    break;
		case 4:
		    printf("# EDITAR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nNovo Endereço: ", i+1, id);
            fflush(stdin);
            fgets(endereco[i], 100, stdin);
            system("cls");
			Sleep(7000);
			printf("Endereço alterado com sucesso\n Você sera enviado ao Menu");
			goto menu;
			break;
		case 5:
		    //EDITAR ALTURA
            printf("# EDITAR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nNova Altura (entre 1 e 2 metros): ", i+1, id);
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
			system("cls");
			Sleep(7000);
			printf("Altura alterado com sucesso\n Você sera enviado ao Menu");
			goto menu;
			break;
		case 6:
		    //EDITAR  VACINA
            printf("# EDITAR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nVacina:\n", i+1, id);
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
			system("cls");
			Sleep(7000);
			printf("Vacina alterado com sucesso\n Você sera enviado ao Menu");
			goto menu;
			break;
		default:
		    printf("AVISO: Opção invalida\n Tente novamente.");
			break;
		}
            goto menu;
			break;
			
		case 3: //DELETAR (HENRIQUE)
		
			printf("# Excluir um usuário #");
			printf("\n\nDigite o Id do usuário que deseja excluir: ");
			fflush(stdin);
			scanf("%d", &Idexcluir);
			system("cls");
	
			//Pergunta se usuário deseja excluir ou não.
			
		if(id[i] == Idexcluir[i]){
				printf("# Excluir Usuário #\n\n");
				printf("Usuário: %s", nome);
				printf("\nDigite uma das opções abaixo: ", nome);
				printf("\n0. Desejo excluir este usuário");
				printf("\n1. Não desejo excluir este usuário");
				printf("\nDeseja excluir? ");
				fflush(stdin);
				scanf("%d", &excluir);
		}
		else if(id[i] != Idexcluir[i]){
				printf("# Excluir usuário #");
				printf("\n\nEste Id não corresponde à nenhum usuário\nVocê será encaminhado de volta ao menu!");
				Sleep(7000);
				system("cls");
				goto menu;
				
		}
		
			//Parte da exclusão
		
//		if(excluir==0){
//			
//			 	//Idexcluir[id] = 0;
//                //strcpy(nome[id], "");
//                //j--;
//			
//			printf("\nUsuário excluído com sucesso");
//			Sleep(4000);
//			system("cls");
//			goto menu;
//		
//			
//			
//			
//		}
//		
//		else if(excluir==1){
//				printf("\nVocê será encaminhado de volta ao menu");
//				Sleep(3000);
//				system("cls");
//				goto menu;
//		
//		}
			break;
			
			
			
		case 4: //BUSCAR UM USUÁRIO (HENRIQUE)
		printf("Digite o email do usuário que deseja buscar: ");
		fflush(stdin);
		fgets(emailb[i], 50, stdin);
				//Verificação dos emails
		if(strcmp(email[i],emailb[i])==0){
			printf("Nome: %sId: %d\nSexo: %s\nEndereço: %s", nome, id, sexo, endereco);
			printf("\nEm cinco segundos você será encaminhado de volta ao menu.");
			Sleep(5000);
			system("cls");
			goto menu;
			
		}else if(email[i] != emailb[i]){
			printf("Email inválido, você será encaminhado de volta ao menu!");
			Sleep(3000);
			system("cls");
			goto menu;
		}
		
			break;
			
		case 5: //EXIBIR TODOS (JOAO)
		
			printf("## USUÁRIOS CADASTRADOS ##\n\n");

			for(i=0;i<2;i++){
				printf("########## USUÁRIO %d ##########\n\n", i+1);
				printf("Id: %d\nNome: %sE-mail: %sSexo: %s\nAltura: %.lf metros\nVacinou: ", id[i], nome[i], email[i], sexo[i], altura[i]);
				
				if(vacina[i] == 1){
					printf("Sim\n\n");
				} else if(vacina[i] == 0) {
					printf("Não\n\n");
				};
	
				}
			
			printf("Digite 'OK' para prosseguir: "); 
    			scanf("%d", &id);
			goto menu;
			break;
			
		case 6: //FAZER BACKUP (JOÃO)
			printf("## BACKUP DE USUÁRIOS CADASTRADOS ##\n\n");
			printf("1. Fazer backup\n0. Retornar ao menu\n\nDigite a opção desejada: ");
			fflush(stdin);
			int opc;
			scanf("%d", &opc);
			
			if(opc == 1){
				for(i=0;i<j;i++) {
					strcpy(nome_b[i], nome[i]);
					strcpy(email_b[i], email[i]);
					strcpy(endereco_b[i], endereco[i]);
					strcpy(sexo_b[i], sexo[i]);
				
					id_b[i] = id[i];
					altura_b[i] = altura[i];
					vacina_b[i] = vacina[i];
				}

				printf("\nBackup feito com sucesso!\n\n");
				
			} else {
				system("cls");
				goto menu;
			}
			
			break;
			
		case 7: //RESTAURAR DADOS (JOÃO)
			printf("## RESTAURAÇÃO DE DADOS ##\n\n");
			printf("1. Restaurar dados\n0. Retornar ao menu\n\nDigite a opção desejada: ");
			fflush(stdin);
			scanf("%d", &opc);
			
			if(opc == 1){
				for(i=0;i<j;i++) {
					strcpy(nome_b[i], nome[i]);
					strcpy(email_b[i], email[i]);
					strcpy(endereco_b[i], endereco[i]);
					strcpy(sexo_b[i], sexo[i]);
				
					id_b[i] = id[i];
					altura_b[i] = altura[i];
					vacina_b[i] = vacina[i];
				}

				printf("\nBackup feito com sucesso!\n\n");
				
			} else {
				system("cls");
				goto menu;
			}
			break;
			
		default:
			printf("# AVISO: Opção inválida! #\n\n");
			goto menu;
			
	
}
	
	return 0;
}
