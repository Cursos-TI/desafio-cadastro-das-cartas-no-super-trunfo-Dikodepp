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
    scanf("%[^\n]", &nomedacidade); //armazenando as variaveis do nome da cidade

    printf("Digite o codigo da carta: \n");
    scanf( "%s" , &codigodacarta);  //armazenando as variaveis de codigo da carta

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib);  //armazenando as variaveis de PIB

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);  //armazenando as variaveis de população 

    printf("Digite o números de pontos turísticos: \n");
    scanf("%d", &Numeropontosturisticos);  //armazenando as variaveis de pontos turísticos

    //impressão dos dados cadastrados pelo usuário
    printf("Nome da cidade: %s\n" , nomedacidade);
    printf("Codigo da carta: %s\n" , codigodacarta);
    printf("Número do PIB: %.3f\n" , pib);
    printf("Número da população: %.3f km\n", populacao);
    printf("Numero de pontos turisticos:%d " , Numeropontosturisticos);

    return 0;

}