
#include <stdio.h>

void exibirMenu() {
    printf("\n1 - Somar");
    printf("\n2 - Subtrair");
    printf("\n3 - Multiplicar");
    printf("\n4 - Dividir");
    printf("\n0 - Sair");
    printf("\nEscolha: ");
}

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    int opcao;
    float n1, n2;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros(com um espaco entre eles): ");
            scanf("%f %f", &n1, &n2);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", somar(n1, n2));
                break;

            case 2:
                printf("Resultado: %.2f\n", subtrair(n1, n2));
                break;

            case 3:
                printf("Resultado: %.2f\n", multiplicar(n1, n2));
                break;

            case 4:
                if (n2 == 0)
                    printf("Erro: divisao por zero!\n");
                else
                    printf("Resultado: %.2f\n", dividir(n1, n2));
                break;

            case 0:
                printf("Finalizando a calculadora!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
