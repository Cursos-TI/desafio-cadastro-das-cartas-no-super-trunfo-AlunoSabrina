#include <stdio.h>
 
int main (){



char Estado_1[5];
char codigo_1[20], Cidade_1[20];
int Populacao_1 , Pontos_Turisticos_1;
float Area_1, PIB_1;

//cadastro das cartas
printf ("carta 1: \n");

printf ("Digite o Codigo: \n");
scanf (" %s", &codigo_1);
printf ("Digite o Estado: \n");
scanf (" %s", &Estado_1);
printf ("Digite a Cidade: \n");
scanf (" %s", &Cidade_1);
printf ("Digite a Populacao: \n");
scanf (" %d", &Populacao_1);
printf ("Digite a Area: \n");
scanf (" %f", &Area_1);
printf ("Digite o PIB: \n");
scanf (" %f", &PIB_1);
printf ("Digite o numero de Pontos Turisticos:");
scanf (" %d", &Pontos_Turisticos_1);

printf("O Codigo é: %c %s\n", Estado_1, codigo_1);
printf ("A cidade é: %s\n", Cidade_1);
printf ("A população é: %d\n", Populacao_1);
printf ("A aréa é: %f\n", Area_1);
printf ("O PIB é: %f\n", PIB_1);
printf("Quantidade de pontos turisticos é: %d\n", Pontos_Turisticos_1);



return 0;

}