#include <stdio.h>
#include <string.h>

// FEITO POR: Anthony Dias Soares E Arthur Teixeira Gavassa

//calcula pontos de risco do paciente
int calcularPontuacao(float fatores[13]) {
    int pontos = 0;

//fatores criticos / 3 pontos

    if (fatores[0] >= 65) pontos += 3; // Idade
    if (fatores [1] >= 165) pontos += 3; // Pressão arterial sistólica
    if (fatores [2] == 1) pontos += 3; // Tabagismo

//Fatores Moderados / 2 pontos

    if (fatores [3] == 1) pontos += 2; //Diabetes
    if (fatores [4] == 1) pontos += 2; //Doença cardíaca anterior
    if (fatores [5] >= 160) pontos += 2; // Colesterol LDL

    float imc = fatores[6] / (fatores[7] * fatores[7]);
    if (imc >= 30) pontos += 2; // IMC

//Fatores Leves / 1 pontos

    if (fatores[8] == 1) pontos += 1; // Sedentarismo
    if (fatores [9] == 1) pontos += 1; // Alimentacao rica em ultraprocessados
    if (fatores[10] == 1) pontos += 1; // Estresse crônico elevado
    if (fatores[11] == 1) pontos += 1; // Sono inadequado
    if (fatores[12] == 1) pontos += 1; // Sexo biologico masculino

    return pontos;
    }

void classificarRisco(int pontuacao, char classificacao[50]) {

    if (pontuacao >= 0 && pontuacao <= 4) {
        strcpy(classificacao, "Menor de 10%");
    } else if (pontuacao >= 5 && pontuacao <= 9) {
        strcpy (classificacao, "Entre 10% e 20%");
    } else if (pontuacao >= 10 && pontuacao <= 14) {
        strcpy (classificacao, "Entre 20% e 30%");
    } else if (pontuacao >= 15 && pontuacao <= 18) {
        strcpy (classificacao, "Entre 30% e 50%");
    } else {
        strcpy(classificacao, "Acima de 50%");
    }
}

void apresentarResultados(int qtd, char nomes[][50], float dados[][13]) {

    printf("\n===========================\n");
    printf("SISTEMA DE ANALISE DE RISCO\n");
    printf("===========================\n\n");

    printf("Quantidade de pacientes: %d\n\n", qtd);

    for (int i = 0; i < qtd; i++){
        printf("Paciente %d: %s\n", i + i, nomes[i]);
    }

    printf("\n===========================\n");
    printf("RELATORIO DE RISCO\n");
    printf("===========================\n\n");

    for (int i = 0; i <qtd; i++) {
        int pontuacao = calcularPontuacao(dados[i]);
        char classificacao[50];
        classificarRisco(pontuacao, classificacao);

        printf("Paciente: %s\n", nomes[i]);
        printf("Classificacao: %s\n\n", classificacao);
    }

    printf("===========================");
}

int main() {
    int qtdPacientes;
    char nomes[5][50];

    // matriz numerica para os fatoes de risco (13 fatores por paciente)
    // 0:idade, 1:pressao, 2:tabagismo, 3:diabetes, 4:historico, 5:colesterol,
    // 6:peso, 7:altura, 8:sedentarismo, 9:ultraprocessados, 10:estresse, 11:sono, 12:sexo biologico

    float dados[5][13];

    printf("Quantos pacientes deseja cadastrar? (1 a 5): ");
    scanf("%d", &qtdPacientes);

    if (qtdPacientes < 1) qtdPacientes = 1;
    if (qtdPacientes > 5) qtdPacientes = 5;

    for (int i = 0; i < qtdPacientes; i++) {
        printf("\n--- Cadastro de Paciente %d ---\n", i + 1);
        printf("Nome do paciente: ");
        scanf(" %[^\n]", nomes[i]);

        printf("idade: ");
        scanf("%f", &dados[i][0]);
        printf("Pressao arterial sistólica(mmHg): ");
        scanf("%f", &dados[i][1]);
        printf("Tabagismo (1 - Sim / 0 - Nao): ");
        scanf("%f", &dados[i][2]);
        printf("Diabetes (1 - Sim / 0 - Nao): ");
        scanf("%f", &dados[i][3]);
        printf("Histórico com doença cardíaca (1 - Sim / 0 - Não): ");
        scanf("%f", &dados[i][4]);
        printf("Colesterol LDL (mg/dL): ");
        scanf("%f", &dados[i][5]);
        printf("Peso (kg): ");
        scanf("%f", &dados[i][6]);
        printf("Altura(m): ");
        scanf("%f", &dados[i][7]);
        printf("Sedentarismo (1 - Sim / 0 - Não): ");
        scanf("%f", &dados[i][8]);
        printf("Alimentacao rica em ultraprocessados (1 - Sim / 0 - Não): ");
        scanf("%f", &dados[i][9]);
        printf("Estresse crônico elevado (1 - Sim / 0 - Não): ");
        scanf("%f", &dados[i][10]);
        printf("Sono inadequado (1 - Sim / 0 - Não): ");
        scanf("%f", &dados[i][11]);
        printf("Sexo Biológico masculino (1 - Sim / 0 - Não): ");
        scanf("%f", &dados[i][12]);
    }
        apresentarResultados(qtdPacientes, nomes, dados);
}
