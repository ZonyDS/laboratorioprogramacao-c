#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int vetor[5]= {10, 20, 30, 40, 50};
    int *p = vetor;

    printf("Usando FOR: \n");
    for (int i=0 ; i < 5 ; i++) {
        printf("%d\n", *(p + i));
    }
// sem for.

    printf("Primeiro valor do vetor: %d\n", *p);
    printf("Segundo valor do vetor: %d\n", *(p + 1));
    printf("Terceiro valor do vetor: %d\n", *(p + 2));
    printf("Quarto valor do vetor: %d\n", *(p + 3));
    printf("Quinto valor do vetor: %d\n", *(p + 4));

    return 0;
}
