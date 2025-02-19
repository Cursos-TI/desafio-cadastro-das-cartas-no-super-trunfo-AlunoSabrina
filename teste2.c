#include <stdio.h>

int main (){

    char Carta_1[10]= "A01";
    char Estado_1[20]= "São Paulo";
    char Cidade_1[20]= "Guarulhos";
    int Populacao_1 = 868452;
    int Pontos_Turisticos_1 = 15;
    float Area_1 = 39.542;
    float PIB_1 = 24.352;

    

    printf("Código da carta: %s \n", Carta_1); 
    printf ("Estado: %s \n", Estado_1 );
    printf ("População: %d \n" , Populacao_1);
    printf ("Pontos Turisticos: %d \n", Pontos_Turisticos_1);
    printf ("Area Km: %f \n", Area_1);
    printf ("PIB: %f \n" , PIB_1);

    return 0;
}