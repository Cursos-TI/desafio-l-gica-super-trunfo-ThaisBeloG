#include <stdio.h>
#include <string.h>

// Estrutura que representa uma cidade com seus principais atributos
struct Cidade {
    char nome[50];
    int populacao;      // numero de habitantes
    float area;         // area total em km²
    float pib;          // Produto Interno Bruto em bilhoes
};

int main() {
    // Definicao das cidades com dados reais aproximados
    struct Cidade saoPaulo = {"Sao Paulo", 11451999, 1521.11, 803.0};
    struct Cidade rioDeJaneiro = {"Rio de Janeiro", 6211423, 1200.27, 364.0};

    // ========== Comparacao das Cidades ==========
    printf("\n===== COMPARACAO ENTRE AS CIDADES =====\n");

    // Comparacao da populacao
    if (saoPaulo.populacao > rioDeJaneiro.populacao) {
        printf("Populacao: %s tem mais habitantes (%d contra %d).\n",
            saoPaulo.nome, saoPaulo.populacao, rioDeJaneiro.populacao);
    } else if (rioDeJaneiro.populacao > saoPaulo.populacao) {
        printf("Populacao: %s tem mais habitantes (%d contra %d).\n",
            rioDeJaneiro.nome, rioDeJaneiro.populacao, saoPaulo.populacao);
    } else {
        printf("Populacao: Ambas as cidades tem o mesmo numero de habitantes (%d).\n", saoPaulo.populacao);
    }

    // Comparacao da area
    if (saoPaulo.area > rioDeJaneiro.area) {
        printf("Area: %s eh maior em territorio (%.2f km² contra %.2f km²).\n",
            saoPaulo.nome, saoPaulo.area, rioDeJaneiro.area);
    } else if (rioDeJaneiro.area > saoPaulo.area) {
        printf("Area: %s eh maior em territorio (%.2f km² contra %.2f km²).\n",
            rioDeJaneiro.nome, rioDeJaneiro.area, saoPaulo.area);
    } else {
        printf("Area: Ambas as cidades tem a mesma area (%.2f km²).\n", saoPaulo.area);
    }

    // Comparacao do PIB
    if (saoPaulo.pib > rioDeJaneiro.pib) {
        printf("PIB: %s possui economia maior (%.2f bilhoes contra %.2f bilhoes).\n",
            saoPaulo.nome, saoPaulo.pib, rioDeJaneiro.pib);
    } else if (rioDeJaneiro.pib > saoPaulo.pib) {
        printf("PIB: %s possui economia maior (%.2f bilhoes contra %.2f bilhoes).\n",
            rioDeJaneiro.nome, rioDeJaneiro.pib, saoPaulo.pib);
    } else {
        printf("PIB: Ambas as cidades tem o mesmo PIB (%.2f bilhoes).\n", saoPaulo.pib);
    }

    // ========== Fim do Programa ==========
    printf("\nComparacao finalizada. Obrigado por utilizar o sistema Super Trunfo - Cidades!\n");

    return 0;
}
