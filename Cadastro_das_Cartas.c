#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[2];
  char estado2[2];
  char codigo_carta1[2];
  char codigo_carta2[2];
  char codigo_completo1[4];
  char codigo_completo2[4];
  char nome_cidade1[50];
  char nome_cidade2[50];
  unsigned long int populacao1;
  unsigned long int populacao2;
  float area1;
  float area2;
  float pib1;
  float pib2;
  int numero_pontos_turisticos1;
  int numero_pontos_turisticos2;
  float densidade_populacional1;
  float densidade_populacional2;
  float pib_per_capita1;
  float pib_per_capita2;
  int resultado1; int resultado2; int resultado3; int resultado4; int resultado5; int resultado6; int resultado7;
  float superpoder1;
  float superpoder2;

  // Área para entrada de dados 
  // entrada de dados da carta #1


      printf("Digite o estado da carta 1 ('A' a 'H'):\n");
      scanf("%s", estado1); // lê o estado da carta #1 

      printf("Digite o código da carta 1 (entre 01 e 04):\n");
      scanf("%s", codigo_carta1); // lê o código da carta #1
        sprintf(codigo_completo1, "%s%s", estado1, codigo_carta1); // concatena o estado e o código da carta #1 

      printf("Digite o nome da cidade:\n");
      fgets(nome_cidade1, 50, stdin); // lê o nome da cidade #1
      nome_cidade1[strcspn(nome_cidade1, "\n")] = 0; // remove o caractere de nova linha
      gets(nome_cidade1);

      printf("Digite a população da cidade:\n");
      scanf("%lu", &populacao1); // lê a população da cidade #1

      printf("Digite a área da cidade (em km²) *somente números*\n");
      scanf("%f", &area1); // lê a área da cidade #1
      
      printf("Digite o PIB da cidade (em bilhões de reais) *somente números*\n");
      scanf("%f", &pib1); // lê o PIB da cidade #1

      printf("Digite o número de pontos turísticos da cidade:\n");
      scanf("%d", &numero_pontos_turisticos1); // lê o número de pontos turísticos da cidade #1

      printf("\n\n\n");
      
      
      // 
      // entrada de dados da carta #2
        printf("Digite o estado da carta 2 ('A' a 'H'):\n");
        scanf("%s", estado2); // lê o estado da carta #2

        printf("Digite o código da carta 2 (entre 01 e 04):\n");
        scanf("%s", codigo_carta2); // lê o código da carta #2
          sprintf(codigo_completo2, "%s%s", estado2, codigo_carta2); // Concatena o estado e o código da carta #2

        printf("Digite o nome da cidade da carta 2:\n");
        fgets(nome_cidade2, 50, stdin); // lê o nome da cidade da carta #2
        nome_cidade2[strcspn(nome_cidade2,"\n")] = 0; // remove o caractere de nova linha
        gets(nome_cidade2);

        printf("Digite a população da cidade da carta 2:\n");
        scanf("%lu", &populacao2); // lê a população da cidade da carta #2

        printf("Digite a área da cidade da carta 2 (em km²) *somente números*\n");
        scanf("%f", &area2); // lê a área da cidade da carta #2

        printf("Digite o PIB da cidade da carta 2 (em bilhões de reais) *somente números*\n");
        scanf("%f", &pib2); // lê o PIB da cidade da carta #2

        printf("Digite o número de pontos turísticos da cidade da carta 2:\n");
        scanf("%d", &numero_pontos_turisticos2); // lê o número de pontos turísticos da cidade da carta 2



          // espaço para cálculo da densidade populacional e pib per capita da cidade da carta #1
          densidade_populacional1 = (float)populacao1 / area1; 
          pib_per_capita1 = pib1 * (1000000000) / (float)populacao1;

          // espaço para cálculo da densidade populaiconal e pib per capita da cidade da carta #2
          densidade_populacional2 = (float)populacao2 / area2;
          pib_per_capita2 = pib2 * (1000000000) / (float)populacao2;



  // Área para exibição dos dados da cidade
// exibição dos dados da carta #1

printf("\n-- Carta 1 --\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %lu habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidadde Populacional: %.2f hab\n"
        "PIB per Capita: %.2f reais\n",
        estado1, codigo_completo1, nome_cidade1, populacao1, area1, pib1, numero_pontos_turisticos1, densidade_populacional1, pib_per_capita1);

// exibição dos dados da carta #2 

printf("\n\n\n-- Carta 2 --\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %lu habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab\n"
        "PIB per Capita: %.2f reais\n",
      estado2, codigo_completo2, nome_cidade2, populacao2, area2, pib2, numero_pontos_turisticos2, densidade_populacional2, pib_per_capita2);


// cálculo do tributo 'SUPER PODER' das cartas 
      superpoder1 = (float)populacao1 + area1 + pib1 + (float)numero_pontos_turisticos1 + pib_per_capita1 - densidade_populacional1;
      superpoder2 = (float)populacao2 + area2 + pib2 + (float)numero_pontos_turisticos2 + pib_per_capita2 - densidade_populacional2;


      // comparação das cartas
      resultado1 = populacao1 > populacao2; // compara população entre as cartas
      resultado2 = area1 > area2; // compara área entre as cartas
      resultado3 = pib1 > pib2; // compara o PIB entre as cartas
      resultado4 = numero_pontos_turisticos1 > numero_pontos_turisticos2; // compara o número de pontos turísticos entre as cartas
      resultado5 = pib_per_capita1 > pib_per_capita2; // compara o PIB per Capita entre as cartas
      resultado6 = densidade_populacional1 < densidade_populacional2; // compara a densidade pop. entre as cartas (o menor ganhar)
      resultado7 = superpoder1 > superpoder2; // compara o super poder entre as cartas


// exibição da comparação entre as cartas para definir o vencedor 
          printf("\n\n\n--- Comparação das Cartas---\n"
          "População: %d\n"
          "Área: %d\n"
          "PIB: %d\n"
          "Número de Pontos Turísticos: %d\n"
          "PIB per Capita: %d\n"
          "Densidade Populacional: %d\n"
          "Super Poder: %d\n", resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7);


return 0;
} 
