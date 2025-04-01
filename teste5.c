#include <stdio.h>
 
int main (){

//Aluno: Sabrina Mantovani Saraiva// 
//Jogo Super Trunfo, vamos criar os dados de duas cartas.//
//Usuario precisa inserir no terminal os dados seguintes: //


//variavéis cartas 1 e 2.//
char estado_1[6], estado_2[5];
char codigo_1[20], cidade_1[20], codigo_2[20], cidade_2[20];
int populacao_1 , pontos_turisticos_1, populacao_2, pontos_turisticos_2;
float area_1, PIB_1, area_2, PIB_2;
float densidade_populacional1, densidade_populacional2;
float PIB.per.capita1, PIB.per.capita2;
float calculo1, calculo2;



// Dados Carta 1 // 
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

//Exibindos os dados carta 1: // 
printf("O codigo é: %s %s\n", estado_1, codigo_1);
printf ("A cidade é: %s\n", cidade_1);
printf ("A população é: %d\n", populacao_1);
printf ("A aréa é: %f\n", area_1);
printf ("O PIB é: %f\n", PIB_1);
printf("Quantidade de pontos turisticos é: %d \n", pontos_turisticos_1);
printf (" \n");


// Dados Carta 2 // 
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

//Exibindo os dados carta 2: // 
printf ("O código é: %s %s \n", codigo_2, estado_2);
printf ("A cidade é: %s \n", cidade_2);
printf ("A população é: %d \n", populacao_2);
printf ("A area é: %f \n", area_2);
printf ("O PIB é: %f \n", PIB_2);
printf ("O numero dos pontos turisticos é: %d \n", pontos_turisticos_2);
printf ("\n\n");


//Calculo da Densidade Populacional - Aréa *Carta 1: // 
densidade_populacional1 = populacao_1 / area_1 "\n";

//Calculo de PIB per Capita da Carta - População *Carta 1: //
PIB.per.capita1 = PIB_1 / populacao_1 "\n";  

printf("Densidade Populacional: %.2f\n",densidade_populacional1);
printf("PIB per Capita: %.2f\n", PIB.per.capita1);
printf ("\n\n");

//Calculo Densidade Populacional - Aréa *Carta 2: //
densidade_populacional2 = populacao_2 / area_2 "\n";

//Calculo de PIB per Capita da Carta - População *Carta 2: //
PIB.per.capita2 = PIB_2 / populacao_2 "\n";

printf("Densidade Populacional: %.2f\n",densidade_populacional2);
printf("PIB per Capita: %.2f\n", PIB.per.capita2);
printf ("\n\n");











return 0;

}