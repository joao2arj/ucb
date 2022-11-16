#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

typedef struct enderecoUsuario
{
    int rua, cep;
    char cidade[30], estado[30];
} Endereco;

int i, iEmail, iEdit, j, opc = 0, id[1000], idBackup[1000], vacina[1000], vacinaBackup[1000];
char emailBusca[100], nome[1000][50], nomeBackup[1000][50], email[1000][50], emailBackup[1000][50], sexo[1000][15], sexoBackup[1000][15], endereco[1000][100], enderecoBackup[1000][100];
double altura[1000], alturaBackup[1000];

void cadastraUsuario();
void editaUsuario();
void excluiUsuario();
void buscaUsuario();
void exibeUsuario();
void backupUsuario();
void restauraUsuario();

int main()
{

    setlocale(LC_ALL, "PORTUGUESE"); // Setando os caracteres para o padrão português

menu:
    printf("PROJETO 2: STRUCT E FUNÇÕES\n\n1. Incluir um usuário\n2. Editar um usuário\n3. Excluir um usuário\n4. Buscar um usuário pelo e-mail\n5. Exibir todos os usuários cadastrados\n6. Fazer backup de todos os usuários cadastrados\n7. Restaurar dados\n\nDigite a opção desejada: ");
    fflush(stdin);
    scanf("%d", &opc);
    system("cls");

    switch (opc)
    {
    case 1:
        cadastraUsuario();
        goto menu;

    case 2:
        // editaUsuario();
        goto menu;

    case 3:
        // excluiUsuario();
        goto menu;

    case 4:
        // buscaUsuario();
        goto menu;

    case 5:
        exibeUsuario();
        goto menu;

    case 6:
        // backupUsuario();
        goto menu;

    case 7:
        // restauraUsuario();
        goto menu;
    }
}

void cadastraUsuario()
{

    printf("Digite a quantidade de usuários que serão cadastrados: ");
    fflush(stdin);
    scanf("%d", &j);
    system("cls");

    // VALIDAÇÃO DE QUANTIDADE DE USUÁRIOS A SEREM CADASTRADOS
    do
    {
        if (j > 1000 || j < 0)
        {
            printf("AVISO: Por favor, digite uma quantidade válida!\nQuantidade: ");
            fflush(stdin);
            scanf("%d", &j);
            system("cls");
        }
    } while (j > 1000 || j < 0);

    for (i = 0; i < j; i++)
    {

        // ID
        printf("# Usuário (%d) esse será seu ID: ", i + 1);
        srand(time(NULL));
        id[i] = rand() % 1000;
        printf("%d #\nDigite 'OK' para prosseguir: ", id[i]);
        scanf("%d", id);
        system("cls");

        // NOME
        printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nNome: ", i + 1, id[i]);
        fflush(stdin);
        fgets(nome[i], 50, stdin);
        system("cls");

        // E-MAIL
        printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nE-mail: ", i + 1, id[i]);
        fflush(stdin);
        fgets(email[i], 50, stdin);
        system("cls");

        // VALIDAÇÃO "@" NO E-MAIL
        do
        {
            if (strchr(email[i], '@') == 0)
            {
                printf("\nAVISO: E-mail inválido!\nDigite novamente: ");
                fflush(stdin);
                fgets(email[i], 50, stdin);
                system("cls");
            }
        } while (strchr(email[i], '@') == 0);

        // SEXO
        printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\n", i + 1, id[i]);
        printf("Digite uma das opções abaixo:\n-Feminino\n-Masculino\n-Não declarar\nSexo: ");
        fflush(stdin);
        scanf("%s", &sexo[i]);
        system("cls");

        // VALIDAÇÃO DO SEXO
        do
        {
            if (strcmp(sexo[i], "Feminino") != 0 && strcmp(sexo[i], "Masculino") != 0 && strcmp(sexo[i], "Não declarar") != 0)
            {
                printf("AVISO: Formato de sexo inválido!\n\n");
                printf("Digite uma das opções abaixo:\n-Feminino\n-Masculino\n-Não declarar\nSexo: ");
                fflush(stdin);
                scanf("%s", &sexo[i]); // NECESSÁRIO USAR SCANF AO INVÉS DE FGETS (CONFLITO NO STRCMP)
                system("cls");
            }
        } while (strcmp(sexo[i], "Feminino") != 0 && strcmp(sexo[i], "Masculino") != 0 && strcmp(sexo[i], "Não declarar") != 0);

        // ENDEREÇO
        printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nEndereço: ", i + 1, id[i]);
        fflush(stdin);
        fgets(endereco[i], 100, stdin);
        system("cls");

        // ALTURA
        printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nAltura (entre 1 e 2 metros): ", i + 1, id[i]);
        fflush(stdin);
        scanf("%lf", &altura[i]);
        system("cls");

        // VALIDAÇÃO DA ALTURA
        do
        {
            if (altura[i] < 1 || altura[i] > 2)
            {
                printf("AVISO: Altura inválida!\n\nAltura (entre 1 e 2 metros): ");
                fflush(stdin);
                scanf("%lf", &altura[i]);
                system("cls");
            }
        } while (altura[i] < 1 || altura[i] > 2);

        // VACINA
        printf("# INCLUIR UM USUÁRIO (USUÁRIO: %d, ID: %d)#\n\nVacina:\n", i + 1, id[i]);
        printf("Digite uma das opções abaixo:\n0. Não vacinei\n1. Vacinei\nVocê vacinou? ");
        fflush(stdin);
        scanf("%d", &vacina[i]);
        system("cls");

        // VALIDAÇÃO DE VACINA
        do
        {
            if (vacina[i] != 1 && vacina[i] != 0)
            {
                printf("AVISO: Reposta inválida!\n\nDigite uma das opções abaixo:\n0. Não vacinei\n1. Vacinei\nVocê vacinou? ");
                fflush(stdin);
                scanf("%d", &vacina[i]);
                system("cls");
            }
        } while (vacina[i] != 1 && vacina[i] != 0);

        printf("\n# USUÁRIO #%d CADASTRADO COM SUCESSO! #\n\n\n", i + 1);
    }
}

// void editaUsuario(){}

// void excluiUsuario(){}

// void buscaUsuario(){}

void exibeUsuario()
{

    printf("## USUÁRIOS CADASTRADOS ##\n\n");

    for (i = 0; i < j; i++)
    {
        printf("########## USUÁRIO %d ##########\n\n", i + 1);
        printf("Id: %d\nNome: %sE-mail: %sSexo: %s\nAltura: %.lf metros\nVacinou: ", id[i], nome[i], email[i], sexo[i], altura[i]);

        if (vacina[i] == 1)
        {
            printf("Sim\n\n");
        }
        else if (vacina[i] == 0)
        {
            printf("Não\n\n");
        }
    }

    printf("Digite 'OK' para prosseguir: ");
    scanf("%d", &id);
}

// void backupUsuario(){}

// void restauraUsuario(){}
