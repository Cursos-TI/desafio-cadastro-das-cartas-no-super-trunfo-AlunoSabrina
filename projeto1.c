#include <stdio.h>

int main (){

    char Estado;
    char Código_carta[20];
    char Cidade[20];
    int População;
    float Aréa_km²;
    float PIB;
    int Pontos_turisticos;

    printf ("Digite o Estado:\n");
    scanf ("%s \n", &Estado);

    printf ("Digite o Código:\n");
    scanf ("%s \n", &Código_carta);

    printf ("Digite a Cidade:\n");
    scanf ("%s \n", &Cidade);

    printf ("Digite a População:\n");
    scanf ("%d \n", &População);

    printf ("Daigite a Aréa em Km²: \n");
    scanf ("%f \n", &Aréa_km²);

    printf ("Digite o PIB:\n");
    scanf ("%f \n", &PIB);

    printf ("Digite os Pontos turisticos:\n");
    scanf ("%d \n, &Pontos_turistios");

    return 0;

}