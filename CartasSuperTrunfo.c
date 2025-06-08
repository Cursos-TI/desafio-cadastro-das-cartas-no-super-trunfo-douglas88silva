#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Carta 1
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int qtdPontosTuristicos1;

    // Carta 2
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int qtdPontosTuristicos2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // LEITURA DE DADOS CARTA 1
    printf("\n\n\n*****\tVamos iniciar o cadastro da primeira carta do Super Trunfo\t******\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta sendo a letra do estado seguida de um número de 01 a 04 (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &qtdPontosTuristicos1);


    // LEITURA DE DADOS CARTA 2
    printf("\n\n\n*****\tVamos iniciar o cadastro da segunda carta do Super Trunfo\t******\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta sendo a letra do estado seguida de um número de 01 a 04 (ex: A01): ");
    scanf(" %s", codigoCarta2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos na cidade: ");
    scanf(" %d", &qtdPontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // IMPRIMIR CARTA 1
    printf("\n Carta 1:");
    printf("\n Estado: %c", estado1);
    printf("\n Código: %s", codigoCarta1);
    printf("\n Nome da Cidade: %s", nomeCidade1);
    printf("\n População: %d", populacao1);
    printf("\n Área: %.2f", area1);
    printf("\n PIB: %.2f", pib1);
    printf("\n Número de Pontos Turísticos: %d", qtdPontosTuristicos1);
    printf("\n Densidade Populacional: %.2f", populacao1/area1);
    printf("\n PIB per Capita: %.2f", pib1/populacao1);

    printf("\n\n\n");
    
    // IMPRIMIR CARTA 2
    printf("\n Carta 2:");
    printf("\n Estado: %c", estado2);
    printf("\n Código: %s", codigoCarta2);
    printf("\n Nome da Cidade: %s", nomeCidade2);
    printf("\n População: %d", populacao2);
    printf("\n Área: %.2f", area2);
    printf("\n PIB: %.2f", pib2);
    printf("\n Número de Pontos Turísticos: %d", qtdPontosTuristicos2);
    printf("\n Densidade Populacional: %.2f", populacao2/area2);
    printf("\n PIB per Capita: %.2f \n", pib2/populacao2);
    
    return 0;
}
