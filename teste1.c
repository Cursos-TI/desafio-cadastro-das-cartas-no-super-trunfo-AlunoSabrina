#include <stdio.h>

int main (){

    char Estado;
    char Carta[20];
    char Cidade[20];
    int Populacao;
    float Area_km;
    float PIB;
    int Pontos_turisticos;

    printf ("Digite o Estado:\n");
    scanf ("%s", &Estado);

    printf ("Digite o Código:\n");
    scanf ("%s", &Carta);

    printf ("Digite a Cidade:\n");
    scanf ("%s", &Cidade);

    printf ("Digite a População:\n");
    scanf ("%d", &Populacao);

    printf ("Daigite a Aréa em Km²: \n");
    scanf ("%f", &Area_km);

    printf ("Digite o PIB:\n");
    scanf ("%f", &PIB);

    printf ("Digite os Pontos turisticos:\n");
    scanf ("%d", &Pontos_turisticos);

    return 0;
}




