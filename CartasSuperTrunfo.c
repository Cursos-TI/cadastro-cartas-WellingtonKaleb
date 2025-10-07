#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Declaração das variáveis para a primeira carta
    char estado[10], codigocarta[50], nomecidade[50];
    int populacao, pontosturisticos;
    float area, pib;

    // Declaração das variáveis para a segunda carta
    char estado2[10], codigocarta2[50], nomecidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;


  // Área para entrada de dados
  // Entrada de dados para a primeira carta
    printf("Carta 1: \n");
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigocarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade);
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    printf("Digite a area: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos);
    printf("\n");

    // Entrada de dados para a segunda carta
    printf("Carta 2: \n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos2);
    

  // Área para exibição dos dados da cidade
  // Exibição dos dados da primeira carta
    printf("\nCarta 1:");
    printf("\nEstado: %s", estado);
    printf("\nCodigo da Carta: %s", codigocarta);
    printf("\nNome da Cidade: %s", nomecidade);
    printf("\nPopulacao: %d", populacao);
    printf("\nArea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nPontos Turisticos: %d\n", pontosturisticos);

    // Exibição dos dados da segunda carta 
    printf("\nCarta 2:");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo da Carta: %s", codigocarta2);
    printf("\nNome da Cidade: %s", nomecidade2);
    printf("\nPopulacao: %d", populacao2);
    printf("\nArea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nPontos Turisticos: %d\n", pontosturisticos);

return 0;
} 
