#include <stdio.h>

struct Carta {
    char estado;            // Letra de 'A' a 'H'
    char codigo[4];         // Ex: A01, B03
    char nomePais[50];      // Nome do país
    int populacao;
    float area;
    float pib;
};

int main() {
    struct Carta carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da carta (Ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome do país: ");
    scanf(" %[^\n]", carta1.nomePais);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("\nCadastro da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da carta (Ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome do país: ");
    scanf(" %[^\n]", carta2.nomePais);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    // Exibe os dados
    printf("\nCarta 1: %s (%s) - População: %d, Área: %.2f km², PIB: %.2f bilhões\n",
           carta1.nomePais, carta1.codigo, carta1.populacao, carta1.area, carta1.pib);

    printf("Carta 2: %s (%s) - População: %d, Área: %.2f km², PIB: %.2f bilhões\n",
           carta2.nomePais, carta2.codigo, carta2.populacao, carta2.area, carta2.pib);

    return 0;
}