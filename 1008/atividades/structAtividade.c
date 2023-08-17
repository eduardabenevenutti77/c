#include <stdio.h>
#include <stdlib.h>
struct usuario_struct {
    char nome[20];
    int cpf[11];
    int idade;
};

int main() {
	
	system("chcp 65001");
	int nmPessoas = 5;
	//malloc = otimiza o armazenamento de memoria no servidor
	struct usuario_struct *pessoas = malloc(nmPessoas * sizeof(struct usuario_struct));
    for (int i = 0; i < nmPessoas; i++) {
        printf("\nInforme ao sistema, as seguintes informações do \e[33;1m%dº\e[33;0m usuário:\n", i + 1);
        receba(&pessoas[i]);
    }

    imprima(pessoas);

    free(pessoas);

    return 0;
}
void receba(struct usuario_struct *pessoas) {
    printf("\nDigite o nome do usuário: ");
    scanf("%s", &pessoas->nome);
    printf("\nDigite o seu CPF - \e[33;1mdeve possuir até 8 digitos\e[33;0m: ");
    scanf("%d", &pessoas->cpf);
    printf("\nDigite a sua idade: ");
    scanf("%d", &pessoas->idade);
}

void imprima(struct usuario_struct *pessoas, int nmPessoas) {
    printf("\nImprimindo resultados: \n");
    for (int i = 0; i < nmPessoas; i++) {
        printf("\nPessoa \e[33;1m%d\e[33;0m:\n", i + 1);
        printf("Nome: \e[33;1m%s\e[33;0m\n", pessoas[i].nome);
        printf("CPF: \e[33;1m%d\e[33;0m\n", pessoas[i].cpf);
        printf("Idade:\e[33;1m%d\e[33;0m\n", pessoas[i].idade);
        printf("--------------------\n");
    }
}