/* Projeto 01:

Utilizando os conceitos de vetor, implemente um algoritmo que:

    inclua até 1000 usuários;
    edite um usuário;
    exclua um usuário;
    busque um usuário pelo email;
    imprima todos os usuários cadastrados;
    faça backup dos usuários cadastrados;
    faça restauração dos dados;

Dados do usuário:

    Id (int) => preenchido automaticamente por números randômicos
    Nome completo (string)
    Email (string) => validação do campo: verificar se o caractere "@" aparece
    Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Não declarar
    Endereço (string)
    Altura (double) => validação do campo: aceitar valores entre 1 e 2 m.
    Vacina (tomou a vacina? boolean)

Duas equipes serão sorteadas para realizar a apresentação do projeto, tendo 15 min para cada apresentação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user {
    char nome[100], email[100], sexo[3], endereco[100];
    double altura;
    
};

int main() {

    int opc;

    printf("PROJETO 1: VETORES\n\n");
    printf("1. Incluir um usuario\n2. Editar um usuario\n3. Excluir um usuario\n4. Buscar um usuario pelo e-mail\n5. Exibir todos os usuarios cadastrados\n6. Fazer backup de todos os usuarios cadastrados\n7. Restaurar dados\n\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opc);

    system('cls');

    switch (opc) {

    case 1:

        printf("# INCLUIR USUARIO #\n\n");

        break;

    case 2:

        printf("# EDITAR USUARIO #\n\n");
        break;

    case 3:

        printf("# EXCLUIR USUARIO #\n\n");
        break;

    case 4:

        printf("# BUSCAR USUARIO PELO E-MAIL #\n\n");
        break;

    case 5:

        printf("# EXIBIR USUARIOS CADASTRADOS #\n\n");
        break;

    case 6:

        printf("# FAZER BACKUP DE USUARIOS #\n\n");
        break;

    case 7:

        printf("# RESTAURAR DADOS #\n\n");
        break;
    
    default:
    
        printf("AVISO: Opcao invalida!\n");
        break;
    }
    return 0;
}
