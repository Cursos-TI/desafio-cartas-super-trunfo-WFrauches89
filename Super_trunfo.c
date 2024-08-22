#include <stdio.h>

int main()
{
    //declaração das variáveis
    char estado;
    char codigoDaCarta[3];
    char nomeDaCidade[80];
    int populacao;
    float areaKmSquare;
    double pib;
    int numeroPontosTuristicos;


    //Interação com usuário
    printf("Digite o Estado de A - H:\n");
    scanf(" %c", &estado);

    printf("Digite o código da carta sendo as possibilidades 01 02 03 ou 04.\n");
    scanf(" %3s", &codigoDaCarta);

    printf("Digite o nome da cidade:\n");
    //Utilizei %[^\n] pois estava encontrando erro quando inseria uma cidade com espaço - ex: Nova Friburgo - Assim pega até que seja chamada próxima linha.
    scanf(" %[^\n]", &nomeDaCidade);

    printf("Digite número da população desta cidade:\n");
    scanf(" %d", &populacao);

    printf("Digite a área em Km² da cidade:\n");
    scanf(" %f", &areaKmSquare);

    printf("Qual o PIB da cidade?\n");
    scanf(" %lf", &pib);

    printf("Quantos pontos turísticos tem na cidade?\n");
    scanf(" %d", &numeroPontosTuristicos);

    printf("Estado: %c\n", estado);
    printf("Código da Carta: %c%s\n", estado, codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", areaKmSquare);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);

    return 0;
}
