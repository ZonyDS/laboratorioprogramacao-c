#include <stdio.h>
#include <stdlib.h>
int main(void) {

    int idade = 20;
    int *p = &idade;

    printf("Valor da idade: %d\n", idade);
    printf("Valor na memoria da idade: %p\n", (void *)&p);
    printf("Valor do ponteiro: %d\n", *p);

    return 0;
}
