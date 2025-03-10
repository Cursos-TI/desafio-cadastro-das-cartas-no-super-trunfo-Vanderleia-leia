#include <stdio.h>

int main() {
    // Definição das variáveis para duas cartas
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;

    // Cadastro da primeira carta
    printf("Digite o nome do primeiro país: ");
    scanf("%s", nome1);
    printf("Digite a população do primeiro país: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²) do primeiro país: ");
    scanf("%f", &area1);

    // Cadastro da segunda carta
    printf("\nDigite o nome do segundo país: ");
    scanf("%s", nome2);
    printf("Digite a população do segundo país: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²) do segundo país: ");
    scanf("%f", &area2);

    // Exibição dos dados cadastrados
    printf("\n----- CARTAS CADASTRADAS -----\n");
    printf("País 1: %s | População: %d | Área: %.2f km²\n", nome1, populacao1, area1);
    printf("País 2: %s | População: %d | Área: %.2f km²\n", nome2, populacao2, area2);

    return 0
        }

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
