#include <stdio.h>

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

    char codigo_da_cidade[5];
    char cidade[20];
    int populacao_da_cidade;
    float area_da_cidade;
    int qtade_pontos_turisticos;
    
    // Mensagem de boas vindas ao jogo
    printf("Bem-vindo ao jogo super trunfo!!\n");
    printf("Faça o cadastro das cartas do jogo\n");
    
    // Cadastro dos dados das cartas
    printf("\nDigite o codigo da cidade: (EX: A01, A02, B01 ....)");
    scanf("%s", &codigo_da_cidade);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao_da_cidade);
    printf("Digite a area da cidade: ");
    scanf("%f", &area_da_cidade);
    printf("Digite o total de pontos turisticos da cidade: ");
    scanf("%d", &qtade_pontos_turisticos);

    // Exibicao dos dados armazenados acima
    printf("\nCodigo da cidade: %s", codigo_da_cidade);
    printf("\nNome da cidade: %s", cidade);
    printf("\nPopulacao da cidade: %d", populacao_da_cidade);
    printf("\nArea da cidade: %f", area_da_cidade);
    printf("\nQuantidade de pontos turisticos da cidade: %d", qtade_pontos_turisticos);

    return 0;
}
