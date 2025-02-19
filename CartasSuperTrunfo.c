#include <stdio.h>

//Desafio Super Trunfo - Cadastro da cartas 

int main() {
    
    char EstadoA, EstadoB;
    char CodigodaCartaA01, CodigodaCartaB02;
    char NomedaCidadeA, NomedaCidadeB;
    int PopulacaoA, PopulacaoB;
    float AreaA, AreaB;
    float PIBA, PIBB;
    int NumerodePontosTuristicosA, NumerodePontosTuristicosB;
     
    printf("Bem vindo ao cadastro das cartas do Jogo Super Trunfo!\n");
    
    printf("Carta: 1\n");
    
    printf("Estado A: ");
    scanf("%s", &EstadoB);
    
    printf("Código: ");
    scanf("%s", &CodigodaCartaA01);
    
    printf("Nome da Cidade: ");
    scanf("%s", &NomedaCidadeA);
    
    printf("População: ");
    scanf("%d", &PopulacaoA);
    
    printf("Área km²: ");
    scanf("%f", &AreaA);
    
    printf("PIB:");
    scanf("%f", &PIBA);
   
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &NumerodePontosTuristicosA);
   
   
    printf("Carta: 2\n");
    printf("Estado B: PE\n");
    printf("Código: B02 \n");
    printf("Nome da Cidade: São Paulo\n");
    printf("População: 8.664.306 \n");
    printf("Área: 1.521,20km² \n");
    printf("PIB:2.719.751.231,00 \n");
    printf("Número de Pontos Turísticos: 36\n");



    return 0;
}
