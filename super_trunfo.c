#include <stdio.h>

int main(){

    //vars da primeira carta
    char estado, cidade[50];
    int id, N_ptosturismo;
    float area, pib;
    
    //vars da segunda carta
    char estado2, cidade2[50];
    int id2, N_ptosturismo2;
    float area2, pib2;

    //DESAFIO NVL 1.2 - AVENTUREIRO
    float densidade, pib_capita;
    float densidade2, pib_capita2;

    //DESAFIO NVL 1.3 - MESTRE
    unsigned int populacao;
    unsigned int populacao2;

//obtenção de dados da carta 1
printf("Você está inserindo os dados da PRIMEIRA carta \n");
printf("====================================================\n");
id = 1;
printf("Insira o Estado (de A a H) \n");
scanf(" %c",&estado);
printf("Insira o nome da cidade \n");
scanf(" %[^\n]", &cidade); //FUNCIONOU
printf("Insira contigente populacional \n");
scanf("%d", &populacao);
printf("Insira a extensão de área (Km²) \n");
scanf("%f", &area);
printf("Insira o valor do PIB (em bilhões R$) \n");
scanf("%f", &pib);
printf("Insira Número de Pontos turísticos \n");
scanf("%d", &N_ptosturismo);
printf("\n\tFim da primeira carta");
//DESFIO NVL 1.2 - AVENTUREIRO
densidade = (float)(populacao / area);
pib_capita = (float)(pib *1000000000/ populacao);

//DESAFIO NVL 1.3 - MESTRE
float superpoderA = populacao+area+(pib*1000000000)+N_ptosturismo+pib_capita+(-densidade);
float superpoderB = populacao2+area2+(pib2*1000000000)+N_ptosturismo2+pib_capita2+(-densidade);


//obtenção de dados da carta 2
printf("\n\nAgora os dados da SEGUNDA carta \n");
printf("====================================================\n");
id2 = 2;
printf("Insira o Estado (de A a H) \n");
scanf(" %c", &estado2);
printf("Insira o nome da cidade \n");
scanf(" %[^\n]", &cidade2); //FUNCIONOU
printf("Insira contigente populacional \n");
scanf("%d",&populacao2);
printf("Insira a extensão de área (Km²) \n");
scanf(" %f", &area2);
printf("Insira o valor do PIB (em bilhões R$) \n");
scanf(" %f",&pib2);
printf("Insira Número de Pontos turísticos \n");
scanf("%d", &N_ptosturismo2);
//DESFIO NVL 1.2 - AVENTUREIRO
densidade2 = (float)(populacao2 / area2);
pib_capita2 = (float)( pib2 *1000000000 / populacao2);


//exibição de dados da carta 1
printf("\n\n====================================================\n");
printf("\n Carta %d:", id);
printf("\n Estado: %1c",estado);
printf("\n Código: %c0%d", estado, id);
printf("\n Nome da cidade: %s", cidade);
printf("\n População: %d",populacao);
printf("\n Area: %.2f Km²",area);
printf("\n PIB: %.2f bilhões de reais",pib);
printf("\n Número de pontos turísticos: %d",N_ptosturismo);
//DESAFIO NVL 1.2 - AVENTUREIRO
printf("\n Densidade Populacional: %.2f hab/km²",densidade);
printf("\n PIB per capita: R$ %.2f reais",pib_capita);
printf("\n\n====================================================\n");


//exibição de dados da carta 2
printf("\n Carta %d:", id2);
printf("\n Estado: %1c",estado2);
printf("\n Código: %c0%d", estado2, id2);
printf("\n Nome da cidade: %s", cidade2);
printf("\n População: %d",populacao2);
printf("\n Area: %.2f Km²",area2);
printf("\n PIB: %.2f bilhões de reais",pib2);
printf("\n Número de pontos turísticos: %d",N_ptosturismo2);
//DESAFIO NVL 1.2 - AVENTUREIRO
printf("\n Densidade Populacional: %.2f hab/km²",densidade2);
printf("\n PIB per capita: R$ %.2f reais",pib_capita2);
printf("\n====================================================\n");


//DESAFIO NVL 1.3 - MESTRE
printf("----- Comparação de Cartas: -----\n");
printf("População: Carta 1 venceu? %d\n", populacao > populacao2);
printf("Area: Carta 1 venceu? %d\n", area>area2);
printf("PIB: Carta 1 venceu? %d\n", pib > pib2);
printf("Pontos Turísticos: Carta 1 venceu? %d\n",N_ptosturismo>N_ptosturismo2);
printf("Densidade Pooulacional: Carta 2 venceu? %d\n",densidade2>densidade);
printf("PIB per capita: Carta 1 venceu? %d\n",pib>pib2);
printf("Super Poder: Carta 1 venceu? %d\n\n",superpoderA>superpoderB);

//DESAFIO NVL 2.1 - NOVATO
//Q comecem os jogos!
printf("\n\nCATEGORIA: População\n");
    if (populacao > populacao2)
    {
        printf("Cidade %s venceu com a população de %i", cidade, populacao);
    } else{
        printf("Cidade %s venceu com a população de %i\n", cidade2, populacao2);
    }
    
printf("\n\nCATEGORIA: Área\n");
    if (area>area2)
    {
        printf("A cidade %s de área igual a %.2f km², venceu!", cidade, area);
    } else{
        printf("A cidade %s de área igual a %.2f km², venceu!", cidade2, area2);
    }
    
printf("\n\nCATEGORIA: PIB\n");
    if (pib>pib2){
        printf("A cidade %s com o PIB de R$ %.2f, venceu!", cidade, pib);
    } else{
        printf("A cidade %s com o PIB de R$ %.2f, venceu!", cidade2, pib2);
    }
printf("\n\nCATEGORIA: Pontos Turísticos\n");
    if (N_ptosturismo>N_ptosturismo2)
    {
        printf("A cidade %s com %i pontos turísticos, venceu!", cidade, N_ptosturismo);
    } else{
        printf("A cidade %s com %i pontos turísticos, venceu!", cidade2, N_ptosturismo2);
    }
    
printf("\n\nCATEGORIA: PIB Per capita\n");
    if (pib_capita>pib_capita2)
    {
        printf("A cidade %s com o PIB per capita de R$ %.2f, venceu!", cidade, pib_capita);
    } else{
        printf("A cidade %s com o PIB per capita de R$ %.2f, venceu!", cidade2, pib_capita2);
    }
    
printf("\n\nCATEGORIA: Super Poder\n");
    if(superpoderA>superpoderB){
        printf("A cidade %s ganhou neste quesito por ter %.2f", cidade, superpoderA);
    } else{
        printf("A cidade %s ganhou neste quesito por ter %.2f", cidade2, superpoderB);
    }

return 0;
}