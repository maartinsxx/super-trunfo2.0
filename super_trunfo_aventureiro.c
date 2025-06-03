#include <stdio.h>
#include <string.h>

// Estrutura da carta do Super Trunfo
typedef struct {
    char nome[50];            // Nome do país
    int populacao;            // População
    float area;               // Área em km²
    float pib;                // Produto Interno Bruto
    int pontosTuristicos;     // Número de pontos turísticos
    float densidade;          // População / Área
} Carta;

// Função para calcular a densidade demográfica
float calcularDensidade(int populacao, float area) {
    return populacao / area;
}

// Exibir uma carta no terminal
void exibirCarta(Carta c) {
    printf("\nPaís: %s\n", c.nome);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Demográfica: %.2f hab/km²\n", c.densidade);
}

int main() {
    // Cartas pré-definidas
    Carta carta1 = {"Brasil", 214000000, 8515767.0, 18800.0, 30, 0};
    Carta carta2 = {"Argentina", 46000000, 2780400.0, 610.0, 20, 0};

    // Cálculo das densidades
    carta1.densidade = calcularDensidade(carta1.populacao, carta1.area);
    carta2.densidade = calcularDensidade(carta2.populacao, carta2.area);

    int opcao;

    // Menu interativo
    printf("===== SUPER TRUNFO - COMPARAÇÃO ENTRE CARTAS =====\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (MENOR vence)\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &opcao);

    printf("\n== Cartas Selecionadas ==\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    printf("\n== Resultado da Comparação ==\n");

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", carta1.nome, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s!\n", carta1.nome);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Vencedor: %s!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s!\n", carta1.nome);
            } else if (carta2.area > carta1.area) {
                printf("Vencedor: %s!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", carta1.nome, carta1.pib);
            printf("%s: %.2f bilhões\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s!\n", carta1.nome);
            } else if (carta2.pib > carta1.pib) {
                printf("Vencedor: %s!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos turísticos\n");
            printf("%s: %d locais\n", carta1.nome, carta1.pontosTuristicos);
            printf("%s: %d locais\n", carta2.nome, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Vencedor: %s!\n", carta1.nome);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Vencedor: %s!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade);
            if (carta1.densidade < carta2.densidade) {
                printf("Vencedor: %s!\n", carta1.nome);
            } else if (carta2.densidade < carta1.densidade) {
                printf("Vencedor: %s!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, execute novamente e escolha uma opção entre 1 e 5.\n");
            break;
    }

    return 0;
}
