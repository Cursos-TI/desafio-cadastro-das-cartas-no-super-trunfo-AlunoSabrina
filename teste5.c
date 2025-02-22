#include <stdio.h>
 
int main (){



char estado_1[6], estado_2[5];
char codigo_1[20], cidade_1[20], codigo_2[20], cidade_2[20];
int populacao_1 , pontos_turisticos_1, populacao_2, pontos_turisticos_2;
float area_1, PIB_1, area_2, PIB_2;

//cadastro das cartas
printf ("carta 1: \n");

printf ("Digite o Codigo: \n");
scanf (" %s", &codigo_1);
printf ("Digite o Estado: \n");
scanf (" %s", &estado_1);
printf ("Digite a Cidade: \n");
scanf (" %s", &cidade_1);
printf ("Digite a Populacao: \n");
scanf (" %d", &populacao_1);
printf ("Digite a Area: \n");
scanf (" %f", &area_1);
printf ("Digite o PIB: \n");
scanf (" %f", &PIB_1);
printf ("Digite o numero de Pontos Turisticos: \n");
scanf (" %d", &pontos_turisticos_1);
printf (" \n");
printf("O codigo é: %s %s\n", estado_1, codigo_1);
printf ("A cidade é: %s\n", cidade_1);
printf ("A população é: %d\n", populacao_1);
printf ("A aréa é: %f\n", area_1);
printf ("O PIB é: %f\n", PIB_1);
printf("Quantidade de pontos turisticos é: %d \n", pontos_turisticos_1);
printf (" \n");

printf ("Carta 2: \n");
printf ("Digite o codigo: \n");
scanf (" %s", &codigo_2);
printf ("Digite o estado: \n");
scanf (" %s", &estado_2);
printf ("Digite a cidade: \n");
scanf (" %s", &cidade_2);
printf ("Digite a população: \n");
scanf (" %d", &populacao_2);
printf ("Digite a area: \n");
scanf (" %f", &area_2);
printf ("Digite o PIB: \n");
scanf (" %f", &PIB_2);
printf ("Digite o numero de pontos turisticos: \n");
scanf (" %d", &pontos_turisticos_2);
printf (" \n");
printf ("O código é: %s %s \n", codigo_2, estado_2);
printf ("A cidade é: %s \n", cidade_2);
printf ("A população é: %d \n", populacao_2);
printf ("A area é: %f \n", area_2);
printf ("O PIB é: %f \n", PIB_2);
printf ("O numero dos pontos turisticos é: %d", pontos_turisticos_2);






return 0;

}