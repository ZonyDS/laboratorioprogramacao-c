#include <string.h>
#include <stdio.h>
int main() {

char bemvindo[20] = "Bem-vindo, ";
char nome[20];
char perfil[20];
char confirmacao[20];


printf("===== CADASTRO DE USUARIO =====\n");

printf("Digite o seu nome completo: \n");
scanf("%19s", nome);

printf("Digite o nome do seu perfil(Admin ou Comum): \n");
scanf("%19s", perfil);


printf("===== Dados Cadastrados =====\n");

strcpy(confirmacao, nome);

printf("Nome: %s\n", confirmacao);
printf("Quantidade de caracteres: %zu\n", strlen(nome));

if (strcasecmp(perfil, "ADMIN") == 0 ) {
    printf("Perfil: administrador\n" ); }
else if (strcasecmp(perfil, "COMUM") == 0 ) {
    printf("Perfil: comum\n");
}

strcat(bemvindo, nome);
printf("Cadastro Realizado com sucesso!");

 return 0;
}
