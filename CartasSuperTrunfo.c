#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

        // Código: A01                  // Código: A02                  // Código: A03                 // Código: A04
        // Cidade: RJ                   // Cidade: Búzios               // Cidade: Macaé               // Cidade: Petrópolis
        // População: 222160            // População: 34480             // População: 30590            // População: 76126
        // Área (km²): 400.69           // Área (km²): 380              // Área (km²): 130             // Área (km²): 360
        // PIB: 12 bi                   // PIB: 3 bi                    // PIB: 5 bi                   // 4 bi
        // Nr pontos turísticos: 21     // Nr pontos turísticos: 18     // Nr Pontos turísticos: 13    // Nr Pontos turísticos: 9
    
        // Código: B01                  // Código: B02                  // Código: B03                 // Código: B04
        // Cidade: Guarulhos            // Cidade: Lorena               // Cidade: Barueri             // Cidade: Santos
        // População: 789600            // População: 215700            // População: 199000           // População: 708156
        // Área (km²): 590              // Área (km²): 270              // Área (km²): 130             // Área (km²): 600
        // PIB: 6 bi                    // PIB: 3 bi                    // PIB: 1 bi                   // 7 bi
        // Nr pontos turísticos: 17     // Nr pontos turísticos: 9      // Nr Pontos turísticos: 6     // Nr Pontos turísticos: 17
    
        // Código: C01                  // Código: C02                  // Código: C03                 // Código: C04
        // Cidade: Uberlândia           // Cidade: Betim                // Cidade: Contagem            // Cidade: Jequitinhonha
        // População: 580650            // População: 498632            // População: 330000           // População: 25684
        // Área (km²): 370              // Área (km²): 780              // Área (km²): 110             // Área (km²): 3.526
        // PIB: 3 bi                    // PIB: 6 bi                    // PIB: 2 bi                   // 320 mi
        // Nr pontos turísticos: 8      // Nr pontos turísticos: 20     // Nr Pontos turísticos: 3     // Nr Pontos turísticos: 2
    
        // Código: D01                  // Código: D02                  // Código: D03                 // Código: D04
        // Cidade: Manaus               // Cidade: Tefé                 // Cidade: Tabatinga           // Cidade: Iranduba
        // População: 689351            // População: 370565            // População: 280600           // População: 23600
        // Área (km²): 480              // Área (km²): 281              // Área (km²): 190             // Área (km²): 80
        // PIB: 7 bi                    // PIB: 3 bi                    // PIB: 1 bi                   // 270 mi
        // Nr pontos turísticos: 7      // Nr pontos turísticos: 3      // Nr Pontos turísticos: 1     // Nr Pontos turísticos: 1

        // Código: E01                  // Código: E02                  // Código: E03                 // Código: E04
        // Cidade: Recife               // Cidade: Jaboatão             // Cidade: Tejipió             // Cidade: Olinda
        // População: 790000            // População: 380020            // População: 90000            // População: 170000
        // Área (km²): 479320           // Área (km²): 190300           // Área (km²): 110             // Área (km²): 90000
        // PIB: 7 bi                    // PIB: 4 bi                    // PIB: 3 bi                   // 3 bi
        // Nr pontos turísticos: 18     // Nr pontos turísticos: 11     // Nr Pontos turísticos: 13    // Nr Pontos turísticos: 14

        // Código: F01                  // Código: F02                  // Código: F03                 // Código: F04
        // Cidade: Joinville            // Cidade: Blumenau             // Cidade: Chapecó             // Cidade: Crisciúma
        // População: 485625            // População: 396554            // População: 458630           // População: 430650
        // Área (km²): 296              // Área (km²): 235640           // Área (km²): 250             // Área (km²): 101
        // PIB: 3 bi                    // PIB: 1 bi                    // PIB: 2 bi                   // 3 bi
        // Nr pontos turísticos: 15     // Nr pontos turísticos: 13     // Nr Pontos turísticos: 9     // Nr Pontos turísticos: 22

        // Código: G01                  // Código: G02                  // Código: G03                 // Código: E04
        // Cidade: Alegrete             // Cidade: Bagé                 // Cidade: Canoas              // Cidade: Olinda
        // População: 298651            // População: 26000             // População: 385000           // População: 170000
        // Área (km²): 109000           // Área (km²): 95               // Área (km²): 375000          // Área (km²): 90000
        // PIB: 2 bi                    // PIB: 3 bi                    // PIB: 7 bi                   // 3 bi
        // Nr pontos turísticos: 15     // Nr pontos turísticos: 3      // Nr Pontos turísticos: 9     // Nr Pontos turísticos: 14

        // Código: H01                  // Código: H02                  // Código: H03                 // Código: H04
        // Cidade: Pacaraima            // cidade: Bonfim               // Cidade: Rorainópolis        // Cidade: Iracema
        // População: 470169            // População: 22104             // População: 36500            // População: 45268
        // Área (km²): 5117.9           // Área (km²): 8028.42          // Área (km²): 163             // Área (km²): 152
        // PIB: 3 bi                    // PIB: 329 mi                  // PIB: 1 bi                   // 3 bi
        // Nr pontos turísticos: 02     // Nr pontos turísticos: 05     // Nr Pontos turísticos: 8     // Nr Pontos turísticos: 4
  
     

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

printf("Desafio Super Trunfo - Países\n");

int populacao = 25;
int pontoTuristico = 1;
float area = 1000.22;
long double PIB = 1000;
char nome[50] = "leonardo a barra";
char codigo[10] = "A01";

printf("Digite o código da cidade:\n");
scanf("%s", &nome);

printf("Digite o nome da cidade:\n");
scanf("%s", &nome);

printf("Digite a população da cidade:\n");
scanf("%d", &populacao);

printf("Digite a área da cidade (em km²):\n");
scanf("%f", &area);

printf("Digite o PIB da cidade:\n");
scanf("%ld", &PIB);

printf("Digite o número de Pontos Turísticos da cidade:\n");
scanf("%d", &pontoTuristico);

printf("Código: %s\n", codigo);
printf("Cidade: %s\n", nome);
printf("População: %d\n", populacao);
printf("Área (km²): %f\n", area);
printf("PIB: %ld\n", PIB);
printf("Quantidade de Pontos Turísticos: %d\n", pontoTuristico);

    return 0;
}