#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[3], estado2[3], codigo1[3], codigo2[3], cidade1[20], cidade2[20];
  int populacao1, populacao2, pontosT1, pontosT2;
  float area1, area2, pib1, pib2;

  // Área para entrada de dados
  printf("Digite a letra do Primeiro Estado: \n");
  scanf("%s", &estado1);

  printf("Digite o código da Primeira Cidade: \n");
  scanf("%s", &codigo1);

  printf("Digite o nome da Primeira Cidade: \n"):
  scanf("%s", &cidade1);

  printf("Digite o numero de habitantes da Primeira Cidade: \n");
  scanf("%d", &populacao1);
  
  printf("Digite a area em metros quadradado da Primeira Cidade: \n");
  scanf("%d", &area1);

  printf("Digite o PIB da Primeira Cidade: \n");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos da Primeira Cidade: \n");
  scanf("%d", &pontosT1);

  printf("Digite a letra do Primeiro Estado: \n");
  scanf("%s", &estado2);

  printf("Digite o código da Primeira Cidade: \n");
  scanf("%s", &codigo2);

  printf("Digite o nome da Primeira Cidade: \n"):
  scanf("%s", &cidade2);

  printf("Digite o numero de habitantes da Primeira Cidade: \n");
  scanf("%d", &populacao2);
  
  printf("Digite a area em metros quadradado da Primeira Cidade: \n");
  scanf("%d", &area2);

  printf("Digite o PIB da Primeira Cidade: \n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos da Primeira Cidade: \n");
  scanf("%d", &pontosT2);

  // Área para exibição dos dados da cidade

  printf("Carta 1: \n");
  printf("Estado: %s \n", estado1);
  printf("Codigo: %s%s \n", estado1, codigo1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("Populacao: %d \n", populacao1);
  printf("Area: %.2f km \n", area1);
  printf("PIB: %.2f bilhoes de reais \n", pib1);
  printf("Numero de Pontos Turisticos: %d \n", pontosT1);

  printf("Carta 2: \n");
  printf("Estado: %s \n", estado2);
  printf("Codigo: %s%s \n", estado2, codigo2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("Populacao: %d \n", populacao2);
  printf("Area: %.2f km \n", area2);
  printf("PIB: %.2f bilhoes de reais \n", pib2);
  printf("Numero de Pontos Turisticos: %d \n", pontosT2);

return 0;
} 
