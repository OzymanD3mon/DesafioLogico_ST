#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

struct Carta cadastrarCarta() {
    struct Carta c;

    printf("\n=== Cadastro de Carta ===\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", c.estado);  // lê string com espaço
    printf("Digite o Código da Carta: ");
    scanf(" %[^\n]", c.codigo);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", c.cidade);
    printf("Digite a População: ");
    scanf("%d", &c.populacao);
    printf("Digite a Área (km²): ");
    scanf("%f", &c.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &c.pib);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &c.pontosTuristicos);

    return c;
}

void exibirCarta(struct Carta c) {
    printf("\n--- Carta ---\n");
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
}

int main() {
    struct Carta carta1, carta2;

    printf("Cadastro da Carta 1\n");
    carta1 = cadastrarCarta();

    printf("\nCadastro da Carta 2\n");
    carta2 = cadastrarCarta();

    // Exibir cartas cadastradas
    exibirCarta(carta1);
    exibirCarta(carta2);

    // Comparação por população
    printf("\n=== Comparação: População ===\n");
    if (carta1.populacao > carta2.populacao) {
        printf("%s venceu! (População maior)\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("%s venceu! (População maior)\n", carta2.cidade);
    } else {
        printf("Empate! As duas cidades têm a mesma população.\n");
    }

    return 0;
}
