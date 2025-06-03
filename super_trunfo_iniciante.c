#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[3];         // Sigla do estado (ex: SP)
    char codigo[10];        // Código da carta
    char nome[50];          // Nome da cidade
    int populacao;          // População
    float area;             // Área em km²
    float pib;              // Produto Interno Bruto
    int pontosTuristicos;   // Número de pontos turísticos
    float densidade;        // População / Área
    float pibPerCapita;     // PIB / População
} Carta;

// Função para calcular a densidade populacional
float calcularDensidade(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta c) {
    printf("\n%s (%s):\n", c.nome, c.estado);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade);
    printf("PIB per capita: %.2f\n", c.pibPerCapita);
}

int main() {
    // Cadastro das cartas (dados fixos)
    Carta carta1 = {"SP", "C001", "São Paulo", 12300000, 1521.11, 800.0, 25};
    Carta carta2 = {"RJ", "C002", "Rio de Janeiro", 6000000, 1200.00, 400.0, 18};

    // Cálculo da densidade e PIB per capita
    carta1.densidade = calcularDensidade(carta1.populacao, carta1.area);
    carta1.pibPerCapita = calcularPibPerCapita(carta1.pib, carta1.populacao);

    carta2.densidade = calcularDensidade(carta2.populacao, carta2.area);
    carta2.pibPerCapita = calcularPibPerCapita(carta2.pib, carta2.populacao);

    // Exibição das cartas
    printf("CARTA 1:");
    exibirCarta(carta1);

    printf("\nCARTA 2:");
    exibirCarta(carta2);

    // Escolha do atributo para comparação (modifique aqui se quiser outro)
    char atributoComparado[] = "População"; // Pode ser "Área", "PIB", "Densidade", "PIB per capita"

    printf("\nComparação de cartas (Atributo: %s):\n\n", atributoComparado);

    // Comparação pelo atributo escolhido
    if (strcmp(atributoComparado, "População") == 0) {
        printf("Carta 1 - %s: %d\n", carta1.nome, carta1.populacao);
        printf("Carta 2 - %s: %d\n", carta2.nome, carta2.populacao);
        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.populacao > carta1.populacao) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparado, "Área") == 0) {
        printf("Carta 1 - %s: %.2f\n", carta1.nome, carta1.area);
        printf("Carta 2 - %s: %.2f\n", carta2.nome, carta2.area);
        if (carta1.area > carta2.area) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.area > carta1.area) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparado, "PIB") == 0) {
        printf("Carta 1 - %s: %.2f\n", carta1.nome, carta1.pib);
        printf("Carta 2 - %s: %.2f\n", carta2.nome, carta2.pib);
        if (carta1.pib > carta2.pib) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.pib > carta1.pib) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparado, "Densidade") == 0) {
        printf("Carta 1 - %s: %.2f\n", carta1.nome, carta1.densidade);
        printf("Carta 2 - %s: %.2f\n", carta2.nome, carta2.densidade);
        if (carta1.densidade < carta2.densidade) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.densidade < carta1.densidade) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparado, "PIB per capita") == 0) {
        printf("Carta 1 - %s: %.2f\n", carta1.nome, carta1.pibPerCapita);
        printf("Carta 2 - %s: %.2f\n", carta2.nome, carta2.pibPerCapita);
        if (carta1.pibPerCapita > carta2.pibPerCapita) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else {
        printf("Atributo de comparação inválido.\n");
    }

    return 0;
}
