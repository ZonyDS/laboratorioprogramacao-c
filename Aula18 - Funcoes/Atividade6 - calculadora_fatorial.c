#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;

    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main() {
    int numero, resultado;

    printf("===== CALCULADORA FATORIAL =====\n");
	
    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero >= 0 && numero <= 12) {
        resultado = calcularFatorial(numero);

        printf("O fatorial de %d e: %d\n", numero, resultado);
    } else {
        printf("Numero invalido! Digite um numero entre 0 e 12.\n");
    }

    return 0;
}
