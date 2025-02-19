#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    //Declaração de Variáveis.
    int populacaoCidade, populacaoCidade2, pontosTuristicos, pontosTuristicos2;
    char codigoCidade[4], codigoCidade2[4], nomeCidade[20], nomeCidade2[20];
    char letraEstado, letraEstado2;
    float areaCidade, areaCidade2, pibCidade, pibCidade2;

    // Cadastro das Cartas - Carta 01
    printf("Digite a letra que representará o Estado(de A até H): \n");
    scanf("%c", &letraEstado);

    printf("Digite o código da cidade(Ex: A01,B02,C03): \n");
    scanf("%s", &codigoCidade);

    printf("Digite o nome da cidade(Sem espaços ou acentos): \n");
    scanf("%s", &nomeCidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacaoCidade);

    printf("Digite a área da cidade: \n");
    scanf("%f", &areaCidade);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibCidade);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos);


    // Cadastro das Cartas - Carta 02
    printf("\nDigite a letra que representará o Estado(de A até H): \n");
    scanf(" %c", &letraEstado2);

    printf("Digite o código da cidade(Ex: A01,B02,C03): \n");
    scanf("%s", &codigoCidade2);

    printf("Digite o nome da cidade(Sem espaços ou acentos): \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacaoCidade2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &areaCidade2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibCidade2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibição de Dados - Carta 01
    printf("\nEstado: %c\n", letraEstado);
    printf("Código: %s\n", codigoCidade);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacaoCidade);
    printf("Área: %f km²\n", areaCidade);
    printf("PIB: R$%f\n", pibCidade);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    // Exibição dos Dados - Carta 02
    printf("\nEstado: %c\n", letraEstado2);
    printf("Código: %s\n", codigoCidade2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacaoCidade2);
    printf("Área: %f km²\n", areaCidade2);
    printf("PIB: R$%f\n", pibCidade2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
