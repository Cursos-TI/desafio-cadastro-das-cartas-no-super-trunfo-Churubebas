#include <stdio.h>


int main() {
    
    int codigocidade, populacao, pontosturisticos;
    char nome[50];
    float pib, areacidade, pibpercapita, densidade;


    
            printf("Digite o Nome da Cidade:\n");
            scanf("%s", &nome);

            printf("Digite o Codigo da Cidade:\n");
            scanf("%d", &codigocidade);

            printf("Digite a Populacao da Cidade:\n");
            scanf("%d", &populacao);

            printf("Digite a Area da Cidade:\n");
            scanf("%f", &areacidade);

            printf("Digite a quantidade de pontos turristicos:\n");
            scanf("%d", &pontosturisticos);

            printf("Digite o PIB da Cidade:\n");
            scanf("%f", &pib);
   
        pibpercapita = (float)(pib / populacao);
        densidade = (float)(populacao / areacidade);
    

            printf("A cidade: %s, codigo: %d \n", nome, codigocidade);
            printf("Populacao: %d, Pontos Turristicos: %d \n", populacao, pontosturisticos);
            printf("Pib %.2f de reais, PIB per Capita %f \n", pib, pibpercapita);
            printf("Densidade Populacional: %f", densidade);

    return 0;
}
