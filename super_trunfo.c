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

    //DESADIO 2.2 - MESTRE usando o switch
    int escolha = 1, escolha2;
printf("\n\n==================================\n");
printf("\tCOMECE O JOGO!");
printf("\n==================================\n");
printf("\nESCOLHA A CATEGORIA\n");
printf("1- POPULAÇÃO\n");
printf("2- AREA\n");
printf("3- PIB\n");
printf("4- NÚMERO DE PONTOS TURÍSTICOS\n");
printf("5- DENSIDADE\n");
printf("6- -SAIR-\n");
printf("Sua 1ª categoria\n");
scanf("%i", &escolha);

printf("Sua 2ª categoria\n");
scanf("%i", &escolha2);

while (escolha == escolha2)
{
    printf("Você já escolheu esta categoria, tente de novo\n");
    scanf("%i", &escolha2);
}

//DESAFIO 2.3 NÍVEL MESTRE
double temp1, temp2, soma1, soma2;

//COMPARANDO A *SEGUNDA* CATEGORIA
switch (escolha)
{
printf("\n%s VS %s\n", cidade, cidade2);

    case 1: //POPULAÇÃO
    printf("Categoria escolhida: POPULAÇÃO\n");
    temp1 = populacao;
    temp2 = populacao2;
    printf("%s: %i e %s: %i\n", cidade, populacao, cidade2, populacao2);
            if (populacao>populacao2)
            {
               printf("%s venceu!", cidade);
            } else if (populacao == populacao2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
            
        break;
    case 2: //AREA
    printf("Categoria escolhida: AREA \n");
    temp1 = area;
    temp2 = area2;
    printf("%s: %.2fKm² e %s: %.2fKm²\n", cidade, area, cidade2, area2);
            if (area>area2)
            {
               printf("%s venceu!", cidade);
            } else if (area == area2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
    
        break;  
    case 3://PIB
    printf("Categoria escolhida: PIB\n");
    temp1 = pib*1000000000;
    temp2 = pib2*1000000000;
    printf("%s:R$ %.2fbi e %s:R$ %.2fbi\n", cidade, pib, cidade2, pib2);
            if (pib>pib2)
            {
               printf("%s venceu!", cidade);
            } else if (pib == pib2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
    
        break;
    case 4: //Nº DE PTS TUR
    printf("Categoria escolhida: Nº DE PONTOS TURÍSTICOS\n");
    temp1 = N_ptosturismo;
    temp2 = N_ptosturismo2;
    printf("%s: %i e %s: %i\n", cidade, N_ptosturismo, cidade2, N_ptosturismo2);
            if (N_ptosturismo>N_ptosturismo2)
            {
               printf("%s venceu!", cidade);
            } else if (N_ptosturismo == N_ptosturismo2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
    
        break;  
    case 5: //DENSIDADE
    printf("Categoria escolhida: DENSIDADE\n");
    temp1 = densidade;
    temp2 = densidade2;
    printf("%s: %.2fhab/km² e %s: %.2fhab/km²\n", cidade, densidade, cidade2, densidade2);
            if (densidade<densidade2)
            {
               printf("%s venceu!", cidade);
            } else if (densidade == densidade2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
  
        break;

    default:
        printf("OPÇÃO INVÁLIDA\n");
        break;
}
printf("\n\n");

//COMPARANDO A *SEGUNDA* CATEGORIA
switch (escolha2)
{
printf("\n%s VS %s\n", cidade, cidade2);

    case 1: //POPULAÇÃO
    printf("Categoria escolhida: POPULAÇÃO\n");
    printf("%s: %i e %s: %i\n", cidade, populacao, cidade2, populacao2);
            if (populacao>populacao2)
            {
               printf("%s venceu!", cidade);
            } else if (populacao == populacao2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
            //soma dos atributos
            soma1 = temp1 + populacao;
            soma2 = temp2 + populacao2;
            printf("\n\n--------------------------\n");
            printf("Somando os atributos:\n");
            printf("Cidade %s :%.2f \n", cidade, soma1);
            printf("Cidade %s :%.2f \n", cidade2, soma2);
            if (soma1 > soma2){
                printf("Cidade %s ganhou\n",cidade);
            } else if (soma1 < soma2) {
                printf("Cidade %s ganhou\n",cidade2);
            } else {
                printf("Ambas empataram\n");
            }
        break;
    case 2: //AREA
    printf("Categoria escolhida: AREA \n");
    printf("%s: %.2fKm² e %s: %.2fKm²\n", cidade, area, cidade2, area2);
            if (area>area2)
            {
               printf("%s venceu!", cidade);
            } else if (area == area2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
    
         //soma dos atributos
            soma1 = temp1 + area;
            soma2 = temp2 + area2;
            printf("\n\n--------------------------\n");
            printf("Somando os atributos:\n");
            printf("Cidade %s :%.2f \n", cidade, soma1);
            printf("Cidade %s :%.2f \n", cidade2, soma2);
            if (soma1 > soma2){
                printf("Cidade %s ganhou\n",cidade);
            } else if (soma1 < soma2) {
                printf("Cidade %s ganhou\n",cidade2);
            } else {
                printf("Ambas empataram\n");
            }        
            break;  

    case 3://PIB
    printf("Categoria escolhida: PIB\n");
    printf("%s:R$ %.2fbi e %s:R$ %.2fbi\n", cidade, pib, cidade2, pib2);
            if (pib>pib2)
            {
               printf("%s venceu!", cidade);
            } else if (pib == pib2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
    
         //soma dos atributos
            soma1 = temp1 + (pib*1000000000);
            soma2 = temp2 + (pib2*1000000000);
            printf("\n\n--------------------------\n");
            printf("Somando os atributos:\n");
            printf("Cidade %s :%.2f \n", cidade, soma1);
            printf("Cidade %s :%.2f \n", cidade2, soma2);
            if (soma1 > soma2){
                printf("Cidade %s ganhou\n",cidade);
            } else if (soma1 < soma2) {
                printf("Cidade %s ganhou\n",cidade2);
            } else {
                printf("Ambas empataram\n");
            }        
            break;

    case 4: //Nº DE PTS TUR
    printf("Categoria escolhida: Nº DE PONTOS TURÍSTICOS\n");
    printf("%s: %i e %s: %i\n", cidade, N_ptosturismo, cidade2, N_ptosturismo2);
            if (N_ptosturismo>N_ptosturismo2)
            {
               printf("%s venceu!", cidade);
            } else if (N_ptosturismo == N_ptosturismo2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
    
         //soma dos atributos
            soma1 = temp1 + N_ptosturismo;
            soma2 = temp2 + N_ptosturismo2;
            printf("\n\n--------------------------\n");
            printf("Somando os atributos:\n");
            printf("Cidade %s :%.2f \n", cidade, soma1);
            printf("Cidade %s :%.2f \n", cidade2, soma2);
            if (soma1 > soma2){
                printf("Cidade %s ganhou\n",cidade);
            } else if (soma1 < soma2) {
                printf("Cidade %s ganhou\n",cidade2);
            } else {
                printf("Ambas empataram\n");
            }        
            break;  

    case 5: //DENSIDADE
    printf("Categoria escolhida: DENSIDADE\n");
    printf("%s: %.2fhab/km² e %s: %.2fhab/km²\n", cidade, densidade, cidade2, densidade2);
            if (densidade<densidade2)
            {
               printf("%s venceu!", cidade);
            } else if (densidade == densidade2){
                printf("%s e %s empataram!", cidade, cidade2);
            } else{
                printf("%s venceu!", cidade2);
            }
  
         //soma dos atributos
            soma1 = temp1 + densidade;
            soma2 = temp2 + densidade2;
            printf("\n\n--------------------------\n");
            printf("Somando os atributos:\n");
            printf("Cidade %s :%.2f \n", cidade, soma1);
            printf("Cidade %s :%.2f \n", cidade2, soma2);
            if (soma1 > soma2){
                printf("Cidade %s ganhou\n",cidade);
            } else if (soma1 < soma2) {
                printf("Cidade %s ganhou\n",cidade2);
            } else {
                printf("Ambas empataram\n");
            }        
            break;

    default:
        printf("OPÇÃO INVÁLIDA\n");
        break;
}
printf("\n\n");
}