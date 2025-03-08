#include <stdio.h>

int main(){

    //declarando as variaveis
    char estado1 , estado2;
    char codigodacarta[10] , codigodacarta2[10];
    char nomedacidade[100] , nomedacidade2[100];
    int populacao1 , populacao2;
    int pontosturisticos1, pontosturisticos2;
    int bilhoes = 1000000000;
    float pib1 , pib2;
    float areadacidade1 , areadacidade2;
    float densidade_populacional1 , densidade_populacional2;
    float pib_percapita1 , pib_percapita2;
    float superpoderCarta1, superpoderCarta2;
    int resultado_populacao , resultado_area , resultado_pib, resultado_pontosturisticos, resulado_densidadepopulacional, resulado_pibpercapita, resulado_superpoder;


    //entrada do usuário para cadastro de carta 1

    printf("CADASTRO DA CARTA 1 \n");
    printf("Digite uma letra de A a H que corresponde ao estado da carta 1: \n");
    scanf(" %c", &estado1);
    getchar();//limpeza de buffer

    printf("Digite o codigo: \n");
    scanf( "%s" , codigodacarta);  //armazenado nas variaveis
    getchar(); //limpeza de buffer

    printf("Digite o nome da cidade: \n");
    scanf("%[^\n]", nomedacidade);
    getchar(); //limpeza de buffer

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);  //armazenado nas variaveis
    getchar(); //limpeza de buffer

    printf("Digite quantos metros quadrados tem a cidade: \n");
    scanf("%f",&areadacidade1);

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib1);  //armazenado nas variaveis

    printf("Digite o números de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);  //armazenado nas variaveis
    getchar(); //limpeza de buffer

    //calculos para efeito de comparação das cartas 
    //calculo carta 1
    
    densidade_populacional1 = (float)(populacao1 / areadacidade1); // divisão da densidade populacional carta 1

    pib_percapita1 = (float)(pib1 / populacao1) * bilhoes; //divisão de pib percapita da cidade 1

    superpoderCarta1 = (float)populacao1 + areadacidade1 + pib1 + pib_percapita1 + (float)pontosturisticos1 + (1 / densidade_populacional1); //calculo super poder

    printf("\n");

    //entrada do usuário para cadastro de carta 2
    printf("CADASTRO DA CARTA 2 \n");
    printf("Digite uma letra de A a H que corresponde ao estado da carta 2: \n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o codigo: \n");
    scanf( "%s" , codigodacarta2);  //armazenado nas variaveis
    getchar();

    printf("Digite o nome da cidade: \n"); 
    scanf("%[^\n]", nomedacidade2);
    getchar();

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);  //armazenado nas variaveis
    getchar();

    printf("Digite quantos metros quadrados tem a cidade: \n");
    scanf("%f",&areadacidade2);

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib2);  //armazenado nas variaveis

    printf("Digite o números de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);  //armazenado nas variaveis

    //calculos para efeito de comparação das cartas 
    //calculo carta 2

    densidade_populacional2 = (float)populacao2 / areadacidade2; // divisão da densidade populacional carta 2

    pib_percapita2 = (float) (pib2 / populacao2) * bilhoes; //divisão de pib percapita da cidade 2

    superpoderCarta2 = (float)populacao2 + areadacidade2 + pib2 + pib_percapita2 + (float)pontosturisticos2 + (1 / densidade_populacional2); // soma super poder carta 2

    //comparação das cartas 1 e 2

    resultado_populacao = populacao1 > populacao2;
    resultado_area = areadacidade1 > areadacidade2;
    resultado_pib = pib1 > pib2;
    resultado_pontosturisticos = pontosturisticos1 > pontosturisticos2;
    resulado_densidadepopulacional = densidade_populacional1 < densidade_populacional2;
    resulado_pibpercapita = pib_percapita1 > pib_percapita2;
    resulado_superpoder = superpoderCarta1 > superpoderCarta2;

    //impressão dos dados cadastrados pelo usuário carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n" , codigodacarta);
    printf("Nome da cidade: %s\n" , nomedacidade);
    printf("Número da população: %d \n", populacao1);
    printf("extensão da cidade: %.2f km²\n", areadacidade1);
    printf("Número do PIB: R$ %.2f bilhões de reais \n" , pib1);
    printf("Numero de pontos turisticos: %d \n" , pontosturisticos1);
    printf("densidade populacional: %.2f hab/km²\n" , densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n" , pib_percapita1);
    printf("Super poder: %.2f\n" ,superpoderCarta1);

    printf("\n");

    //impressão dos dados cadastrados pelo usuário carta2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n" , codigodacarta2);
    printf("Nome da cidade: %s\n" , nomedacidade2);
    printf("Número da população: %d \n", populacao2);
    printf("extensão da cidade: %.2f km²\n", areadacidade2);
    printf("Número do PIB: R$ %.2f bilhões de reais \n" , pib2);
    printf("Numero de pontos turisticos: %d\n" , pontosturisticos2);
    printf("densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);
    printf("Super poder: %.2f\n", superpoderCarta2);

    printf("\n");

    //impressão resuldado da Comparação de Cartas

    printf("___________Comparação de Cartas_____________\n");
    printf("Se o resultado for 1 a carta 1 venceu , se resultado for 0 a carta 2 venceu \n");
    printf("População: %d\n", resultado_populacao);
    printf("Área: %d\n" , resultado_area);
    printf("PIB: %d\n" , resultado_pib);
    printf("Pontos Turísticos: %d\n" , resultado_pontosturisticos);
    printf("Densidade Populacional: %d\n" , resulado_densidadepopulacional);
    printf("PIB per Capita: %d\n" , resulado_pibpercapita);
    printf("Super Poder: %d\n" , resulado_superpoder);

    return 0;

}
