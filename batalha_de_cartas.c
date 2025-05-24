/* 
 * Desafio: Nível Novato - Super Trunfo
 * Este programa coleta e exibe os dados de duas cartas, cada uma representando uma cidade com atributos:
 * estado, código, nome, população, área, PIB e número de pontos turísticos.
 * Os dados são coletados via entrada do usuário e exibidos, sem uso de estruturas de repetição ou decisão,
 * conforme restrição do desafio.
 * Formato esperado para entrada:
 * - Estado: uma letra de 'A' a 'H' (representando um dos oito estados).
 * - Código: letra do estado seguida de dois dígitos (01 a 04, e.g., A01, B02).
 * - Nome da cidade: string com até 99 caracteres, permitindo espaços.
 * - População, área, PIB e pontos turísticos: valores numéricos positivos.
 * Observação: O programa assume entradas válidas, sem validação.
 * 
 * ------------ATUALIÇÃO DO PROGRAMA------------
 * O programa foi atualizado para incluir o Cálculo da Densidade Populacional e o PIB per capita.
 */
#include <stdio.h>
// Fornece a função strcspn para manipulação de strings, usada para remover '\n' do fgets
#include <string.h>

int main() {
    // Declaração das variáveis para armazenar os atributos da primeira carta
    char estado1[2]; 
    char codigo_da_carta1[4]; 
    char nome_da_cidade1[100];
    unsigned long int populacao1; 
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;
    float densidade_populacional1;
    float PIB_per_capita1;
    float superPoder1;

    // Declaração das variáveis para armazenar os atributos da segunda carta
    char estado2[2]; 
    char codigo_da_carta2[2]; 
    char nome_da_cidade2[100];
    unsigned long int populacao2; 
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    float densidade_populacional2;
    float PIB_per_capita2;
    float superPoder2;

    // ====== Entrada da carta 1 ======
    // Coleta os atributos da primiera carta assumindo entradas válidas
    printf("DADOS DA CARTA 1:\n");
    printf("Digite o Estado (uma letra de 'A' a 'H' representando os oito estados): \n");
    scanf("%s", estado1);


    printf("Digite o código da carta (Letra do Estado seguida de um número entre 01 e 04): \n");
    scanf("%s", codigo_da_carta1);

    // Limpa o buffer de entrada para evitar problema com a leitura da string
    getchar();

    printf("Digite o nome da Cidade: \n");
    fgets(nome_da_cidade1, sizeof(nome_da_cidade1), stdin);
    // Remove o caratere da nova linha capturado pelo fgets para exibição limpa
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0'; 


    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);


    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);

    // Calcula densidade populacional (habitantes por km²)
    densidade_populacional1 = (float) populacao1 / area1;


    printf("Digite o PIB da cidade (use ponto para decimais): \n");
    scanf("%f", &PIB1);

    // Calcula PIB per capita (PIB em reais dividido pela população)
    PIB_per_capita1 = (PIB1 * 1e9f) / (float)populacao1;


    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos1);



    // ====== Entrada da carta 2 ======
    // Coleta os atributos da segunda carta seguindo o mesmo padrão da primeira
    printf("\n\nDADOS DA CARTA 2:\n");
    printf("Digite o Estado (uma letra de 'A' a 'H' representando os oito estados): \n");
    scanf("%s", estado2);


    printf("Digite o código da carta (Letra do Estado seguida de um número entre 01 e 04): \n");
    scanf("%s", codigo_da_carta2);

    // Limpa o buffer de entrada para evitar problema com a leitura da string
    getchar();

    printf("Digite o nome da Cidade: \n");
    fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);
    // Remove o caratere da nova linha capturado pelo fgets para exibição limpa
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0';


    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);


    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    // Calcula densidade populacional (habitantes por km²)
    densidade_populacional2 = (float) populacao2 / area2;


    printf("Digite o PIB da cidade (use ponto para decimais): \n");
    scanf("%f", &PIB2);

    // Calcula PIB per capita (PIB em reais dividido pela população)
    PIB_per_capita2 = (PIB2 * 1e9f) / (float)populacao2;


    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);



    // ====== Exibir cartas ======
    // Exibe os atributos das duas cartas em formato organizado
    printf("\n=============================\n");
    printf("\n\nDADOS DA CARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    // Formata a exibição da área com três casas decimais para maior precisão
    printf("Área: %.2f km²\n", area1);
    // Formata o PIB com 1 casa decimal para consistência com valores monetários
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.0f reais\n", PIB_per_capita1);


    printf("\n\nDADOS DA CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    // Formata a exibição da área com três casas decimais para maior precisão
    printf("Área: %.2f km²\n", area2);
    // Formata o PIB com 1 casa decimal para consistência com valores monetários
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per capita: %.0f reais\n", PIB_per_capita2);

    return 0;
}