#include <stdio.h>

// Função para limpar o buffer do teclado (caso precise)
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void nivel_novato() {
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    printf("Cadastro da Carta 1:\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\n--- Carta 1 (%s) ---\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n--- Carta 2 (%s) ---\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
}

void nivel_aventureiro() {
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    printf("Cadastro da Carta 1:\n");
    printf("Codigo: ");
    scanf("%3s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Codigo: ");
    scanf("%3s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    printf("\n--- Carta 1 (%s) ---\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);

    printf("\n--- Carta 2 (%s) ---\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);
}

void nivel_mestre() {
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("Cadastro da Carta 1:\n");
    printf("Codigo: ");
    scanf("%3s", codigo1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Codigo: ");
    scanf("%3s", codigo2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    printf("\n--- Comparacao ---\n");

    printf("Populacao: %d\n", (populacao1 > populacao2));
    printf("Area: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos turisticos: %d\n", (pontos1 > pontos2));
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2)); // menor vence
    printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: %d\n", (superPoder1 > superPoder2));
}

int main() {
    int opcao;

    printf("Escolha o nivel:\n");
    printf("1 - Novato\n");
    printf("2 - Aventureiro\n");
    printf("3 - Mestre\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            nivel_novato();
            break;
        case 2:
            nivel_aventureiro();
            break;
        case 3:
            nivel_mestre();
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}