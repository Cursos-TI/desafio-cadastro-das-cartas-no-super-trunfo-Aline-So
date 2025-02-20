#include <stdio.h>

//Desafio Super Trunfo - Cadastro da cartas (nível Novato).

int main() {
    
    char EstadoA, EstadoB;
    char CodigodaCartaA01, CodigodaCartaB02;
    char NomedaCidadeA, NomedaCidadeB;
    int PopulacaoA, PopulacaoB;
    float AreaA, AreaB;
    float PIBA, PIBB;
    int NumerodePontosTuristicosA, NumerodePontosTuristicosB;
    
    //Calculando Densidade Populacional e PIB per Capita (desafio Aventureiro). 
    float DensidadePopulacionalA, DensidadePopulacionalB;
    float PIBperCapitaA, PIBperCapitaB;
    
    //Batalha de Cartas no Super Trunfo (Desafio Mestre).
    float SuperPoderCartaA01;
    float SuperPoderCartaB02;
    
    
    //Configurando Entrada e Saída de dados da primeira carta!(Nível Novato)
    printf("Bem vindo ao Jogo Super Trunfo!\n");
    
    
    
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
   
    //Calculando entrada de informaçãoes e apresentado resultados Primeira Carta!(Nível Aventureiro).
    
    DensidadePopulacionalA = (PopulacaoA + AreaA) / 2;
    
    printf("A densidade Populacional da primeira Cidade é: %f", DensidadePopulacionalA  );
    
    PIBperCapitaA = (PIBA + PopulacaoA) / 2;
    
    printf("PIB per Capita da primeira Cidade é: %f", PIBperCapitaA );


    //Configurando Entrada e Saída de dados da segunda carta!(Nível Novato)
    printf("Carta: 2\n");
    
    printf("Estado B: PE\n");
    scanf("%s", &EstadoB);
    
    printf("Código: B02 \n");
    scanf("%s", &CodigodaCartaB02);
    
    printf("Nome da Cidade: São Paulo\n");
    scanf("%s", &NomedaCidadeB);
    
    printf("População: 8.664.306 \n");
    scanf("%d", &PopulacaoB);
    
    printf("Área: 1.521,20km² \n");
    scanf("%f", &AreaB);
    
    printf("PIB:2.719.751.231,00 \n");
    scanf("%f", &PIBB);
    
    printf("Número de Pontos Turísticos: 36\n");
    scanf("%d", &NumerodePontosTuristicosB);

    
     //Calculando entrada de informaçãoes e apresentado resultados Segunda Carta!(Nível Aventureiro).
    DensidadePopulacionalB = (PopulacaoB + AreaB) / 2;
    
    printf("A Densidade Populacional da segunda Cidade é: %f", DensidadePopulacionalB);
   
    PIBperCapitaB = (PIBB + PopulacaoB)/ 2;
   
    printf("O PIB per Capita da segunda Cidade é: %f", PIBperCapitaB  );
   
   //Batalha de Cartas no Super Trunfo/ Comparação entre Carta A01 e Carta B02 (Desafio Mestre).
   printf("")
    
   
   
   
   
   return 0;
}
