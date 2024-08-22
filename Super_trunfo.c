#include <stdio.h>

int main()
{
    // declaração das variáveis
    char estadoA;
    char codigoDaCartaA[3];
    char nomeDaCidadeA[80];
    int populacaoA;
    float areaKmSquareA;
    float pibA;
    int numeroPontosTuristicosA;

    // Interação com usuário Estado A - MESTRE
    printf("\n*************Primeiro estado do Super Trunfo*************\n");

    printf("Digite o Estado de A - H:\n");
    scanf(" %c", &estadoA);

    printf("Digite o código da carta sendo as possibilidades 01 02 03 ou 04.\n");
    scanf(" %3s", &codigoDaCartaA);

    printf("Digite o nome da cidade:\n");
    // Utilizei %[^\n] pois estava encontrando erro quando inseria uma cidade com espaço - ex: Nova Friburgo - Assim pega até que seja chamada próxima linha.
    scanf(" %[^\n]", &nomeDaCidadeA);

    printf("Digite número da população desta cidade:\n");
    scanf(" %d", &populacaoA);

    printf("Digite a área em Km² da cidade:\n");
    scanf(" %f", &areaKmSquareA);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pibA);

    printf("Quantos pontos turísticos tem na cidade?\n");
    scanf(" %d", &numeroPontosTuristicosA);

    // Aventureiro   Densidade populacional (float) - população dividida pela área da cidade. PIB per capita (float) -  PIB total da cidade dividido pela população
    float densidadeA = populacaoA / areaKmSquareA;
    float pibPerCapitaA = pibA / populacaoA;
    double superPoderA = populacaoA + areaKmSquareA + pibA + pibPerCapitaA + (1.0 / densidadeA) + numeroPontosTuristicosA;

    // declaração das variáveis
    char estadoB;
    char codigoDaCartaB[3];
    char nomeDaCidadeB[80];
    int populacaoB;
    float areaKmSquareB;
    float pibB;
    int numeroPontosTuristicosB;

    // Interação com usuário Estado B - MESTRE
    printf("\n*************Segundo estado do Super Trunfo*************\n");

    printf("Digite o Estado de A - H:\n");
    scanf(" %c", &estadoB);

    printf("Digite o código da carta sendo as possibilidades 01 02 03 ou 04.\n");
    scanf(" %3s", &codigoDaCartaB);

    printf("Digite o nome da cidade:\n");
    // Utilizei %[^\n] pois estava encontrando erro quando inseria uma cidade com espaço - ex: Nova Friburgo - Assim pega até que seja chamada próxima linha.
    scanf(" %[^\n]", &nomeDaCidadeB);

    printf("Digite número da população desta cidade:\n");
    scanf(" %d", &populacaoB);

    printf("Digite a área em Km² da cidade:\n");
    scanf(" %f", &areaKmSquareB);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pibB);

    printf("Quantos pontos turísticos tem na cidade?\n");
    scanf(" %d", &numeroPontosTuristicosB);

    // Aventureiro   Densidade populacional (float) - população dividida pela área da cidade. PIB per capita (float) -  PIB total da cidade dividido pela população
    float densidadeB = populacaoB / areaKmSquareB;
    float pibPerCapitaB = pibB / populacaoB;
    double superPoderB = populacaoB + areaKmSquareB + pibB + pibPerCapitaB + (1.0 / densidadeB) + numeroPontosTuristicosB;

    // Comparar as duas cartas
    printf("\n*******Comparando as cartas...*******\n");

    printf("População carta %c%s: %d x População %c%s: %d - Resultado: %d\n", estadoA, codigoDaCartaA, populacaoA, estadoB, codigoDaCartaB, populacaoB, (populacaoA > populacaoB));
    printf("Área carta %c%s: %.2f Km² x Área carta %c%s: %.2f Km² - Resultado: %d\n", estadoA, codigoDaCartaA, areaKmSquareA, estadoB, codigoDaCartaB, areaKmSquareB, areaKmSquareA > areaKmSquareB);
    printf("PIB carta %c%s: %.2f bilhões x PIB carta %c%s: %.2f bilhões - Resultado: %d\n", estadoA, codigoDaCartaA, pibA, estadoB, codigoDaCartaB, pibB, pibA > pibB);
    printf("PIB per capita carta %c%s: %.2f x PIB per capita carta %c%s: %.2f - Resultado: %d\n", estadoA, codigoDaCartaA, pibPerCapitaA, estadoB, codigoDaCartaB, pibPerCapitaB, pibPerCapitaA > pibPerCapitaB);
    printf("Densidade populacional carta %c%s: %.2f x Densidade populacional carta %c%s: %.2f - Resultado: %d\n", estadoA, codigoDaCartaA, densidadeA, estadoB, codigoDaCartaB, densidadeB, densidadeA < densidadeB);
    printf("Número de Pontos Turísticos carta %c%s: %d x Número de Pontos Turísticos carta %c%s: %d - Resultado: %d\n", estadoA, codigoDaCartaA, numeroPontosTuristicosA, estadoB, codigoDaCartaB, numeroPontosTuristicosB, numeroPontosTuristicosA > numeroPontosTuristicosB);
    printf("Super Poder carta %c%s: %.2f x Super Poder carta %c%s: %.2f - Resultado: %d\n", estadoA, codigoDaCartaA, superPoderA, estadoB, codigoDaCartaB, superPoderB, superPoderA > superPoderB);

    /*
        Novato + Aventureiro
    */
    printf("\n*******Carta 01*******\n");
    printf("Estado: %c\n", estadoA);
    printf("Código da Carta: %c%s\n", estadoA, codigoDaCartaA);
    printf("Nome da Cidade: %s\n", nomeDaCidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f Km²\n", areaKmSquareA);
    printf("Densidade populacional: %.2f\n", densidadeA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("PIB per capita: %.2f\n", pibPerCapitaA);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosA);
    printf("Super Poder: %.2f\n", superPoderA);

    printf("\n*******Carta 02*******\n");
    printf("Estado: %c\n", estadoB);
    printf("Código da Carta: %c%s\n", estadoB, codigoDaCartaB);
    printf("Nome da Cidade: %s\n", nomeDaCidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f Km²\n", areaKmSquareB);
    printf("Densidade populacional: %.2f\n", densidadeB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("PIB per capita: %.2f\n", pibPerCapitaB);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosB);
    printf("Super Poder: %.2f\n", superPoderB);

        return 0;
}
