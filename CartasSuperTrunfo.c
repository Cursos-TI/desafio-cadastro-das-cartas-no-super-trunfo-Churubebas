#include<stdio.h>

int main(){
    char estado1[2], estado2[2];
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;

     
        printf("### Bem Vindo ao Jogo Super Trunfo Novato ###\n");
        printf("Cadastre a Primeira Carta:\n");

            printf("Insira a abreviacao do Estado: Ex. RR (Roraima) \n");
                scanf("%s", &estado1);
          
            printf("Insira o Codigo do Estado, ex. Abreviacao(RR) e o DDD(095): \"RR095\" \n");
                scanf("%s", &codigo1);
                    fgetc(stdin);
            
            printf("Insira o nome da Cidade:\n");
                fgets(nome1, 50, stdin);
                      
            printf("Insira a Populacao:\n");
                scanf("%d", &populacao1);
          
            printf("Insira a Area da cidade em Km2\n");
                scanf("%f", &area1);
        
            printf("Insira o PIB:\n");
                scanf("%f", &pib1);
       
            printf("Insira o numero de pontos turristicos:\n");
                scanf("%d", &pontos1);

                printf("Cadastre Segunda Carta\n");

                printf("Insira a abreviacao do Estado:\n");
                    scanf("%s", &estado2);
          
                printf("Insira o Codigo do Estado\n");
                    scanf("%s", &codigo2);
                    fgetc(stdin);
            
                printf("Insira o nome da Cidade:\n");
                    fgets(nome2, 50, stdin);
                      
                printf("Insira a Populacao:\n");
                    scanf("%d", &populacao2);
          
                printf("Insira a Area da cidade em Km2\n");
                    scanf("%f", &area2);
        
                printf("Insira o PIB:\n");
                    scanf("%f", &pib2);
       
                printf("Insira o numero de pontos turristicos:\n");
                    scanf("%d", &pontos2);
       
        densidade1 = (float)(populacao1 / area1);
        densidade2 = (float)(populacao2 / area2);
        percapita1 = (float)(pib1 / populacao1);
        percapita2 = (float)(pib2 / populacao2);

        puts("\n");
        printf("Carta 1\n");
        printf("Estado: %s\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nome1);
        printf("Populacao: %d\n", populacao1);
        printf("Area: %.2f, em km2\n", area1);
        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB: %.2f de Reais\n", pib1);
        printf("PIB per capita: %.2f\n", percapita1);
        printf("Numero de pontos Turisticos: %d\n", pontos1);

        puts("\n");
        printf("Carta 2\n");
        printf("Estado: %s\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nome2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f, em km2\n", area2);
        printf("Densidade Populacional: %.2f\n", densidade2);
        printf("PIB: %.2f Bilhoes de Reais\n", pib2);
        printf("PIB per capita: %.2f\n", percapita2);
        printf("Numero de pontos Turisticos: %d\n", pontos2);
        
        puts("\n");
        printf("RESULTADO COMPARACAO\n");
        if (populacao1>populacao2)
        {
            printf("Carta 1 Venceu na Populacao!\n");
        }else{
            printf("Carta 2 Venceu na Populacao!\n");
        };
        if (area1>area2)
        {
            printf("Carta 1 Venceu na Area!\n");
        }else{
            printf("Carta 2 Venceu na Area!\n");
        };
        if (densidade1<densidade2)
        {
            printf("Carta 1 Venceu na Densidade Populacional!\n");
        }else{
            printf("Carta 1 Venceu na Densidade Populacional!\n");
        };
        if (pib1>pib2)
        {
            printf("Carta 1 Venceu no PIB!\n");
        }else{
            printf("Carta 2 Venceu no PIB!\n");
        };
        if (percapita1>percapita2)
        {
            printf("Carta 1 Venceu no PIB per capita!\n");
        }else{
            printf("Carta 2 Venceu no PIB per capita!\n");
        };
        if (pontos1>pontos2)
        {
            printf("Carta 1 Venceu nos Pontos Turristicos!\n");
        }else{
            printf("Carta 2 Venceu nos Pontos Turristicos!\n");
        };

return 0;
}