#include <stdio.h>
#include <stdlib.h>

void dobrar(int *n) {
    *n = *n * 2;
}

int main(void) {
    int numero;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Resultado: %d\n", numero);

    return 0;
}
