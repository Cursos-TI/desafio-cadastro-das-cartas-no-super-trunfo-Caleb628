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

    
    char nome_da_cidade1[100], estado1[1],  codigo1[10];
    char  nome_da_cidade2[100], estado2[1], codigo2[10];
    int populacao1, p_turisticos1;
    int populacao2, p_turisticos2;
    float area1, pib1;
    float area2, pib2;
    
    

    printf("Estado, a variavel deve ser uma letra maiuscula: ");
    scanf("%s", &estado);
    printf("Código da Carta, a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", &codigo);
    printf("nome da cidade: ");
    scanf("%s", &nome_da_cidade);
    printf("População, o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);

    printf("card1");

     printf("Estado, a variavel deve ser uma letra maiuscula: ");
    scanf("%s", &estado1);
    printf("Código da Carta, a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", &codigo);
    printf("nome da cidade: ");
    scanf("%s", &nome_da_cidade);
    printf("População, o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);

    return 0;
}
