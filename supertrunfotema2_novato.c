#include <stdio.h>

int main(){

    //declarando as variaveis
    char pais[10] = "Brasil";
    char pais2[10] = "Brasil";
    char estado1 = 'A' , estado2 = 'B';
    char codigodacarta[10] = "A01" , codigodacarta2[10] = "B02";
    char nomedacidade[100] = "São Paulo" , nomedacidade2[100] = "Rio de janeiro";
    int populacao1 = 12325000 , populacao2 = 6748000;
    int pontosturisticos1 = 50, pontosturisticos2 = 30;
    int bilhoes = 1000000000;
    float pib1 = 699.28, pib2 = 300.50;
    float areadacidade1 = 1521.11 , areadacidade2 = 1200.25;
    float densidade_populacional1 = 8102.64 , densidade_populacional2 = 5622.16;
    float pib_percapita1 = 56736.72 , pib_percapita2 = 44531.71;
    float superpoderCarta1 = 12384007.00, superpoderCarta2 = 6794062.00;
    int resulado_superpoder;
    int opcao , opcaoComparacao;



    
    //calculos para efeito de comparação das cartas 
    //calculo carta 1
    
    densidade_populacional1 = (float)(populacao1 / areadacidade1); // divisão da densidade populacional carta 1

    pib_percapita1 = (float)(pib1 / populacao1) * bilhoes; //divisão de pib percapita da cidade 1

    superpoderCarta1 = (float)populacao1 + areadacidade1 + pib1 + pib_percapita1 + (float)pontosturisticos1 + (1 / densidade_populacional1); //calculo super poder

    
    //calculos para efeito de comparação das cartas 
    //calculo carta 2

    densidade_populacional2 = (float)populacao2 / areadacidade2; // divisão da densidade populacional carta 2

    pib_percapita2 = (float) (pib2 / populacao2) * bilhoes; //divisão de pib percapita da cidade 2

    superpoderCarta2 = (float)populacao2 + areadacidade2 + pib2 + pib_percapita2 + (float)pontosturisticos2 + (1 / densidade_populacional2); // soma super poder carta 2

    //Comparação de Cartas (impressão do resultado em tela



    printf("***** Bem Vindo ao Jogo Super Trunfo *****\n");
    printf("1. Ver Regras!\n");
    printf("2. Cadastro de cartas!\n");
    printf("3. Exibir cartas cadastradas!\n");
    printf("4. Comparação de Cartas\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);


    switch (opcao){
    case 1:
        printf("O jogo Super trunfo consiste em comparar as cartas, as cartas com maiores valores vencem apenas em Densidade populacional que ganha quem obtiver menor valor!!!\n");
    break;

    case 2:
        //entrada do usuário para cadastro de carta 1

        printf("CADASTRO DA CARTA 1 \n");

        printf("Digite o Pais: \n");
        scanf("%s", pais);

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

        //entrada do usuário para cadastro de carta 2
        printf("CADASTRO DA CARTA 2 \n");

        printf("Digite o Pais: \n");
        scanf("%[^\n]", pais2);

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
    break;
    
    case 3:
        //impressão dos dados cadastrados pelo usuário carta 1
        printf("CARTA 1\n");
        printf("Pais: %s\n", pais);
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
        printf("Pais: %s\n", pais2);
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n" , codigodacarta2);
        printf("Nome da cidade: %s\n" , nomedacidade2);
        printf("Número da população: %d \n", populacao2);
        printf("extensão da cidade: %.2f km²\n", areadacidade2);
        printf("Número do PIB: R$ %.2f bilhões de reais \n" , pib2);
        printf("Número de pontos turisticos: %d\n" , pontosturisticos2);
        printf("densidade populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB per Capita: %.2f reais\n", pib_percapita2);
        printf("Super poder: %.2f\n", superpoderCarta2);

        printf("\n");

    break;
    case 4:
        printf("Selecione o atributo a ser comparado: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Densidade Populacional\n");
        printf("5. Pib Percapita\n");
        printf("6. Número de pontos turísticos\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcaoComparacao);

        switch (opcaoComparacao){
        case 1:
            printf("Comparação de cartas (Atributo: População):\n");

            printf("\n");
   
            // exibe o valor a ser comparado de cada atributo
            printf("Pais: %s\n", pais);
            printf("Carta 1 - São Paulo (SP): %d\n" , populacao1); 
            printf("Carta 2 - Rio de Janeiro (RJ): %d\n" , populacao2);
        
            if (populacao1 > populacao2){ //compara o atributo população

                printf("Resultado: Carta 1 (São Paulo) venceu!\n");

            }else if (populacao1 < populacao2){

                printf("Resultado: Carta 2 (Rio de janeiro) venceu!\n");

            } else {
                        
                printf("Houve um empate!\n");

            }
        break;

        case 2:
            printf("Comparação de cartas (Atributo: extensão da cidade):\n");
            
            printf("\n");

             // exibe o valor a ser comparado de cada atributo
            printf("Pais: %s\n", pais);
            printf("Carta 1 - São Paulo (SP): %.2f km²\n", areadacidade1);
            printf("Carta 2 - Rio de Janeiro (RJ): %.2f km²\n", areadacidade2);
            
            if ( areadacidade1 > areadacidade2){ // compara o atributo da extensão da cidade

                printf("Resultado: Carta 1 (São Paulo) venceu!\n");
                
            } else if (areadacidade1 < areadacidade2){

                printf("Resultado: Carta 2  (Rio de janeiro) venceu!\n");

            }else {

                printf("Houve um empate!!!\n");
                
            }
        break;

        case 3:
            printf("Comparação de cartas (Atributo: PIB):\n");

            printf("\n");
        
            // exibe o valor a ser comparado de cada atributo
            printf("Pais: %s\n", pais);
            printf("Carta 1 - São Paulo (SP): %.2f bilhões reais\n" , pib1);
            printf("Carta 2 - Rio de Janeiro (RJ): %.2f bilhões reais\n" , pib2);
            
            if (pib1 > pib2){ //compara o atributo população

                printf("Resultado: Carta 1  (São Paulo) venceu!\n");

            }else if (pib1 < pib2){

                printf("Resultado: Carta 2  (Rio de janeiro) venceu!\n");

            } else {
                    
                printf("Houve um empate!\n");

            }
        break;

        case 4:

            printf("Comparação de cartas (Atributo: Densidade Populacional):\n");

            printf("\n");
            // exibe o valor a ser comparado de cada atributo
            printf("Pais: %s\n", pais);
            printf("Carta 1 - São Paulo (SP): %.2f\n" , densidade_populacional1);
            printf("Carta 2 - Rio de Janeiro (RJ): %.2f\n" , densidade_populacional2);

            printf("\n");
        
            if (densidade_populacional1 < densidade_populacional2){ //compara o atributo população

                printf("Resultado: Carta 1  (São Paulo) venceu!\n");

            }else if (densidade_populacional1 > densidade_populacional2){

                printf("Resultado: Carta 2  (Rio de janeiro) venceu!\n");

            } else {
             
                printf("Houve um empate!\n");

             }
        break;

        case 5:

            printf("Comparação de cartas (Atributo: PIB Per capita):\n");
    
            printf("\n");
            // exibe o valor a ser comparado de cada atributo
            printf("Pais: %s\n", pais);
            printf("Carta 1 - São Paulo (SP): %.2f\n" , pib_percapita1);
            printf("Carta 2 - Rio de Janeiro (RJ): %.2f\n" , pib_percapita2);

            printf("\n");
 
            if (pib_percapita1 > pib_percapita2){ //compara o atributo população

                printf("Resultado: Carta 1 (São Paulo) venceu!\n");

            }else if (pib_percapita1 < pib_percapita2){

                printf("Resultado: Carta 2 (Rio de janeiro) venceu!\n");

            } else {
             
                printf("Houve um empate!\n");

            }
        break;

        case 6:
            printf("Comparação de cartas (Atributo: Pontos turisticos):\n");
        
            printf("\n");
            // exibe o valor a ser comparado de cada atributo
            printf("Pais: %s\n", pais);
            printf("Carta 1 - São Paulo (SP): %d\n" , pontosturisticos1);
            printf("Carta 2 - Rio de Janeiro (RJ): %d\n" , pontosturisticos2);
    
            if (pontosturisticos1 > pontosturisticos2){ //compara o atributo população

                printf("Resultado: Carta 1  (São Paulo) venceu!\n");

            }else if (pontosturisticos1 < pontosturisticos2){

                printf("Resultado: Carta 2 (Rio de janeiro) venceu!\n");

            } else {
                    
                printf("Houve um empate!\n");

            }
        break;
       
        default:
            printf("opção invalida!!!");
        break;
        }
    break;

    default:
        printf("opção invalida!!!");
    break;
    }

        

return 0;

}