#include <stdio.h>
#include <stdlib.h>
int main(void) {

    int numero;
    int *p = &numero;

    printf("Digite um numero inteiro qualquer: \n" );
    scanf("%d", p);

    printf("Valor de P: %d\n",*p);
    printf("Valor na memoria de P: %p\n", (void *)&p);

    return 0;
}
