#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE"); //Setando os caracteres para o padrão português

	int i, iEmail, iEdit, j, opc, id[1000], idBackup[1000], vacina[1000], vacinaBackup[1000];
	char emailBusca[100], nome[1000][50], nomeBackup[1000][50], email[1000][50], emailBackup[1000][50], sexo[1000][15], sexoBackup[1000][15], endereco[1000][100], enderecoBackup[1000][100];
	double altura[1000], alturaBackup[1000];
    
	menu:
    	printf("PROJETO 1: VETORES\n\n1. Incluir um usuário\n2. Editar um usuário\n3. Excluir um usuário\n4. Buscar um usuário pelo e-mail\n5. Exibir todos os usuários cadastrados\n6. Fazer backup de todos os usuários cadastrados\n7. Restaurar dados\n\nDigite a opção desejada: ");
    	fflush(stdin);
    	scanf("%d", &opc);
    	system("cls");	
	
	switch(opc){
		case 1: //#################### CADASTRO #################### (CHECADO)
    			printf("Digite a quantidade de usuários que serão cadastrados: ");
			fflush(stdin);
    			scanf("%d", &j);
    			system("cls");
    		
    			//VALIDAÇÃO DE QUANTIDADE DE USUÁRIOS A SEREM CADASTRADOS
    			do{	
				if(j > 1000 || j < 0) {
	    				printf("AVISO: Por favor, digite uma quantidade válida!\nQuantidade: ");
	    				fflush(stdin);
	    				scanf("%d", &j);
	    				system("cls");}
				} while (j > 1000 || j < 0);
    	
    			for(i=0;i<j;i++){
    				
    				//ID
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
			                system("cls");}
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
		            		system("cls");}
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
		            		system("cls");}
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
		            		system("cls");}
					} while(vacina[i] != 1 && vacina[i] != 0);
            
            printf("\n# USUÁRIO #%d CADASTRADO COM SUCESSO! #\n\n\n", i+1);
}
			goto menu;
			break;
			
		case 2: //#################### EDITAR #################### (CHECADO)

			printf("## EDITAR UM USUÁRIO ##\n\n");
			printf("1. Editar um usuário\n0. Retornar ao menu\n\nDigite a opção desejada: ");
			fflush(stdin);
			int opc;
			fflush(stdin);
			scanf("%d", &opc);
			system("cls");
			
			if(opc == 1){
				
				printf("## EDITAR UM USUÁRIO ##\n\n");
				printf("Escolha o índice do usuário que será editado:\n\n");
				printf("Índice\tID\tNome\n");
				for(i=0;i<j;i++) {
					printf("%d\t%d\t%s", i, id[i], nome[i]);
				}
				
				int iEdit;

				printf("Índice a ser editado: ");
				fflush(stdin);
				scanf("%d", &iEdit);
				system("cls");
				
				printf("## EDITAR UM USUÁRIO ##\n\n");
				printf("Usuário selecionado: #%d\n\nID: %d\nNome: %sE-mail: %sEndereço: %sSexo: %s\nVacinou: %d\n\n", iEdit, id[iEdit], nome[iEdit], email[iEdit], endereco[iEdit], sexo[iEdit], vacina[iEdit] );
				printf("##############################");
				printf("\n\nSelecione o parâmetro a ser editado:\n");
				printf("1. ID\n2. Nome\n3. E-mail\n4. Endereço\n5. Sexo\n6. Status de vacinação\n\n");
				printf("Parâmetro desejado: ");
				fflush(stdin);
				scanf("%d", &opc);
				system("cls");
				
				switch(opc){
					case 1: //ID
						printf("## EDITAR UM USUÁRIO ##\n\n");
						printf("Usuário selecionado: %s\n\n", nome[iEdit]);
						
						printf("ID antigo: %d\n", id[iEdit]);
						
						printf("Digite o novo ID: ");
						fflush(stdin);
						scanf("%d", &id[iEdit]);
						
						
						break;
						
					case 2: //NOME
						printf("## EDITAR UM USUÁRIO ##\n\n");
						printf("Usuário selecionado: %s\n\n", nome[iEdit]);
						
						printf("Nome antigo: %s\n", nome[iEdit]);
						
						printf("Digite o novo nome: ");
						fflush(stdin);
						fgets(nome[iEdit], 50, stdin);
						
						
						break;
						
					case 3: //EMAIL
						printf("## EDITAR UM USUÁRIO ##\n\n");
						printf("Usuário selecionado: %s\n\n", nome[iEdit]);
						
						printf("E-mail antigo: %s\n", email[iEdit]);
						
						printf("Digite o novo e-mail: ");
						fflush(stdin);
						fgets(email[iEdit], 100, stdin);
						break;
						
					case 4: //ENDEREÇO
						printf("## EDITAR UM USUÁRIO ##\n\n");
						printf("Usuário selecionado: %s\n\n", nome[iEdit]);
						
						printf("Endereço antigo: %s\n", endereco[iEdit]);
						
						printf("Digite o novo endereço: ");
						fflush(stdin);
						fgets(endereco[iEdit], 50, stdin);
						
						
						break;
						
					case 5: //SEXO
						printf("## EDITAR UM USUÁRIO ##\n\n");
						printf("Usuário selecionado: %s\n\n", nome[iEdit]);
						
						printf("Sexo antigo: %s\n", id[iEdit]);
						
						printf("Digite o novo sexo: ");
						fflush(stdin);
						fgets(sexo[iEdit], 50, stdin);
						
						
						break;
						
					case 6: //VACINA
						printf("## EDITAR UM USUÁRIO ##\n\n");
						printf("Usuário selecionado: %s\n\n", nome[iEdit]);
						
						printf("Status da vacina antigo: %d\n", vacina[iEdit]);
						
						printf("Digite o novo status de vacina: ");
						fflush(stdin);
						scanf("%d", &vacina[iEdit]);
						break;
						
					default:
						printf("AVISO: Opção inválida!\n");
						goto menu;}
				
				printf("\n## Usuário editado com sucesso!##\n\n");	
				goto menu;
			} else {
				system("cls");
				goto menu;}
			
			break;
			
		case 3: //#################### EXCLUIR #################### (CHECADO)
		
			printf("## DELETAR UM USUÁRIO ##\n\n");
			printf("1. Deletar um usuário\n0. Retornar ao menu\n\nDigite a opção desejada: ");
			fflush(stdin);
			fflush(stdin);
			scanf("%d", &opc);
			system("cls");
			
			if(opc == 1){
				
				printf("## DELETAR UM USUÁRIO ##\n\n");
				printf("Escolha o índice do usuário que será deletado:\n\n");
				printf("Índice\tID\tNome\n");
				for(i=0;i<j;i++) {
					printf("%d\t%d\t%s", i, id[i], nome[i]);
				}

				printf("Índice(usuário) a ser deletado: ");
				fflush(stdin);
				int iEdit;
				scanf("%d", &iEdit);
				system("cls");
				
				printf("## DELETAR UM USUÁRIO ##\n\n");
				printf("Usuário selecionado: #%d\n\nID: %d\nNome: %sE-mail: %sEndereço: %sSexo: %s\nVacinou: %d\n\n", iEdit, id[iEdit], nome[iEdit], email[iEdit], endereco[iEdit], sexo[iEdit], vacina[iEdit] );
				printf("##############################");
				printf("\n\nSelecione a opção:\n");
				printf("1. Deletar todos os dados\n2. Retornar ao menu\n\n\n");
				printf("Opção: ");
				fflush(stdin);
				scanf("%d", &opc);
				system("cls");
				
				switch(opc){
					case 1:
						id[iEdit] = 0;
						strcpy(nome[iEdit], "");
						strcpy(email[iEdit], "");
						strcpy(endereco[iEdit], "");
						strcpy(sexo[iEdit], "");
						vacina[iEdit] = 0;
						
						printf("\nExclusão feita com sucesso!\n\n");
						sleep(2000);
						
						goto menu;
						
					case 2:
						goto menu;
						break;
					default:
						printf("AVISO: Opção inválida!\n");
						sleep(2000);
						goto menu;
				}
			
			
		case 4: //#################### BUSCAR #################### (!!!CHECAR!!!)
		
			printf("## BUSCAR USUÁRIO PELO E-MAIL ##\n\n");
			printf("Digite o email do usuário que deseja buscar: ");
			fflush(stdin);
			fgets(emailBusca, 100, stdin);
			
			int i_email;
			
			for(i=0;i<1000;i++){
				if(strcmp(emailBusca, email[i]) == 0){
					i_email = i;}}
				
			if (i_email != -1) {
                printf("\nId: %d", id[i_email]);
                printf("\nNome: %s", nome[i_email]); } else {printf("\nUsuário não localizado.\n");}
  
  			printf("Digite qualquer tecla para voltar ao menu: ");
  			scanf("%d", &i_email);
  			goto menu;
			break;
			
		case 5: //#################### EXIBIR TODOS #################### (CHECADO)
		
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
			
		case 6: //#################### BACKUP #################### (CHECADO)
			printf("## BACKUP DE USUÁRIOS CADASTRADOS ##\n\n");
			printf("1. Fazer backup\n0. Retornar ao menu\n\nDigite a opção desejada: ");
			fflush(stdin);
			scanf("%d", &opc);
			
			if(opc == 1){
				for(i=0;i<j;i++) {
					strcpy(nomeBackup[i], nome[i]);
					strcpy(emailBackup[i], email[i]);
					strcpy(enderecoBackup[i], endereco[i]);
					strcpy(sexoBackup[i], sexo[i]);
				
					idBackup[i] = id[i];
					alturaBackup[i] = altura[i];
					vacinaBackup[i] = vacina[i];
				}

				printf("\nBackup feito com sucesso!\n\n");
				
			} else {
				system("cls");
				goto menu;
			}
			
			break;
			
		case 7: //#################### RESTAURAR #################### (CHECADO)
			printf("## RESTAURAÇÃO DE DADOS ##\n\n");
			printf("1. Restaurar dados\n0. Retornar ao menu\n\nDigite a opção desejada: ");
			fflush(stdin);
			scanf("%d", &opc);
			
			if(opc == 1){
				for(i=0;i<j;i++) {
					strcpy(nome[i], nomeBackup[i]);
					strcpy(email[i], emailBackup[i]);
					strcpy(endereco[i], enderecoBackup[i]);
					strcpy(sexo[i], sexoBackup[i]);
				
					id[i] = idBackup[i];
					altura[i] = alturaBackup[i];
					vacina[i] = vacinaBackup[i];
				}

				printf("\nRestauração feito com sucesso!\n\n");
				
			} else {
				system("cls");
				goto menu;
			}
			break;
			
		default:
			printf("# AVISO: Opção inválida! #\n\n");
			goto menu;}
	return 0;
}}
