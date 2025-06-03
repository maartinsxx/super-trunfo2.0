#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
} Carta;

// Função para calcular a densidade
float calcularDensidade(int pop, float area) {
    return pop / area;
}

// Exibir atributos disponíveis
void exibirAtributosDisponiveis(int jaEscolhido) {
    printf("Escolha um atributo:\n");
    if (jaEscolhido != 1) printf("1 - População\n");
    if (jaEscolhido != 2) printf("2 - Área\n");
    if (jaEscolhido != 3) printf("3 - PIB\n");
    if (jaEscolhido != 4) printf("4 - Pontos turísticos\n");
    if (jaEscolhido != 5) printf("5 - Densidade demográfica (MENOR vence)\n");
}

// Obter valor do atributo selecionado
float obterValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return (float)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (float)c.pontosTuristicos;
        case 5: return c.densidade;
        default: return -1;
    }
}

// Nome do atributo
const char* nomeDoAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos turísticos";
        case 5: return "Densidade demográfica";
        default: return "Desconhecido";
    }
}

// Menu com proteção de entrada
int selecionarAtributo(int atributoJaEscolhido) {
    int escolha;
    while (1) {
        exibirAtributosDisponiveis(atributoJaEscolhido);
        printf("Digite o número da opção: ");
        scanf("%d", &escolha);

        if (escolha >= 1 && escolha <= 5 && escolha != atributoJaEscolhido) {
            return escolha;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }
}

int main() {
    // Cartas
    Carta c1 = {"Brasil", 214000000, 8515767.0, 18800.0, 30, 0};
    Carta c2 = {"Argentina", 46000000, 2780400.0, 610.0, 20, 0};

    // Calcular densidade
    c1.densidade = calcularDensidade(c1.populacao, c1.area);
    c2.densidade = calcularDensidade(c2.populacao, c2.area);

    printf("===== SUPER TRUNFO - DESAFIO MESTRE =====\n\n");

    // Escolher dois atributos diferentes
    printf("Escolha o primeiro atributo para comparação:\n");
    int atributo1 = selecionarAtributo(0);

    printf("\nEscolha o segundo atributo para comparação:\n");
    int atributo2 = selecionarAtributo(atributo1);

    // Obter os valores dos atributos
    float v1_attr1 = obterValor(c1, atributo1);
    float v2_attr1 = obterValor(c2, atributo1);
    float v1_attr2 = obterValor(c1, atributo2);
    float v2_attr2 = obterValor(c2, atributo2);

    // Mostrar valores
    printf("\n== Comparando cartas ==\n");
    printf("Cartas: %s vs %s\n", c1.nome, c2.nome);

    // Atributo 1
    printf("\nAtributo 1: %s\n", nomeDoAtributo(atributo1));
    printf("%s: %.2f\n", c1.nome, v1_attr1);
    printf("%s: %.2f\n", c2.nome, v2_attr1);

    // Atributo 2
    printf("\nAtributo 2: %s\n", nomeDoAtributo(atributo2));
    printf("%s: %.2f\n", c1.nome, v1_attr2);
    printf("%s: %.2f\n", c2.nome, v2_attr2);

    // Verificação com regras (invertendo se for densidade)
    float soma1 = ((atributo1 == 5) ? (1000000.0 - v1_attr1) : v1_attr1) + 
                  ((atributo2 == 5) ? (1000000.0 - v1_attr2) : v1_attr2);
    float soma2 = ((atributo1 == 5) ? (1000000.0 - v2_attr1) : v2_attr1) + 
                  ((atributo2 == 5) ? (1000000.0 - v2_attr2) : v2_attr2);

    printf("\n== Soma final dos atributos ==\n");
    printf("%s: %.2f\n", c1.nome, soma1);
    printf("%s: %.2f\n", c2.nome, soma2);

    // Resultado
    printf("\n== Resultado ==\n");
    (soma1 > soma2) ? printf("Vencedor: %s!\n", c1.nome) :
    (soma2 > soma1) ? printf("Vencedor: %s!\n", c2.nome) :
                      printf("Empate!\n");

    return 0;
}
