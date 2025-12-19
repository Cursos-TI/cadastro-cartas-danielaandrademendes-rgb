#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    int opcao;
    printf("Bem vido ao jogo Super Trufo!\n");
    printf("escolha uma das seguites opcoes\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair\n");
    printf("Escolha a opcao\n");
    scanf("%d", &opcao);


  switch (opcao)
    {
    case 1:
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

  srand(time(0));
  populacao1= rand() % 100000 + 1; //número entre 1 100
  area1=  rand() % 100000 + 1; //número entre 1 100
  pib1= rand() % 100000 + 1; //número entre 1 100
  numero_de_pontos_turisticos1= rand() % 100 + 1; //número entre 1 100

  // entrada de dados da carta 1 :
  // carta 1
  printf("Digite as duas primeiras letras estado da carta 1; \n");  //o printf vai mostra em tela o texto. 
  scanf("%s", estado1);   //scanf receber o dado e guarda na variavel estado1.  
  printf("Digite o codigo da carta, a letra do estado seguida de numeros: \n"); 
  scanf("%s", codigo1);  
  printf("Digite o nome da cidade da carta 1: \n");  
  scanf("%s", cidade1);  
   /*printf("Digite o numero de habitantes da cidade da carta 1: \n");  
  scanf("%d", &populacao1);  
  printf("Digite a area da cidade em quilometros quadrados carta 1: \n"); 
  scanf("%f", &area1); 
  printf("Digite o produto interno bruto PIB da cidade da carta 1: \n"); 
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos da cidade da carta 1: \n"); 
  scanf("%d", &numero_de_pontos_turisticos1); */

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
  srand(time(0));
  populacao2= rand() % 100000 + 1; //número entre 1 100000
  area2=  rand() % 100000 + 1; //número entre 1 100000
  pib2= rand() % 100000 + 1; //número entre 1 100000
  numero_de_pontos_turisticos2= rand() % 100 + 1; //número entre 1 100
  // entrada de dados das carta 2:
  // carta 2
  printf("Digite as duas primeiras letras estado da carta 2; \n");   // EX: o printf vai mostra em tela o texto e o \n pular uma linha.
  scanf("%s", estado2);    // Ex: scanf receber o dado e guarda na variavel estado2.
  printf("Digite o codigo da carta, a letra do estado seguida de numeros: \n");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade da carta 2: \n");
  scanf("%s", cidade2);
  /*printf("Digite o numero de habitantes da cidade da carta 2: \n");
  scanf("%d", &populacao2);
  printf("Digite a area da cidade em quilometros quadrados da carta 2: \n");
  scanf("%f", &area2);
  printf("Digite o produto interno bruto PIB da cidade da carta 2: \n");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos da cidade da carta 2: \n");
  scanf("%d", &numero_de_pontos_turisticos2);  */
  
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
  printf("codigo: %s\n", codigo2);
  printf("cidade: %s\n", cidade2);
  printf("populacao: %d\n", populacao2);
  printf("area: %.2f\n", area2);
  printf("pib: %.2f\n", pib2);
  printf("numero de pontos turisticos: %d\n\n", numero_de_pontos_turisticos2);
  
  int resultado1, resultado2;
  char primeiroatributo, segundoatributo;

    //comparação dos resultados
    printf("Bem vido ao jogo!\n");
    printf("escolha o primeiro atirbuto para comparacao\n");
    printf("P. populacao\n");
    printf("A. area\n");
    printf("I. pib\n");
    printf("N. numero de pontos turisticos\n");
    printf("Escolha a comparacao\n");
    scanf(" %c", &primeiroatributo);
        
      switch (primeiroatributo){   //todo este codigo esta dentro do switch
      case 'P':
      case 'p':      
      printf("Voce escolheu a opcao: Populacao\n");
      resultado1= populacao1 > populacao2 ? 1 : 0;
      break;
      case 'A':
      case 'a':
      printf("Voce escolheu a opcao: Area\n");
      resultado1= area1 > area2 ? 1 : 0;
      break;
      case 'I':
      case 'i':
      printf("Voce escolheu a opcao: PIB\n");
      resultado1=  pib1 > pib2 ? 1 : 0;
      break;
      case 'N':
      case 'n':
      printf("Voce escolheu a opcao: recuo\n");
      resultado1= numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? 1 : 0;
      break;
      default:
      printf("opcao invalida");
      break;
      }
        printf("Bem vido ao jogo!\n\n");
        printf("escolha o segudo atirbuto\n");
        printf("P. populacao\n");
        printf("A. area\n");
        printf("I. pib\n");
        printf("N. numero de pontos turisticos\n");
        printf("Escolha a comparacao\n");
        scanf(" %c", &segundoatributo); 
           
          if (primeiroatributo == segundoatributo){
              printf("voce escolheu o mesmo atritudo\n");
              return 0;
              }switch (segundoatributo){
               case 'P':
               case 'p':
               printf("Voce escolheu a opcao: Populacao\n");
               resultado2= populacao1 > populacao2 ? 1 : 0;
               break;
               case 'A':
               case 'a':
               printf("Voce escolheu a opcao: Area\n");
               resultado2 = area1 > area2 ? 1 : 0;
               break;
               case 'I':
               case 'i':
               printf("Voce escolheu a opcao: PIB\n");
               resultado2 =  pib1 > pib2 ? 1 : 0;
               break;
               case 'N':
               case 'n':
               printf("Voce escolheu a opcao: recuo\n");
               resultado2 = numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? 1 : 0;
               break;
               default:
               printf("opcao invalida");
               break;
              }

        if (resultado1 && resultado2){  // se resultado1 == resultado2 a 1
         printf("Parabens, voce venceu\n");
        }else if (resultado1 || resultado2){ // 0 e 1 ou 1 e 0
         printf("Empatou");
        }else
         printf("infelismente voce perdeu\n"); //0 e 0
         break;








   /*
  float denci_popu1;
  float denci_popu2;

  denci_popu1 = populacao1 / area1;
  denci_popu2 = populacao2 / area2;
  
  float pib_popo1;
  float pib_popo2;

  pib_popo1 = pib1 / populacao1;
  pib_popo2 = pib2 / populacao2;

  printf("carta 1: cidade (%s) valor total do PIB pela quantidade de habitantes: %.2f\n", cidade1, pib_popo1);
  printf("carta 2: cidade (%s) valor total do PIB pela quantidade de habitantes: %.2f\n\n", cidade2, pib_popo2);


  printf("Dencidade populacional por metro quadrado carta 1: %.2f hab/km²\n", denci_popu1);
  printf("Dencidade populacional por metro quadrado carta 2: %.2f hab/km²\n\n", denci_popu2);

  printf("carta com o menor numero de habitantes vence a partida!\n");
  printf("%s (%s): %d habitantes\n", cidade1,estado1,populacao1);
  printf("%s (%s): %d habitantes\n", cidade2,estado2,populacao2);




  if (populacao1 > populacao2)
  {printf("carta 2 (%s) venceu!", cidade2);
    /* code */
  //}else
  //{printf("carta 1 (%s) venceu!", cidade1);
  //}
  


  
  case 2:
  printf("regras\n");
  printf("Neste jogo Super Trunfo de cidades, o jogador inicia a partida cadastrando duas cartas, cada uma representando uma cidade com atributos como população, área, PIB e número de pontos turísticos. Em seguida, o jogador deve escolher dois atributos diferentes para realizar a comparação entre as cartas. Em cada comparação, vence o atributo que possuir o maior valor. O resultado final da rodada é definido da seguinte forma: se a carta vencer nos dois atributos, o jogador ganha; se vencer em apenas um atributo, ocorre empate; e se perder nos dois atributos, o jogador perde a rodada. A escolha do mesmo atributo duas vezes ou de opções inválidas torna a jogada inválida.");
  break;
  case 3:
  printf("Saindo do jogo...\n");
  break;
  default:
  printf("opcao invalida\n");
  break;
    }
}
