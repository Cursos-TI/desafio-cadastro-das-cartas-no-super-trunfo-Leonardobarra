#include <stdio.h>

int main() {

    // Informações das cartas

        // Código: A01                  
        // Cidade: Jequitinhonha                   
        // População: 25560            
        // Área (km²): 3526.43          
        // PIB: 274.83 milhões               
        // Nr pontos turísticos: 4
    
        // Código: A02                  
        // Cidade: Almenara           
        // População: 44420           
        // Área (km²): 2300.71           
        // PIB: 674.91 milhões               
        // Nr pontos turísticos: 8     
         

printf("******Desafio Super Trunfo - Países******\n");

// inserindo as variáveis

char codigo1[4], codigo2[4] = "A01";
char nome1[20], nome2[20] = "JuizdeFora";
int populacao1, populacao2 = 1;
float area1, area2 = 1.21;
float pib1, pib2 = 3.45;
int pontoturistico1, pontoturistico2 = 4;

// dados de entrada do jogador 1

printf("Jogador1, digite o código da cidade - Exemplo: F01:\n");
scanf("%s", &codigo1);

printf("Jogador1, digite o nome da cidade:\n");
scanf("%s", &nome1);

printf("Jogador1, digite a população da cidade:\n");
scanf("%d", &populacao1);

printf("Jogador1, digite a área da cidade (em km²) - Exemplo: 1.2:\n");
scanf("%f", &area1);

printf("Jogador1, digite o PIB da cidade (em milhões) - Exemplo: 358.65:\n");
scanf("%f", &pib1);

printf("Jogador1, digite o número de Pontos Turísticos da cidade:\n");
scanf("%d", &pontoturistico1);

// dados de entrada do jogador 2

printf("Jogador2, digite o código da cidade - Exemplo: F01:\n");
scanf("%s", &codigo2);

printf("Jogador2, digite o nome da cidade:\n");
scanf("%s", &nome2);

printf("Jogador2, digite a população da cidade:\n");
scanf("%d", &populacao2);

printf("Jogador2, digite a área da cidade (em km²) - Exemplo: 1.2:\n");
scanf("%f", &area2);

printf("Jogador2, digite o PIB da cidade (em milhões) - Exemplo: 358.65:\n");
scanf("%f", &pib2);

printf("Jogador2, digite o número de Pontos Turísticos da cidade:\n");
scanf("%d", &pontoturistico2);

// imprimindo os dados das cartas na tela

printf("**********Dados das cartas**********\n");

printf("\n");

printf("CARTA1:\n Código: %s\n Cidade: %s\n População: %d\n Área (Km²): %.2f\n PIB (R$ mi): %.2f\n Pontos Turísticos: %d\n", codigo1, nome1, populacao1, area1, pib1, pontoturistico1);

printf("\n");

printf("CARTA2:\n Código: %s\n Cidade: %s\n População: %d\n Área (Km²): %.2f\n PIB (R$ mi): %.2f\n Pontos Turísticos: %d\n", codigo2, nome2, populacao2, area2, pib2, pontoturistico2);

printf("\n");

    return 0;
}