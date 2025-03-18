#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
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
 
    /*Entrada carta 2*/
    printf("Digite a letra para representar o estado ( Sendo da letra 'A' a 'H' ): ");
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

    /*saida carta 1*/
    printf("\nCarta 1:\nEstado: %s\nCodigo da carta: %s%s\nNome da cidade: %sPopulação: %d\nÁrea da cidade: %fkm²\nPIB: %f\nPontos turisticos: %d", letraEstado ,letraEstado, codigoCarta , nomeCidade, populacao, areaCidade, pib, pontosTuristicos);

    /*saida carta 2*/
    printf("\nCarta 1:\nEstado: %s\nCodigo da carta: %s%s\nNome da cidade: %sPopulação: %d\nÁrea da cidade: %fkm²\nPIB: %f\nPontos turisticos: %d", letraEstado2 ,letraEstado2, codigoCarta2, nomeCidade2, populacao2, areaCidade2, pib2, pontosTuristicos2);


    return 0;
}
