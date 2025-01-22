#include <stdio.h>
#include <string.h>

typedef struct {
    // Definição das variáveis para os atributos da cidade
    char estado[40];
    char codigo[4]; //Ex: A01, A02, A03 ...
    char cidade[50];
    int populacao;
    float area;
    double pib;
    int num_pontos_turisticos;
} CartaCidade;

int cadastrarCarta(CartaCidade *carta) {
    printf("Insira o estado: ");
    if (scanf(" %39[^\n]", carta->estado) != 1) return 0; // Verifica se a leitura foi bem sucedida

    printf("Insira o código da carta (Ex: A01): ");
    if (scanf("%3s", carta->codigo) != 1) return 0;

    getchar(); // Limpa o buffer do teclado

    printf("Insira o nome da cidade: ");
    if (scanf(" %49[^\n]", carta->cidade) != 1) return 0;

    printf("Digite a população da cidade: ");
    if (scanf("%d", &carta->populacao) != 1) return 0;

    printf("Digite a área da cidade (em km²): ");
    if (scanf("%f", &carta->area) != 1) return 0;

    printf("Digite o PIB da cidade: ");
    if (scanf("%lf", &carta->pib) != 1) return 0;

    printf("Digite o número de pontos turísticos da cidade: ");
    if (scanf("%d", &carta->num_pontos_turisticos) != 1) return 0;

    return 1; // Retorna 1 se o cadastro foi bem sucedido
}

// Função para exibir as informações da carta
void exibirCarta(const CartaCidade *carta) {
    printf("\n--- Informações da Cidade ---\n");
    printf("Código: %s\n", carta->codigo);
    printf("Estado: %s\n", carta->estado);
    printf("Cidade: %s\n", carta->cidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2lf\n", carta->pib);
    printf("Número de Pontos Turísticos: %d\n", carta->num_pontos_turisticos);
}

int main() {
    int num_cartas = 32; // Total de cartas (8 estados * 4 cidades)
    CartaCidade cartas[num_cartas];

    // Cadastro de cartas
    for (int i = 0; i < num_cartas; ++i) {
        printf("\nCadastro de carta %d:\n", i + 1);
        if (cadastrarCarta(&cartas[i])) {
            printf("Cadastrado com Sucesso!\n");
        } else {
            printf("Cadastro não efetuado.\n");
            i--; // Tentar novamente o cadastro da mesma carta
        }
    }

    // Exibição dos dados das cartas cadastradas
    for (int i = 0; i < num_cartas; ++i) {
        exibirCarta(&cartas[i]);
    }

    return 0;
}
