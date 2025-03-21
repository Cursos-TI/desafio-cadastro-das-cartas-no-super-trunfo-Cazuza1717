#include <stdio.h>

int main(){
    /*Variaveis*/
    char letraEstado[2];
    char letraEstado2[2];
    char codigoCarta[3];
    char codigoCarta2[3];
    char nomeCidade[50];
    char nomeCidade2[50];
    int populacao;
    int populacao2;
    float areaCidade;
    float areaCidade2;
    float pib;
    float pib2;
    int pontosTuristicos;
    int pontosTuristicos2;

    /*Entrada de dados carta 1*/
    printf("Digite a letra para representar o estado ( Sendo da letra 'A' a 'H' ): ");
    scanf("%s", letraEstado);
    printf("Digite o codigo da carta (o codigo tem que obter a letra do estado mais um numero de 01 a 04): ");
    scanf("%s", codigoCarta);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, 50, stdin);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade: (obrigatorio colocar o '.' que é usado como virgula): ");
    scanf("%f", &areaCidade);
    printf("Digite o PIB da cidade: (obrigatorio colocar o '.' que é usado como virgula): ");
    scanf("%f", &pib);
    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontosTuristicos);

    float densidade = populacao / areaCidade;
    float porCapta = pib / populacao;

    printf("\n---------------------------------------------------------------------------------------------------\n");
    printf("Vamos agora para a carta 2:");
    printf("\n---------------------------------------------------------------------------------------------------\n");
    
    /*Entrada carta 2*/
    printf("\nDigite a letra para representar o estado ( Sendo da letra 'A' a 'H' ): ");
    scanf("%s", letraEstado2);
    printf("Digite o codigo da carta (o codigo tem que obter a letra do estado mais um numero de 01 a 04): ");
    scanf("%s", codigoCarta2);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, 50, stdin);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade: (obrigatorio colocar o '.' que é usado como virgula): ");
    scanf("%f", &areaCidade2);
    printf("Digite o PIB da cidade: (obrigatorio colocar o '.' que é usado como virgula): ");
    scanf("%f", &pib);
    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontosTuristicos2);
 
    float densidade2 = populacao2 / areaCidade2;
    float porCapta2 = pib2 / populacao2;

    /*saida carta 1*/
    printf("\nCarta 1:\nEstado: %s\nCodigo da carta: %s%s\nNome da cidade: %sPopulação: %.2d\nÁrea da cidade: %.2fkm²\nPIB: %2.f\nPontos turisticos: %d\nDensidade demografica: %.2f hab/km²\nPIB por capta: %.2f\n", letraEstado ,letraEstado, codigoCarta , nomeCidade, populacao, areaCidade, pib, pontosTuristicos,densidade,porCapta);
    printf("\n---------------------------------------------------------------------------------------------------\n");

    /*saida carta 2*/
    printf("\nCarta 1:\nEstado: %s\nCodigo da carta: %s%s\nNome da cidade: %sPopulação: %.2d\nÁrea da cidade: %2.fkm²\nPIB: %2.f\nPontos turisticos: %d\nDensidade demografica: %.2f hab/km²\nPIB por capta: %.2f", letraEstado2 ,letraEstado2, codigoCarta2, nomeCidade2, populacao2, areaCidade2, pib2, pontosTuristicos2);

    return 0;
    

    
}
