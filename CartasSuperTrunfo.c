#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // variaveis de cadastro da primeira carta:
  printf("vomos cadratrar as suas cartas!\n");

  printf("carta 1\n");
  char estado1[5];
  char codigo1[10];
  char cidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int numero_de_pontos_turisticos1;

  //variaveis de cadastro da segunda carta:
  printf("carta 2\n");
  char estado2[5];
  char codigo2[10];
  char cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int numero_de_pontos_turisticos2;

  // entrada de dados das cartas 1 e 2:

  // carta 1
  printf("Digite as duas primeiras letras estado da carta 1; \n");
  scanf("%s", estado1);
  printf("Digite o codigo da carta, a letra do estado seguida de numeros 1: \n");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade da carta 1: \n");
  scanf("%s", cidade1);
  printf("Digite o numero de habitantes da cidade da carta 1: \n");
  scanf("%d", &populacao1);
  printf("Digite a area da cidade em quilometros quadrados carta 1: \n");
  scanf("%f", &area1);
  printf("Digite o produto interno bruto PIB da cidade da carta 1: \n");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos da cidade da carta 1: \n");
  scanf("%d", &numero_de_pontos_turisticos1);

  // carta 2
  printf("Digite as duas primeiras letras estado da carta 2; \n");
  scanf("%s", estado2);
  printf("Digite o codigo da carta, a letra do estado seguida de numeros 2: \n");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade da carta 2: \n");
  scanf("%s", cidade2);
  printf("Digite o numero de habitantes da cidade da carta 2: \n");
  scanf("%d", &populacao2);
  printf("Digite a area da cidade em quilometros quadrados da carta 2: \n");
  scanf("%f", &area2);
  printf("Digite o produto interno bruto PIB da cidade da carta 2: \n");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos da cidade da carta 2: \n");
  scanf("%d", &numero_de_pontos_turisticos2);

  // Área para exibição dos dados das cartas, saida dos dados de cada cartas:
  // carta 1
  printf("\ncarta 1\n");
  printf("estado: %s\n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("cidade: %s\n", cidade1);
  printf("populacao: %d\n", populacao1);
  printf("area: %.2f\n", area1);
  printf("pib: %.2f\n", pib1);
  printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos1);
  // carta 2
  printf("\ncarta 2\n");
  printf("estado: %s\n", estado2);
  printf("codigo: %s\n", codigo2);
  printf("cidade: %s\n", cidade2);
  printf("populacao: %d\n", populacao2);
  printf("area: %.2f\n", area2);
  printf("pib: %.2f\n", pib2);
  printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos2);
  return 0;
}
