#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

 // Declaracao de variaveis individuais para duas cidades
    char codigo1[4] = "A01";
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    char codigo2[4] = "A02";
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    printf("Cadastro de Cidades\n\n");

    // Cadastro da primeira cidade
    printf("Cadastro da cidade %s\n", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Calculo das propriedades adicionais da primeira cidade
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + densidade1 + pib_per_capita1;

    // Cadastro da segunda cidade
    printf("Cadastro da cidade %s\n", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Calculo das propriedades adicionais da segunda cidade
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade2 + pib_per_capita2;

    // Exibicao das cidades cadastradas
    printf("\nLista de Cidades:\n");

    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f bilhoes/hab\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    printf("----------------------\n");

    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f bilhoes/hab\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    printf("----------------------\n");

    // Comparacao entre as cidades
    printf("\nComparacao entre as cidades:\n");
    printf("Densidade Populacional: %s vence!\n", (densidade1 < densidade2) ? codigo1 : codigo2);
    printf("Populacao: %s vence!\n", (populacao1 > populacao2) ? codigo1 : codigo2);
    printf("Area: %s vence!\n", (area1 > area2) ? codigo1 : codigo2);
    printf("PIB: %s vence!\n", (pib1 > pib2) ? codigo1 : codigo2);
    printf("Pontos turisticos: %s vence!\n", (pontos_turisticos1 > pontos_turisticos2) ? codigo1 : codigo2);
    printf("PIB per Capita: %s vence!\n", (pib_per_capita1 > pib_per_capita2) ? codigo1 : codigo2);
    printf("Super Poder: %s vence!\n", (super_poder1 > super_poder2) ? codigo1 : codigo2);

    return 0;
}
