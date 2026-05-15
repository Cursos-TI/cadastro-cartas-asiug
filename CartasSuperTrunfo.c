

#include <stdio.h>
int main()
{
    //variaveis:
    char estado_1 = '\0';
    char estado_2 = '\0';
    
    char codigo_1[6] = "\0";
    char codigo_2[6] = "\0";

    char nome_da_cidade_1 [20] = "\0";
    char nome_da_cidade_2 [20] = "\0";

    int populacao_1 = 0;
    int populacao_2 = 0;

    float area_1 = 0;
    float area_2 = 0;

    float pib_1 = 0;
    float pib_2 = 0;

    int pontos_turisticos_1 = 0;
    int pontos_turisticos_2 = 0;


    // Começo programa super trunfo!
    //----------------Primeira Carta------------------

    printf ("Vamos começar o super trunfo! Começando pela primeira carta\nDigite a inicial do estado onde a cidade está localizada: ");
    scanf (" %c", &estado_1);

    printf ("\nDigite o codigo da carta, no seguinte modelo: Inicial do estado mais um numero de 01 a 04: ");
    scanf ("%s", codigo_1);

    printf ("\nDigite o nome da cidade(somente primeiro nome): ");
    scanf ("%s", nome_da_cidade_1);

    printf ("\nDigite a população da cidade: ");
    scanf ("%i", &populacao_1);

    printf ("\nDigite a área (em km², somente numeros) da cidade: ");
    scanf (" %f", &area_1);

    printf ("\nDigite o PIB da cidade: ");
    scanf (" %f", &pib_1);

    printf ("\nDigite o número de pontos turisticos da cidade: ");
    scanf ("%i", &pontos_turisticos_1);

    //-------------Segunda carta------------

    printf ("\nVamos para a segunda carta!\nDigite a inicial do estado onde a cidade está localizada: ");
    scanf (" %c", &estado_2);

    printf ("\nDigite o codigo da carta, no seguinte modelo: Inicial do estado mais um numero de 01 a 04: ");
    scanf ("%s", codigo_2);

    printf ("\nDigite o nome da cidade(somente primeiro nome): ");
    scanf ("%s", nome_da_cidade_2);

    printf ("\nDigite a população da cidade: ");
    scanf ("%i", &populacao_2);

    printf ("\nDigite a área (em km², somente numeros) da cidade: ");
    scanf (" %f", &area_2);

    printf ("\nDigite o PIB da cidade: ");
    scanf (" %f", &pib_2);

    printf ("\nDigite o número de pontos turísticos da cidade: ");
    scanf ("%i", &pontos_turisticos_2);


  //---------- apresentação das cartas------
  //----------Carta 1---------
  printf ("\n\nCarta 1");
  printf ("\nEstado: %c", estado_1);
  printf ("\nCodigo: %s", codigo_1);
  printf ("\nNome da Cidade: %s", nome_da_cidade_1);
  printf ("\nPopulação: %i", populacao_1);
  printf ("\nÁrea: %.2fkm²", area_1);
  printf ("\nPIB: %.2f bilhões de reais", pib_1);
  printf ("\nNúmero de pontos turísticos: %i", pontos_turisticos_1);

  //----------Carta 2---------
  printf ("\n\nCarta 2");
  printf ("\nEstado: %c", estado_2);
  printf ("\nCodigo: %s", codigo_2);
  printf ("\nNome da Cidade: %s", nome_da_cidade_2);
  printf ("\nPopulação: %i", populacao_2);
  printf ("\nÁrea: %.2fkm²", area_2);
  printf ("\nPIB: %.2f bilhões de reais", pib_2);
  printf ("\nNúmero de pontos turísticos: %i", pontos_turisticos_2);



    return 0;
}
