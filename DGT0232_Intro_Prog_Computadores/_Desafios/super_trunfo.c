/*
    Super Trunfo de Países - Cadastro de Cartas

    Este programa foi desenvolvido para o desafio da faculdade, cujo objetivo é praticar a leitura de dados do usuário,
    armazenamento em variáveis e exibição organizada das informações na tela.

    O sistema permite ao usuário cadastrar duas cartas do jogo Super Trunfo, cada uma representando uma cidade brasileira.
    Para cada carta, são solicitados: estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.

    Após o cadastro, o programa exibe os dados de cada carta de forma clara e organizada.

    Requisitos atendidos:
    - Leitura dos dados via teclado
    - Armazenamento em variáveis separadas
    - Exibição formatada das informações
    - Código simples, sem estruturas de repetição ou decisão

    Desenvolvido para fins didáticos.
*/

#include <stdio.h>

char estado1[2], idCarta1[4], cidade1[30], estado2[2], idCarta2[4], cidade2[30];
int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
float area1, PIB1, area2, PIB2;

int main() {
    //Saudação e introdução ao sistema
    printf("Olá, Bem-vindo ao Sistema de Cadastro de Cartas do Super Trunfo!\nVamos começar o cadastro da sua carta. \n");

    //Informações de Cadastro
    printf("\n<----- Instruções de Cadastro ----->\n");
    printf("1. Você deve cadastrar duas cartas!\n");
    printf("2. Para cada carta você deve informar o estado, cidade, população, área, PIB e pontos turísticos.\n");
    printf("3. Use apenas letras e números, sem espaços ou caracteres especiais.\n");
    printf("4. Para números decimais, use ponto (.) ao invés de vírgula (,).\n");
    printf("-------------------------------------\n");

    //Carta 1
    printf("\nDigite apenas a primeira letra do estado: ");
    scanf("%s", estado1);

    printf("\nAgora, vamos cadastrar o ID da carta.\n");
    printf("Importante! O ID deve conter exatamente 3 dígitos.\n");
    printf("O ID deve ser um número de 01 a 04.\n");
    printf("E deve começar com a letra do estado que você digitou anteriormente.\n");
    printf("Você digitou a letra: %s\n", estado1);
    printf("Digite o ID da carta (3 dígitos): ");
    scanf("%s", idCarta1);

    printf("\nÓtimo! Agora, digite o nome da cidade (sem usar espaços): ");
    scanf("%s", cidade1);

    printf("\nAgora, digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("\nAgora, digite a área da cidade (em km²), apenas números: ");
    scanf("%f", &area1);

    printf("\nAgora, digite o PIB da cidade (em bilhões), apenas números: ");
    scanf("%f", &PIB1);

    printf("\nPor fim, digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n<----- Cadastro da primeira carta concluído com sucesso! ----->\n");

    //Carta 2
    printf("\nDigite apenas a primeira letra do estado: ");
    scanf("%s", estado2);

    printf("\nAgora, vamos cadastrar o ID da carta.\n");
    printf("Importante! O ID deve conter exatamente 3 dígitos.\n");
    printf("O ID deve ser um número de 01 a 04.\n");
    printf("E deve começar com a letra do estado que você digitou anteriormente.\n");
    printf("Você digitou a letra: %s\n", estado2);
    printf("Digite o ID da carta (3 dígitos): ");
    scanf("%s", idCarta2);

    printf("\nÓtimo! Agora, digite o nome da cidade (sem usar espaços): ");
    scanf("%s", cidade2);

    printf("\nAgora, digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("\nAgora, digite a área da cidade (em km²), apenas números: ");
    scanf("%f", &area2);

    printf("\nAgora, digite o PIB da cidade (em bilhões), apenas números: ");
    scanf("%f", &PIB2);

    printf("\nPor fim, digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    
    printf("\n <----- Cadastro da segunda carta concluído com sucesso! ----->\n");

    //Exibição dos dados cadastrados
    printf("\nAqui estão os dados das suas cartas:\n");
    printf("<----- Carta 01 ----->\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", idCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);    
    printf("----------------------\n");

    printf("<----- Carta 02 ----->\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", idCarta2);
    printf("Nome da Cidade: %s\n", cidade2);     
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("----------------------\n");

    printf("Obrigado por usar o Sistema de Cadastro de Cartas do Super Trunfo! Até a próxima.\n");

    return 0;
}
