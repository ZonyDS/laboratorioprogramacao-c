#include <string.h>
#include <stdio.h>
int main() {

char bemvindo[20] = "Bem-vindo, ";
char nome[20];
char curso[20];
char confirmacao[20];


printf("===== IDENTIFICACAO ACADEMICA =====\n");

printf("Digite o primeiro nome do estudante: \n");
scanf("%19s", nome);

printf("Digite o codigo do curso(CC ou SI): \n");
scanf("%19s", curso);


printf("===== RESULTADO =====\n");

strcpy(confirmacao, nome);

printf("Estudante: %s\n", confirmacao);
printf("Caracteres do nome: %zu\n", strlen(confirmacao));

if (strcasecmp(curso, "CC") == 0 ) {
    printf("Curso: Ciencia da Computacao.\n" ); }
else if (strcasecmp(curso, "SI") == 0 ) {
    printf("Curso: Sistemas da Informacao.\n");
}

strcat(bemvindo, nome);
printf("%s!\n", bemvindo);

 return 0;
}
