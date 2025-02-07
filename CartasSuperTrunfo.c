#include <stdio.h>

int main(){

    //declarando o nome das variaveis
    int Numeropontosturisticos;
    char nomedacidade[100];
    char codigodacarta[6];
    float pib;
    float populacao;
    float area;

    //entrada do usuário para cadastro de cartas
    printf("Digite o nome da cidade: \n"); 
    scanf("%[^\n]", &nomedacidade);

    printf("Digite o codigo da carta: \n");
    scanf( "%s" , &codigodacarta);  //armazenado nas variaveis

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib);  //armazenado nas variaveis

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);  //armazenado nas variaveis


    printf("Digite o números de pontos turísticos: \n");
    scanf("%d", &Numeropontosturisticos);  //armazenado nas variaveis

    //impressão dos dados cadastrados pelo usuário
    printf("Nome da cidade: %s\n" , nomedacidade);
    printf("Codigo da carta: %s\n" , codigodacarta);
    printf("Número do PIB: %.3f\n" , pib);
    printf("Número da população: %.3f km\n", populacao);
    printf("Numero de pontos turisticos:%d " , Numeropontosturisticos);

    return 0;

}