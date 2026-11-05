#include <stdio.h>

int verificarPar(int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero, resultado;

    printf("===== VERIFICADOR DE NUMEROS =====\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = verificarPar(numero);

    if (resultado == 1)
    {
        printf("O numero %d e PAR!\n", numero);
    }
    else
    {
        printf("O numero %d e IMPAR!\n", numero);
    }

    return 0;
}
