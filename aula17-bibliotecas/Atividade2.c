#include <string.h>
#include <stdio.h>
int main() {

char descricao[20] = "Produto ";
char produto[20];
char categoria[20];
char confirmacao[20];


printf("===== CADASTRO DE PRODUTOS =====\n");

printf("Digite o nome do produto (Teclado ou Processador): \n");
scanf("%19s", produto);

printf("Digite o nome da categoria do produto(Hadware ou Periferico): \n");
scanf("%19s", categoria);


printf("===== RESUMO =====\n");

strcpy(confirmacao, produto);

printf("Produto: %s\n", confirmacao);
printf("Caracteres: %zu\n", strlen(confirmacao));

if (strcasecmp(produto, "TECLADO") == 0 ) {
    printf("Categoria: Periferico\n" ); }
else if (strcasecmp(produto, "PROCESSADOR") == 0 ) {
    printf("Categoria: Hardware\n");
}

strcat(descricao, produto);
printf("Cadastro Concluido" );

 return 0;
}
