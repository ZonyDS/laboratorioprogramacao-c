#include <stdio.h>

int main() {
    char palavra[100];
    int quantidade = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        quantidade++;
    }

    printf("%d\n", quantidade);

    return 0;
}