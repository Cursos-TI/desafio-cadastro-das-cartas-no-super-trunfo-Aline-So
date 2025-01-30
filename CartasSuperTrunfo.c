#include <stdio.h>

//Desafio Super Trunfo - Cadastro da cartas 

int main() {
    
    char nome;
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;
    

    printf("Digite o nome da cidade: \n");
    scanf("%c", &nome);

    printf("Digite o numero da populacao: \n");
    scanf("%d", &populacao);

    printf("digite o tamanho da area: \n");
    scanf("%f", &area);

    printf("digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da cidade");
    scanf("%d", &pontosturisticos);
    
    printf("Digite o nome da cidade: %c");
    printf("Digite o numero da populacao: %d");
    printf("digite o tamanho da area: %f");
    printf("digite o PIB da cidade: %f");
    printf("Digite o numero de pontos turiscos da cidade: %d");



    return 0;
}
