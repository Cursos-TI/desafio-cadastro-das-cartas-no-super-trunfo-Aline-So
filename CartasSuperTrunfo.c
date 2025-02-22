#include <stdio.h>

//Desafio Super Trunfo - Cadastro da cartas (nível Novato).

int main() {
    

    char Carta1, Carta2;
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
   
    printf("Número de Pontos Turísticos:");
    scanf("%d", &NumerodePontosTuristicosA);
   
    //Calculando entrada de informaçãoes e apresentado resultados Primeira Carta!(Nível Aventureiro).
    
    DensidadePopulacionalA = (PopulacaoA / AreaA);
    
    printf("A densidade Populacional da primeira Cidade é: %f\n", DensidadePopulacionalA  );
    
    PIBperCapitaA = (PIBA / PopulacaoA);
    
    printf("PIB per Capita da primeira Cidade é: %f\n", PIBperCapitaA);


    //Configurando Entrada e Saída de dados da segunda carta!(Nível Novato)
    printf("Carta: 2\n");
    
    printf("Estado B:");
    scanf("%s", &EstadoB);
    
    printf("Código: ");
    scanf("%s", &CodigodaCartaB02);
    
    printf("Nome da Cidade: ");
    scanf("%s", &NomedaCidadeB);
    
    printf("População: ");
    scanf("%d", &PopulacaoB);
    
    printf("Área km²: ");
    scanf("%f", &AreaB);
    
    printf("PIB: ");
    scanf("%f", &PIBB);
    
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &NumerodePontosTuristicosB);

    
     //Calculando entrada de informaçãoes e apresentado resultados Segunda Carta!(Nível Aventureiro).
    DensidadePopulacionalB = (PopulacaoB / AreaB);
    
    printf("A Densidade Populacional da segunda Cidade é: %f\n", DensidadePopulacionalB);
   
    PIBperCapitaB = (PIBB / PopulacaoB);
   
    printf("O PIB per Capita da segunda Cidade é: %f\n", PIBperCapitaB  );

    //Tema 2 Nivel Novato
    printf("***Carta com Maior Número de Pontos Turísticos Vence***\n");


   if( NumerodePontosTuristicosA > NumerodePontosTuristicosB ){
    printf("Carta 1 venceu!\n ");
   } else{
    printf("Carta 2 Venceu!\n ");
   }
   
   printf("Vence o País com menor Densidade Populacional\n");
   
   if(DensidadePopulacionalA < DensidadePopulacionalB){
    printf("Carta 1 Venceu:\n");
   } else{
    printf("Carta 2 Venceu:\n");
   }
   return 0;
}
