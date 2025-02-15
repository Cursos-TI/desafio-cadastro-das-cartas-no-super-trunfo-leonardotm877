#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");

      // Declaração de variáveis para armazenar nomes de países
    char pais[20] = "Brasil";
    char pais_1[20] = "EUA";
    char codigo[90]; // Variável para armazenar código do estado/cidade
    float populacao1, populacao2; // Variável para armazenar população
    float area1, area2; // Variável para armazenar a área
    double pib1, pib2; // Variável para armazenar o PIB
    float turismo1, turismo2; // Variável para armazenar os pontos turísticos
    float pibPercapita1, pibPercapita2; // Variável para armazenar o PIB per capita da cidade
    float densidade1, densidade2; // Variável para armazenar a densidade populacional
    float super_poder1, super_poder2;

// 1° País - Estado A - 1° Cidade
// Coleta as informações de diferentes cidades deste país
printf ("País: Brasil \n");
printf ("Código da carta: A01 \n");

printf ("População: ");
scanf ("%f", &populacao1);

printf ("Área: ");
scanf ("%f", &area1);

printf ("PIB: ");
scanf ("%lf", &pib1);

printf ("Pontos Turísticos: ");
scanf ("%f", &turismo1);

pibPercapita1 = pib1 / populacao1; // Cálculo PIB percapita = PIB dividido pela população
densidade1 = populacao1 / area1; // Cálculo da Densidade = população dividida pela área
super_poder1 = populacao1 + area1 + pib1 + turismo1;

// Exibe as informações digitadas pelo usuário
printf ("\n");
printf ("País: %s \n", pais);
printf ("Código da carta: A01 %s \n", codigo);
printf ("População: %.3f \n", populacao1);
printf ("Área: %.0f km² \n", area1);
printf ("PIB: R$ %.3lf \n", pib1);
printf ("Pontos Turísticos: %.0f \n", turismo1);
printf ("PIB per capita: %f \n", pibPercapita1);
printf ("Densidade: %f \n", densidade1);
printf ("Super Poder: %.2f \n", super_poder1);
printf ("\n");

// 1° País - Estado A (Brasil) - 2° Cidade (02)
// Coleta as informações de diferentes cidades deste país
printf ("País: Brasil \n");
printf ("Código da carta: A02 \n");

printf ("População: ");
scanf ("%f", &populacao2);

printf ("Área: ");
scanf ("%f", &area2);

printf ("PIB: ");
scanf ("%lf", &pib2);

printf("Pontos Turísticos: ");
scanf("%f", &turismo2);

pibPercapita2 = pib2 / populacao2; // Cálculo PIB percapita = PIB dividido pela população
densidade2 = populacao2 / area2; // Cálculo da Densidade = população dividida pela área
super_poder2 = populacao2 + area2 + pib2 + turismo2;


// Exibe as informações digitadas pelo usuário
printf ("\n");
printf ("País: %s \n", pais);
printf ("Código da carta: A02 %s \n", codigo);
printf ("População: %.3f \n", populacao2);
printf ("Área: %.0f km² \n", area2);
printf ("PIB: R$ %.3lf \n", pib2);
printf ("Pontos Turísticos: %.0f \n", turismo2);
printf ("PIB per capita: %f \n", pibPercapita2);
printf ("Densidade: %f \n", densidade2);
printf ("Super Poder: %.2f \n", super_poder2);
printf ("\n");

// Comparação das cartas
printf ("\n ----- Resultado da Comparação ----- \n");
printf ("População: %s venceu \n", (populacao1 > populacao2) ? "Brasil" : "EUA");
printf ("Área: %s venceu \n", (area1 > area2) ? "Brasil" : "EUA");
printf ("PIB: %s venceu \n", (pib1 > pib2) ? "Brasil" : "EUA");
printf ("Pontos Turísticos: %s venceu \n", (turismo1 > turismo2) ? "Brasil" : "EUA");
printf ("Super Poder: %s venceu \n", (super_poder1 > super_poder2) ? "Brasil" : "EUA");
printf ("Densidade Populacional: %s venceu \n", (densidade1 < densidade2) ? "Brasil" : "EUA");
printf ("PIB per capita: %s venceu \n", (pibPercapita1 > pibPercapita2) ? "Brasil" : "EUA");



    return 0;
    
}
