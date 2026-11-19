#include <stdio.h>

int main() {
    FILE *ficheiro;
    int numero;

    ficheiro = fopen("numeros.txt", "w");
    if (ficheiro == NULL) {
        printf("Erro ao criar o ficheiro.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Introduza o %d.o numero inteiro: ", i + 1);
        scanf("%d", &numero);
        fprintf(ficheiro, "%d\n", numero);
    }
    fclose(ficheiro);

    ficheiro = fopen("numeros.txt", "r");
    if (ficheiro == NULL) {
        printf("Erro ao abrir o ficheiro para leitura.\n");
        return 1;
    }

    printf("\nNumeros armazenados no ficheiro:\n");
    while (fscanf(ficheiro, "%d", &numero) == 1) {
        printf("%d\n", numero);
    }
    fclose(ficheiro);

    return 0;
}