#include <stdio.h>


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigocidade, populacao, pontosturisticos;
    char nome[50];
    float pib;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        printf("Digite o Nome da Cidade:\n");
    scanf("%s", &nome);

    printf("Digite o Codigo da Cidade:\n");
    scanf("%d", &codigocidade);

    printf("Digite a Populacao da Cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turristicos:\n");
    scanf("%d", &pontosturisticos);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib);
   
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("A cidade %s, com o codigo %d \n", nome, codigocidade);
    printf("tem %d habitantes e %d Pontos Turristicos\n", populacao, pontosturisticos);
    printf("com seu pib %.2f de reais.", pib);

    return 0;
}
