#include <stdio.h>

int main(){

    //declarando o nome das variaveis
    char estado;
    char nomedacidade[100];
    char codigodacarta[100];
    int populacao;
    int Numeropontosturisticos;
    float pib;
    float areadacidade;

    //entrada do usuário para cadastro de cartas
    printf("Digite o estado:\n");
    scanf("%c", &estado);
    getchar();

    printf("Digite o nome da cidade: \n"); 
    scanf("%[^\n]", &nomedacidade);

    printf("Digite o codigo da carta: \n");
    scanf( "%s" , &codigodacarta);  //armazenado nas variaveis

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib);  //armazenado nas variaveis

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);  //armazenado nas variaveis
    getchar();

    printf("Digite quantos metros quadrados tem a cidade: \n");
    scanf("%f",&areadacidade);

    printf("Digite o números de pontos turísticos: \n");
    scanf("%d", &Numeropontosturisticos);  //armazenado nas variaveis

    //impressão dos dados cadastrados pelo usuário
    printf("Estado: %c\n", estado);
    printf("Nome da cidade: %s\n" , nomedacidade);
    printf("Codigo da carta: %s\n" , codigodacarta);
    printf("Número do PIB: R$ %.2f bilhões de reais \n" , pib);
    printf("Número da população: %d \n", populacao);
    printf("extensão da cidade: %.2f km²\n", areadacidade);
    printf("Numero de pontos turisticos:%d " , Numeropontosturisticos);

    return 0;

}