#include <stdio.h>

int main() {
    FILE *ficheiro;
    int qtd, matricula;
    char nome[50];

    printf("Quantos funcionarios deseja registar? (1 a 5): ");
    scanf("%d", &qtd);

    if (qtd < 1) qtd = 1;
    if (qtd > 5) qtd = 5;

    ficheiro = fopen("funcionarios.txt", "w");
    if (ficheiro == NULL) {
        printf("Erro ao abrir o ficheiro.\n");
        return 1;
    }

    for (int i = 0; i < qtd; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", nome);
        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(ficheiro, "Nome: %s | Matricula: %d\n", nome, matricula);
    }

    fclose(ficheiro);
    printf("\nDados gravados com sucesso em funcionarios.txt!\n");

    return 0;
}