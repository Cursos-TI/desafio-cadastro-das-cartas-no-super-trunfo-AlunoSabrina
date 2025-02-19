#include <stdio.h>

int main (){

    char Carta_1[20], Cidade_1[20];
    int Populacao_1, PIB_percapita_1, Pontos_Turisticos_1;
    float Densidade1, PIB_percapita_2, Area_km_1, PIB_1;

    char Carta_2[20], Cidade_2[20];
    int Populacao_2, Pontos_Turisticos_2;
    float Densidade2, Area_km_2, PIB_2;

    printf ("CARTA 1\n");

    printf ("Digite a carta:\n");
    scanf ("%s", &Carta_1);

    printf ("Digite a Cidade:\n");
    scanf ("%s", &Cidade_1);

    printf ("Digite a Populacao:\n");
    scanf ("%d", &Populacao_1);

    printf ("Digite a Area:\n");
    scanf ("%f", &Area_km_1);

    printf ("Digite o PIB:\n");
    scanf ("%d", &PIB_1);

    printf ("Digite a quantidade de Pontos Turisticos:\n");
    scanf ("%d", &Pontos_Turisticos_1);




    printf ("CARTA 2\n");



    printf ("Digite a Carta:\n");
    scanf ("%s", &Carta_2);

    printf ("Digite a Cidade:\n");
    scanf ("%s", &Cidade_2);

    printf ("Digite a Populacao:\n");
    scanf ("%d", &Populacao_2);

    printf ("Digite a Area:\n");
    scanf ("%f", &Area_km_2);

    printf ("Digite o PIB:\n");
    scanf ("%f", &PIB_2);

    printf ("Digite a quantidade de Pontos Turisticos:\n");
    scanf ("%d", &Pontos_Turisticos_2);



    //Calculos das propriedades

    Densidade1 = Populacao_1 /  Area_km_1;
    PIB_1 = (PIB_1* 10000000) / Populacao_1;

    Densidade2 = Populacao_2 / Area_km_2;
    PIB_2 = (PIB_2* 10000000) / Pontos_Turisticos_2;



    printf ("--COMPARACAO DAS CARTAS--\n");
    //Comparação das propriedades


    printf ("Area em Km²:\n");
    if (Area_km_1 < Area_km_2);

    printf ("Vencedores: %s (Menor Area)\n",Cidade_1);
    else if (Area_km_1 > Area_km_2)
    printf ("Vencedores: %s (Menor Area)\n",Cidade_2);
    else
    printf ("Empare\n");


    printf ("Populacao:");
    if (Populacao_1 > Populacao_2);
    printf ("Vencedora: %s\n",Cidade_1);
    else if (Populacao_1 < Populacao_2);
    printf ("Vencedores: %s\n", Cidade_20);
    else
    printf ("Empate\n");
    
    
    printf ("PIB:");
    if (PIB_1 > PIB_2);
    Printf ("Vencedor: %s\n", Cidade_1);
    else if (PIB_1 > PIB_2);
    printf ("Vencedor: %s\n", Cidade_2);
    else
    printf ("Empate\n");


    printf ("PIB per catipa:");
    if (PIB_percapita_1 > PIB_percapita_2);
    printf ("Vencedor: %s\n, Cidade_1");
    else if (PIB_percapita_1 < PIB_percapita_2);
    printf ("Vencedor: $s\n", Cidade_2);
    else
    printf ("Empate\n");


    printf ("Pontos Turisticos");
 
}





