#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *ficheiro;
    Funcionario func[5];
    int qtd;
    char linha[150];

    printf("Quantos funcionarios deseja registar? (1 a 5): ");
    scanf("%d", &qtd);

    if (qtd < 1) qtd = 1;
    if (qtd > 5) qtd = 5;

    ficheiro = fopen("funcionarios.txt", "a");
    if (ficheiro == NULL) {
        printf("Erro ao abrir o ficheiro para gravacao.\n");
        return 1;
    }

    for (int i = 0; i < qtd; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", func[i].nome);
        printf("Salario: ");
        scanf("%f", &func[i].salario);
        printf("Horas extras: ");
        scanf("%d", &func[i].horasExtras);

        fprintf(ficheiro, "Nome: %s | Salario: %.2f | Horas Extras: %d\n",
                func[i].nome, func[i].salario, func[i].horasExtras);
    }
    fclose(ficheiro);

    ficheiro = fopen("funcionarios.txt", "r");
    if (ficheiro == NULL) {
        printf("Erro ao abrir o ficheiro para leitura.\n");
        return 1;
    }

    printf("\n--- Funcionarios Registados ---\n");
    while (fgets(linha, sizeof(linha), ficheiro) != NULL) {
        printf("%s", linha);
    }
    fclose(ficheiro);

    return 0;
}