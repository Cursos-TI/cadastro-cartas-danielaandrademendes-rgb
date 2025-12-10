#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  //esta primeira parde do código é para definição das variáveis para armazenar as dados das cidades.
  //as funcões servem para dizer qual tipo de variavel esta sendo armazernadas.
  // variavel é uma caixa para armazernar dados, valores ou textos.

  // variaveis de cadastro da primeira carta:

  printf("vomos cadratrar as suas cartas!\n"); //printf é a funções de mostrar em tela
  printf("carta 1\n");    
  char estado1[5];  // funcão char= quer dizer que a variavel é um string,"texto"
  char codigo1[10];
  char cidade1[20];
  int populacao1;   //funcão int= quer dizer que a variavel é uma número inteiro
  float area1;   //função float= quer dizer que esta variavel é de número decimal
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
  
  // sugunda parte o código: entrada de dados pela função scanf atravez o teclado.

  /*
  as funções prinf nesta parte do código serve par intruir quais informações o usuario deve colocar para ser armazernados nas variaveis. 
  o printf vai mostra em tela o texto.
  o scanf vai receber a infomação dada pelo usuário, guardará nas variaveis. 
  % percentual o tipo de variavel que esta sendo armazenada.
  "&"comecial e para o intereço da variavel numérica.
  \n pular linha
  %s indica que é uma "string"
  %d número inteiro
  %f número decimal
  */

  // entrada de dados das cartas 1 e 2:

  // carta 1
  printf("Digite as duas primeiras letras estado da carta 1; \n");  //o printf vai mostra em tela o texto. 
  scanf("%s", estado1);   //scanf receber o dado e guarda na variavel estado1.  
  printf("Digite o codigo da carta, a letra do estado seguida de numeros: \n"); 
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

  // mesma coisa para carta 2

  // carta 2
  printf("Digite as duas primeiras letras estado da carta 2; \n");   // EX: o printf vai mostra em tela o texto e o \n pular uma linha.
  scanf("%s", estado2);    // Ex: scanf receber o dado e guarda na variavel estado2.
  printf("Digite o codigo da carta, a letra do estado seguida de numeros: \n");
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
  
  //na terceira parte do código: esta parta do código fonte, vamos imprimir as informações dadas pelo usuário salvas nas variaveis.
  //o printf nesta parte do código vai mostrar o texto em tela e o dado que fio armazenado na varial.

  // Área para exibição dos dados das cartas, saida dos dados de cada cartas:

  // carta 1
  printf("\ncarta 1\n");
  printf("estado: %s\n", estado1); // EX: printf("mostrar em tela string, % o tipo de variavel que foi armazernado", declarar qual a variavel); 
  printf("codigo: %s\n", codigo1);
  printf("cidade: %s\n", cidade1);
  printf("populacao: %d\n", populacao1);
  printf("area: %.2f\n", area1);
  printf("pib: %.2f\n", pib1);
  printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos1);

  // carta 2
  printf("\ncarta 2\n");
  printf("estado: %s\n", estado2); // EX: printf("mostrar em tela string, % o tipo de variavel que foi armazernado", declarar qual a variavel);
  printf("estado: %s\n", estado2); 
  printf("codigo: %s\n", codigo2);
  printf("cidade: %s\n", cidade2);
  printf("populacao: %d\n", populacao2);
  printf("area: %.2f\n", area2);
  printf("pib: %.2f\n", pib2);
  printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos2);
  return 0;
}
