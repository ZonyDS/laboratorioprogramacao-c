#include <stdio.h>

int dobro(int quantidade)
{
    return quantidade * 2;
}

int main()
{
    int quantidadeInicial, quantidadeFinal;

    printf("===== CONTROLE DE ESTOQUE =====\n\n");

    printf("Digite a quantidade inicial: ");
    scanf("%d", &quantidadeInicial);

    quantidadeFinal = dobro(quantidadeInicial);

    printf("\nQuantidade inicial: %d produtos\n", quantidadeInicial);
    printf("Quantidade final apos duplicacao: %d produtos\n", quantidadeFinal);

    return 0;
}
