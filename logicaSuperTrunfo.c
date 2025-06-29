#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[30];
    char cidade[30];
    int codigo;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta carta1, carta2;
    int opcao;

    // Cadastro das cartas
    printf("Cadastro da Carta 1:\n");
    printf("Estado: "); scanf(" %[^\n]", carta1.estado);
    printf("Cidade: "); scanf(" %[^\n]", carta1.cidade);
    printf("Codigo: "); scanf("%d", &carta1.codigo);
    printf("Populacao: "); scanf("%d", &carta1.populacao);
    printf("Area: "); scanf("%f", &carta1.area);
    printf("PIB: "); scanf("%f", &carta1.pib);
    printf("Pontos Turisticos: "); scanf("%d", &carta1.pontosTuristicos);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: "); scanf(" %[^\n]", carta2.estado);
    printf("Cidade: "); scanf(" %[^\n]", carta2.cidade);
    printf("Codigo: "); scanf("%d", &carta2.codigo);
    printf("Populacao: "); scanf("%d", &carta2.populacao);
    printf("Area: "); scanf("%f", &carta2.area);
    printf("PIB: "); scanf("%f", &carta2.pib);
    printf("Pontos Turisticos: "); scanf("%d", &carta2.pontosTuristicos);

    // Menu interativo
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nResultado da Comparação:\n");

    switch(opcao) {
        case 1:
            if (carta1.populacao > carta2.populacao)
                printf("Carta vencedora: %s (%s) - Maior população\n", carta1.cidade, carta1.estado);
            else if (carta1.populacao < carta2.populacao)
                printf("Carta vencedora: %s (%s) - Maior população\n", carta2.cidade, carta2.estado);
            else {
                printf("Empate em Populacao! Comparando por pontos turisticos...\n");
                if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                    printf("Carta vencedora: %s (%s)\n", carta1.cidade, carta1.estado);
                else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                    printf("Carta vencedora: %s (%s)\n", carta2.cidade, carta2.estado);
                else
                    printf("Empate total!\n");
            }
            break;
        case 2:
            if (carta1.area > carta2.area)
                printf("Carta vencedora: %s (%s) - Maior área\n", carta1.cidade, carta1.estado);
            else if (carta1.area < carta2.area)
                printf("Carta vencedora: %s (%s) - Maior área\n", carta2.cidade, carta2.estado);
            else
                printf("Empate em área!\n");
            break;
        case 3:
            if (carta1.pib > carta2.pib)
                printf("Carta vencedora: %s (%s) - Maior PIB\n", carta1.cidade, carta1.estado);
            else if (carta1.pib < carta2.pib)
                printf("Carta vencedora: %s (%s) - Maior PIB\n", carta2.cidade, carta2.estado);
            else
                printf("Empate em PIB!\n");
            break;
        case 4:
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Carta vencedora: %s (%s) - Mais pontos turísticos\n", carta1.cidade, carta1.estado);
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                printf("Carta vencedora: %s (%s) - Mais pontos turísticos\n", carta2.cidade, carta2.estado);
            else
                printf("Empate em pontos turísticos!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
