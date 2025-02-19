#include <stdio.h>

int main(){

    //declarando o nome das variaveis
    char estado , estado2;
    char codigodacarta[5] , codigodacarta2[5];
    char nomedacidade[100] , nomedacidade2[100];
    int populacao , populacao2;
    int Numeropontosturisticos, Numerodepontosturisticos2;
    float pib , pib2;
    float areadacidade , areadacidade2;

    //entrada do usuário para cadastro de carta 1

    printf("CADASTRO DA CARTA 1 \n");
    printf("Digite uma letra de A a H que corresponde ao estado da carta 1: \n");
    scanf("%c", &estado);
    getchar();

    printf("Digite o codigo: \n");
    scanf( "%s" , &codigodacarta);  //armazenado nas variaveis
    getchar();

    printf("Digite o nome da cidade: \n"); 
    scanf("%[^\n]", nomedacidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);  //armazenado nas variaveis
    getchar();

    printf("Digite quantos metros quadrados tem a cidade: \n");
    scanf("%f",&areadacidade);

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib);  //armazenado nas variaveis

    printf("Digite o números de pontos turísticos: \n");
    scanf("%d", &Numeropontosturisticos);  //armazenado nas variaveis
    getchar();

    //entrada do usuário para cadastro de carta 2
    printf("CADASTRO DA CARTA 2 \n");
    printf("Digite uma letra de A a H que corresponde ao estado da carta 2: \n");
    scanf("%c", &estado2);
    getchar();

    printf("Digite o codigo: \n");
    scanf( "%s" , &codigodacarta2);  //armazenado nas variaveis
    getchar();

    printf("Digite o nome da cidade: \n"); 
    scanf("%[^\n]", nomedacidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);  //armazenado nas variaveis
    getchar();

    printf("Digite quantos metros quadrados tem a cidade: \n");
    scanf("%f",&areadacidade2);

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib2);  //armazenado nas variaveis

    printf("Digite o números de pontos turísticos: \n");
    scanf("%d", &Numerodepontosturisticos2);  //armazenado nas variaveis

    //impressão dos dados cadastrados pelo usuário carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n" , codigodacarta);
    printf("Nome da cidade: %s\n" , nomedacidade);
    printf("Número da população: %d \n", populacao);
    printf("extensão da cidade: %.2f km²\n", areadacidade);
    printf("Número do PIB: R$ %.2f bilhões de reais \n" , pib);
    printf("Numero de pontos turisticos: %d \n" , Numeropontosturisticos);

    printf("\n");

    //impressão dos dados cadastrados pelo usuário carta2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n" , codigodacarta2);
    printf("Nome da cidade: %s\n" , nomedacidade2);
    printf("Número da população: %d \n", populacao2);
    printf("extensão da cidade: %.2f km²\n", areadacidade2);
    printf("Número do PIB: R$ %.2f bilhões de reais \n" , pib2);
    printf("Numero de pontos turisticos: %d " , Numerodepontosturisticos2);


    return 0;

}