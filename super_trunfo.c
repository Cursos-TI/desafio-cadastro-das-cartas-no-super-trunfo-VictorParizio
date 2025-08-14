#include <stdio.h>

int main()
{
  // Atributos da Carta 1
  char Estado1;
  char CodigoDaCarta1[4];
  char NomeDaCidade1[20];
  int Populacao1;
  float Area1;
  float PIB1;
  int NumeroDePontosTuristicos1;

  // Atributos da Carta 2
  char Estado2;
  char CodigoDaCarta2[4];
  char NomeDaCidade2[20];
  int Populacao2;
  float Area2;
  float PIB2;
  int NumeroDePontosTuristicos2;

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
  scanf("%d", &Populacao1);

  printf("Digite a Área da Cidade em quilômetros quadrados: \n");
  scanf("%f", &Area1);

  printf("Digite o Produto Interno Bruto da cidade: \n");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &NumeroDePontosTuristicos1);

  // Quebra de linha para facilitar a leitura no terminal
  printf("\n");

  // Exibição dos Dados das Cartas:
  // Ajuda na compreensão do fluxo da aplicação
  printf("Cadastro concluído com sucesso! \n");
  printf("\n");

  // Ficha da Carta 1
  printf("Carta 1: \n");
  printf("Estado: %c \n", Estado1);
  printf("Código: %s \n", CodigoDaCarta1);
  printf("Nome da Cidade: %s \n", NomeDaCidade1);
  printf("População: %i habitantes \n", Populacao1);
  printf("Área: %.2f km² \n", Area1);
  printf("PIB: %.2f bilhões de reais \n", PIB1);
  printf("Número de Pontos Turísticos: %i \n", NumeroDePontosTuristicos1);

  return 0;
}