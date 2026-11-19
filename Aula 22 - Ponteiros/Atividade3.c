#include <stdio.h>
#include <stdlib.h>
int main(void) {

    int idade = 15;
    int *p = &idade;

    printf("Valor antes da alteracao: %d\n", idade);
    *p = 50;
    printf("Valor apos a alteracao: %d\n", idade);

    return 0;
}
