#include <stdio.h>

float maiorPreco(float preco1, float preco2)
{
    if (preco1 > preco2)
    {
        return preco1;
    }
    else
    {
        return preco2;s
    }
}

int main()
{
    float preco1, preco2, maior;

    printf("===== COMPARADOR DE PRECOS =====\n\n");

    printf("Digite o primeiro preco: ");
    scanf("%f", &preco1);

    printf("Digite o segundo preco: ");
    scanf("%f", &preco2);

    printf("Preco 1: %f\n", preco1);
    printf("Preco 2: %f\n", preco2);

    if (preco1 == preco2)
    {
        printf("Os precos sao iguais!\n");
    }
    else
    {
        maior = maiorPreco(preco1, preco2);

        printf("O maior preco e: R$ %.2f\n", maior);
    }

    return 0;
}
