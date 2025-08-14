#include <stdio.h>

// Define ponto único de mudança do valor da variável
#define MAX_CIDADE 50

int main()
{

  // Atributos da Carta 1
  char Estado1;
  char CodigoDaCarta1[4];
  char NomeDaCidade1[MAX_CIDADE];
  unsigned long int Populacao1;
  float Area1;
  float PIB1;
  int NumeroDePontosTuristicos1;
  float DensidadePopulacional1;
  float PibPerCapita1;

  // Atributos da Carta 2
  char Estado2;
  char CodigoDaCarta2[4];
  char NomeDaCidade2[MAX_CIDADE];
  unsigned long int Populacao2;
  float Area2;
  float PIB2;
  int NumeroDePontosTuristicos2;
  float DensidadePopulacional2;
  float PibPerCapita2;

  // Quebra de linha para facilitar a leitura no terminal
  printf("\n");

  // Cadastro das Cartas:
  printf("Bem-vindo(a) ao Cadastro de Cartas Super Trunfo\n");
  printf("A seguir digite os dados da Carta 1\n");

  printf("Digite a letra do Estado (A-H): \n");
  scanf(" %c", &Estado1);

  printf("Digite o Código da Carta (ex: A01): \n");
  scanf("%3s", CodigoDaCarta1);

  printf("Digite o Nome da Cidade: \n");
  scanf(" %[^\n]", NomeDaCidade1); // Permite ler nomes compostos
  // Lê todos os caracteres até o Enter, permitindo espaços no nome.
  // O espaço antes de % ignora lixo no buffer.

  printf("Digite o Número de Habitantes da cidade: \n");
  scanf("%lu", &Populacao1);

  printf("Digite a Área da Cidade em quilômetros quadrados: \n");
  scanf("%f", &Area1);

  printf("Digite o Produto Interno Bruto da cidade: \n");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &NumeroDePontosTuristicos1);

  // Quebra de linha para facilitar a leitura no terminal
  printf("\n");

  // Instruções para cadastro dos dados da Carta 2
  printf("A seguir digite os dados da Carta 2\n");

  printf("Digite a letra do Estado (A-H): \n");
  scanf(" %c", &Estado2);

  printf("Digite o Código da Carta (ex: A02): \n");
  scanf("%3s", CodigoDaCarta2);

  printf("Digite o Nome da Cidade: \n");
  scanf(" %[^\n]", NomeDaCidade2); // Permite ler nomes compostos
  // Lê todos os caracteres até o Enter, permitindo espaços no nome.
  // O espaço antes de % ignora lixo no buffer.

  printf("Digite o Número de Habitantes da cidade: \n");
  scanf("%lu", &Populacao2);

  printf("Digite a Área da Cidade em quilômetros quadrados: \n");
  scanf("%f", &Area2);

  printf("Digite o Produto Interno Bruto da cidade: \n");
  scanf("%f", &PIB2);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &NumeroDePontosTuristicos2);

  // Quebra de linha para facilitar a leitura no terminal
  printf("\n");

  // Densidade populacional: população dividida pela área (habitantes por km²)
  DensidadePopulacional1 = (float)Populacao1 / Area1;
  DensidadePopulacional2 = (float)Populacao2 / Area2;

  // PIB per Capita: PIB da cidade dividido pela sua população.
  // (PIB * 1e9) Converte de PIB "em bilhões" para o número por extenso.
  PibPerCapita1 = (PIB1 * 1e9) / Populacao1;
  PibPerCapita2 = (PIB2 * 1e9) / Populacao2;

  // Exibição dos Dados das Cartas:
  // Ajuda na compreensão do fluxo da aplicação
  printf("Cadastro concluído com sucesso! \n");
  printf("\n");

  // Ficha da Carta 1
  printf("Carta 1: \n");
  printf("Estado: %c \n", Estado1);
  printf("Código: %s \n", CodigoDaCarta1);
  printf("Nome da Cidade: %s \n", NomeDaCidade1);
  printf("População: %lu habitantes \n", Populacao1);
  printf("Área: %.2f km² \n", Area1);
  printf("PIB: %.2f bilhões de reais \n", PIB1);
  printf("Número de Pontos Turísticos: %i \n", NumeroDePontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional1);
  printf("PIB per Capita: %.2f reais \n", PibPerCapita1);

  // Quebra de linha para facilitar a leitura no terminal
  printf("\n");

  // Ficha da Carta 2
  printf("Carta 2: \n");
  printf("Estado: %c \n", Estado2);
  printf("Código: %s \n", CodigoDaCarta2);
  printf("Nome da Cidade: %s \n", NomeDaCidade2);
  printf("População: %lu habitantes \n", Populacao2);
  printf("Área: %.2f km² \n", Area2);
  printf("PIB: %.2f bilhões de reais \n", PIB2);
  printf("Número de Pontos Turísticos: %i \n", NumeroDePontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional2);
  printf("PIB per Capita: %.2f reais \n", PibPerCapita2);

  return 0;
}