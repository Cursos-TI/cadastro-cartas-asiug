#include <stdio.h>
int main()
{
    //variaveis:
    char estado_1, estado_2;

    char codigo_1[6],codigo_2[6];

    char nome_da_cidade_1 [20], nome_da_cidade_2 [20];
    
    unsigned long int populacao_1, populacao_2;
    
    float area_1, area_2;

    float pib_1, pib_2;

    int pontos_turisticos_1, pontos_turisticos_2;

    float densidade_1, densidade_2;

    float pib_p_capital_1, pib_p_capital_2;

    float superpoder1, superpoder2; // o super poder é a soma de todas as outras variaveis, menos a densidade que é negativa. 


    // **** entrada de dados ****
    //----------------Primeira Carta------------------

    printf ("Vamos começar o super trunfo! Começando pela primeira carta\nDigite a inicial do estado onde a cidade está localizada: ");
    scanf (" %c", &estado_1);

    printf ("\nDigite o codigo da carta, no seguinte modelo: Inicial do estado mais um numero de 01 a 04: ");
    scanf ("%s", codigo_1);

    printf ("\nDigite o nome da cidade(somente primeiro nome): ");
    scanf ("%s", nome_da_cidade_1);

    printf ("\nDigite a população da cidade: ");
    scanf ("%lu", &populacao_1);

    printf ("\nDigite a área (em km², somente numeros) da cidade: ");
    scanf (" %f", &area_1);

    printf ("\nDigite o PIB da cidade \n(Colocando os 3 primeiros digitos e os dois digitos apos o . exemplo: 699.28) agora digite:  ");
    scanf (" %f", &pib_1);

    printf ("\nDigite o número de pontos turisticos da cidade: ");
    scanf ("%i", &pontos_turisticos_1);

    // implementação da Densidade e PIB per capital

    densidade_1 = (float) populacao_1 / area_1;

    pib_p_capital_1 = (float) pib_1 / populacao_1;  

    // implementação do superpoder!

    densidade_1 = densidade_1 * -1;
    superpoder1 = (float) populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + densidade_1 + pib_p_capital_1;
    densidade_1 = densidade_1 * -1; 

    //-------------Segunda carta------------

    printf ("\nVamos para a segunda carta!\nDigite a inicial do estado onde a cidade está localizada: ");
    scanf (" %c", &estado_2);

    printf ("\nDigite o codigo da carta, no seguinte modelo: Inicial do estado mais um numero de 01 a 04: ");
    scanf ("%s", codigo_2);

    printf ("\nDigite o nome da cidade(somente primeiro nome): ");
    scanf ("%s", nome_da_cidade_2);

    printf ("\nDigite a população da cidade: ");
    scanf ("%lu", &populacao_2);

    printf ("\nDigite a área (em km², somente numeros) da cidade: ");
    scanf (" %f", &area_2);

    printf ("\nDigite o PIB da cidade \n(Colocando os 3 primeiros digitos e os dois digitos apos o . exemplo: 699.28) agora digite:  ");
    scanf (" %f", &pib_2);

    printf ("\nDigite o número de pontos turísticos da cidade: ");
    scanf ("%i", &pontos_turisticos_2);

    // implementação da Densidade e PIB per capital

    densidade_2 = (float) populacao_2 / area_2;

    pib_p_capital_2 = (float) pib_2 / populacao_2;

    // implementação do superpoder!

    densidade_2 = densidade_2 * -1;
    superpoder2 = (float) populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + densidade_2 + pib_p_capital_2;
    densidade_2 = densidade_2 * -1; 


//---------- apresentação das cartas------
//----------Carta 1---------
printf ("\n\nCarta 1");
printf ("\nEstado: %c", estado_1);
printf ("\nCodigo: %s", codigo_1);
printf ("\nNome da Cidade: %s", nome_da_cidade_1);
printf ("\nPopulação: %lu", populacao_1);
printf ("\nÁrea: %.2fkm²", area_1);
printf ("\nPIB: %.2f bilhões de reais", pib_1);
printf ("\nNúmero de pontos turísticos: %i", pontos_turisticos_1);
printf ("\nDensidade Populacional: %.2f hab/km²", densidade_1);
printf ("\nPIB per Capital: %.2f reais", pib_p_capital_1);

//----------Carta 2---------
printf ("\n\nCarta 2");
printf ("\nEstado: %c", estado_2);
printf ("\nCodigo: %s", codigo_2);
printf ("\nNome da Cidade: %s", nome_da_cidade_2);
printf ("\nPopulação: %lu", populacao_2);
printf ("\nÁrea: %.2fkm²", area_2);
printf ("\nPIB: %.2f bilhões de reais", pib_2);
printf ("\nNúmero de pontos turísticos: %i", pontos_turisticos_2);
printf ("\nDensidade Populacional: %.2f hab/km²", densidade_2);
printf ("\nPIB per Capital: %.2f reais", pib_p_capital_2);

// variaveis para o ganhador

int populacao = populacao_1 > populacao_2;
int area = area_1 > area_2;
int pib = pib_1 > pib_2;
int pontos_turisicos = pontos_turisticos_1 > pontos_turisticos_2;
int densidade = densidade_1 < densidade_2;
int pib_p_cap = pib_p_capital_1 > pib_p_capital_2;
int superpoder = superpoder1 > superpoder2;


// comparações de cartas, um adendo é a densidade populacional quem tiver o menor numero ganha.

printf ("\n\n************* comparação  *************\n\n");
printf ("\nSe carta 1 ganhar = 1 | Se carta 2 ganhar = 0\n");
printf ("\nPopulação carta: %i vencendora",populacao);
printf ("\nArea carta: %i vencendora",area);
printf ("\nPIB carta: %i vencendora",pib);
printf ("\nPontos Turisticos carta: %i vencendora",pontos_turisicos);
printf ("\nDensidade populacional carta: %i vencendora",densidade);
printf ("\nPib per capital carta %i vencendora",pib_p_cap);
printf ("\nSuper Poder carta: %i vencendora",superpoder);

//
    return 0;
}
