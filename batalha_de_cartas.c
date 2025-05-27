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
 * 
 * ------------SEGUNDA ATUALIÇÃO DO PROGRAMA------------
 * O programa foi atualizado para implementar a lógica de comparação entre as duas cartas do Super Trunfo (batalha de cartas), determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder". 
 
 * ------------TERCEIRA ATUALIÇÃO DO PROGRAMA------------
 * O foco deste nível é a comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else para determinar, com base em um dos atributos escolhidos, a carta vencedora. 
 * 
 * ------------QUARTA ATUALIÇÃO DO PROGRAMA------------
 * Implementar um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Logo, as cartas preenchidadas não serão mais com cidades, mas sim com países.
 */
#include <stdio.h>
// Fornece a função strcspn para manipulação de strings, usada para remover '\n' do fgets
#include <string.h>

int main() {
    int opcao;
    // Declaração das variáveis para armazenar os atributos da primeira carta
    char pais1[2]; 
    char codigo_da_carta1[4]; 
    char nome_do_pais1[100];
    unsigned long int populacao1; 
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;
    float densidade_populacional1;
    float inverso_densidade1;
    float PIB_per_capita1;
    float superPoder1;

    // Declaração das variáveis para armazenar os atributos da segunda carta
    char pais2[2]; 
    char codigo_da_carta2[4]; 
    char nome_do_pais2[100];
    unsigned long int populacao2; 
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    float densidade_populacional2;
    float inverso_densidade2;
    float PIB_per_capita2;
    float superPoder2;

    // ====== Entrada da carta 1 ======
    // Coleta os atributos da primiera carta assumindo entradas válidas
    printf("DADOS DA CARTA 1:\n");
    printf("Digite a letra inicial do País (Ex: B para Brasil, F para França): \n");
    scanf("%s", pais1);


    printf("Digite o código da carta (Letra do País seguida de um número entre 01 e 04): \n");
    scanf("%s", codigo_da_carta1);

    // Limpa o buffer de entrada para evitar problema com a leitura da string
    getchar();

    printf("Digite o nome do País: \n");
    fgets(nome_do_pais1, sizeof(nome_do_pais1), stdin);
    // Remove o caratere da nova linha capturado pelo fgets para exibição limpa
    nome_do_pais1[strcspn(nome_do_pais1, "\n")] = '\0'; 


    printf("Digite o número de habitantes do País: \n");
    scanf("%lu", &populacao1);


    printf("Digite a área do País em km²: \n");
    scanf("%f", &area1);

    // Calcula densidade populacional (habitantes por km²)
    densidade_populacional1 = (float) populacao1 / area1;

    // Calcula o inverso da densidade populacional (km² por habitante)
    inverso_densidade1 = area1 / (float) populacao1;


    printf("Digite o PIB do País (em bilhões, ex: 34.5): \n");
    scanf("%f", &PIB1);

    // Calcula PIB per capita (PIB em reais dividido pela população)
    PIB_per_capita1 = (PIB1 * 1e9f) / (float)populacao1;


    printf("Digite o número de pontos turísticos do País: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Calcula o superpoder da carta
    superPoder1 = ((float)populacao1) + (area1) + (PIB1 * 1e9f) + ((float)numero_de_pontos_turisticos1) + (inverso_densidade1) + (PIB_per_capita1);



    // ====== Entrada da carta 2 ======
    // Coleta os atributos da segunda carta seguindo o mesmo padrão da primeira
    printf("\n\nDADOS DA CARTA 2:\n");
    printf("Digite a letra inicial do País (Ex: B para Brasil, F para França): \n");
    scanf("%s", pais2);


    printf("Digite o código da carta (Letra do País seguida de um número entre 01 e 04): \n");
    scanf("%s", codigo_da_carta2);

    // Limpa o buffer de entrada para evitar problema com a leitura da string
    getchar();

    printf("Digite o nome do Pais: \n");
    fgets(nome_do_pais2, sizeof(nome_do_pais2), stdin);
    // Remove o caratere da nova linha capturado pelo fgets para exibição limpa
    nome_do_pais2[strcspn(nome_do_pais2, "\n")] = '\0';


    printf("Digite o número de habitantes do Pais: \n");
    scanf("%lu", &populacao2);


    printf("Digite a área do País em km²: \n");
    scanf("%f", &area2);

    // Calcula densidade populacional (habitantes por km²)
    densidade_populacional2 = (float) populacao2 / area2;

    // Calcula o inverso da densidade populacional (km² por habitante)
    inverso_densidade2 = area2 / (float) populacao2;
    


    printf("Digite o PIB do País (use ponto para decimais, tipo: 35.6): \n");
    scanf("%f", &PIB2);

    // Calcula PIB per capita (PIB em reais dividido pela população)
    PIB_per_capita2 = (PIB2 * 1e9f) / (float)populacao2;


    printf("Digite o número de pontos turísticos do País: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Calcula o superpoder da carta
    superPoder2 = ((float)populacao2) + (area2) + (PIB2 * 1e9f) + ((float)numero_de_pontos_turisticos2) + (inverso_densidade2) + (PIB_per_capita2);

    // ====== Exibir cartas ======
    // Exibe os atributos das duas cartas em formato organizado
    printf("\n=========================================\n");
    printf("\n\nDADOS DA CARTA 1:\n");
    printf("País: %s\n", pais1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome do País: %s\n", nome_do_pais1);
    printf("População: %lu\n", populacao1);
    // Formata a exibição da área com duas casas decimais
    printf("Área: %.2f km²\n", area1);
    // Formata o PIB com 2 casa decimal para consistência com valores monetários
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.0f reais\n", PIB_per_capita1);
    printf("Superpoder: %.2f\n", superPoder1);
    printf("\n=========================================\n");


    printf("\n\nDADOS DA CARTA 2:\n");
    printf("País: %s\n", pais2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome do Pais: %s\n", nome_do_pais2);
    printf("População: %lu\n", populacao2);
    // Formata a exibição da área com duas casas decimais
    printf("Área: %.2f km²\n", area2);
    // Formata o PIB com 2 casa decimal para consistência com valores monetários
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.0f reais\n", PIB_per_capita2);
    printf("Superpoder: %.2f\n", superPoder2);
    printf("\n=========================================\n");



    // Menu interativo para escolha de atributos de comparação pelo usuário, com switch
    printf("\n==== COMPARAÇÃO DE ATRIBUTOS ====:\n");
    printf("Opções para compara as cartas:");
    printf("\n1. População");
    printf("\n2. Área");
    printf("\n3. PIB");
    printf("\n4. Número de Pontos Turísticos");
    printf("\n5. Densidade Demográfica");
    printf("\n6. PIB per Capita");
    printf("\nDigite a opção desejada (1-6): ");
    scanf("%d", &opcao);

    // Lógica para ler a opção do usuário e realizar a comparação 
    switch (opcao)
    {
    case 1:
        if (populacao1 > populacao2) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s \n", nome_do_pais1);   
            printf("País: %s \n", nome_do_pais2);   
            printf("Atributo de Comparação: População\n");   
            printf("Valor Carta 1: %lu\n", populacao1);
            printf ("Valor Carta 2: %lu\n", populacao2);
            printf("Carta 1 (%s) venceu na comparação de População\n", nome_do_pais1);  
        } else if (populacao2 > populacao1) {
            printf("===== Resultado da Comparção =====\n");
            printf("País: %s \n", nome_do_pais2);   
            printf("País: %s \n", nome_do_pais1);   
            printf("Atributo de Comparação: População\n");   
            printf("Valor Carta 2: %lu\n", populacao2);
            printf ("Valor Carta 1: %lu\n", populacao1);
            printf("Carta 2 (%s) venceu na comparação de População\n", nome_do_pais1);
        } else {
            printf("Houve um empate! As cartas possuem a mesma população.\n");
        }
        break;
    case 2:
        if (area1 > area2) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s \n", nome_do_pais1);   
            printf("País: %s \n", nome_do_pais2);   
            printf("Atributo de Comparação: Área\n");   
            printf("Valor Carta 1: %lu\n", area1);
            printf ("Valor Carta 2: %lu\n", area2);
            printf("Carta 1 (%s) venceu na comparação de Área\n", nome_do_pais1);  
        } else if (area2 > area1) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s \n", nome_do_pais2);   
            printf("País: %s \n", nome_do_pais1);   
            printf("Atributo de Comparação: Área\n");   
            printf("Valor Carta 2: %lu\n", area2);
            printf ("Valor Carta 1: %lu\n", area1);
            printf("Carta 2 (%s) venceu na comparação de Área\n", nome_do_pais2);
        } else {
            printf("Houve um empate! As cartas possuem a mesma área.\n");
        }
        break;
    case 3:
        if (PIB1 > PIB2) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s \n", nome_do_pais1);   
            printf("País: %s \n", nome_do_pais2);   
            printf("Atributo de Comparação: PIB\n");   
            printf("Valor Carta 1: %lu\n", PIB1);
            printf ("Valor Carta 2: %lu\n", PIB2);
            printf("Carta 1 (%s) venceu na comparação de PIB\n", nome_do_pais1);  
        } else if (PIB2 > PIB1) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s \n", nome_do_pais2);   
            printf("País: %s \n", nome_do_pais1);   
            printf("Atributo de Comparação: Área\n");   
            printf("Valor Carta 2: %lu\n", PIB2);
            printf ("Valor Carta 1: %lu\n", PIB1);
            printf("Carta 2 (%s) venceu na comparação de PIB\n", nome_do_pais2);
        } else {
            printf("Houve um empate! As cartas possuem o mesmo PIB.\n");
        }
        break;
    case 4:
        if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s \n", nome_do_pais1);   
            printf("País: %s \n", nome_do_pais2);   
            printf("Atributo de Comparação: Pontos Turísticos\n");   
            printf("Valor Carta 1: %d\n", numero_de_pontos_turisticos1);
            printf ("Valor Carta 2: %d\n", numero_de_pontos_turisticos2);
            printf("Carta 1 (%s) venceu na comparação de Número de Pontos Turísticos\n", nome_do_pais1);  
        } else if (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s \n", nome_do_pais2);   
            printf("País: %s \n", nome_do_pais1);   
            printf("Atributo de Comparação: Pontos Turísticos\n");   
            printf("Valor Carta 2: %d\n", numero_de_pontos_turisticos2);
            printf ("Valor Carta 1: %d\n", numero_de_pontos_turisticos1);
            printf("Carta 2 (%s) venceu na comparação de Número de Pontos Turísitcos\n", nome_do_pais2);
        } else {
            printf("Houve um empate! As cartas possuem o mesmo Número de Pontos Turísitcos.\n");
        }
        break;
    case 5:
        if (inverso_densidade1 < inverso_densidade2) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s \n", nome_do_pais1);   
            printf("País: %s \n", nome_do_pais2);   
            printf("Atributo de Comparação: Densidade Demográfica\n");   
            printf("Valor Carta 1: %.2f\n", inverso_densidade1);
            printf ("Valor Carta 2: %.2f\n", inverso_densidade2);
            printf("Carta 1 (%s) venceu na comparação de Densidade Demográfica. Pois vence a carta com menor valor.\n", nome_do_pais1);  
        } else if (inverso_densidade2 < inverso_densidade1) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s\n", nome_do_pais2);   
            printf("País: %s\n", nome_do_pais1);   
            printf("Atributo de Comparação: Densidade Demográfica\n");   
            printf("Valor Carta 2: %.2f\n", inverso_densidade2);
            printf ("Valor Carta 1: %.2f\n", inverso_densidade1);
            printf("Carta 2 (%s) venceu na comparação Densidade Demográfica. Pois vence a carta com menor valor.\n", nome_do_pais2);
        } else {
            printf("Houve um empate! As cartas possuem a mesma Densidade Demográfica.\n");
        }
        break;
    case 6:
        if (PIB_per_capita1 > PIB_per_capita2) {
            printf("\n===== Resultado da Comparção =====\n");
            printf("País: %s\n", nome_do_pais1);   
            printf("País: %s\n", nome_do_pais2);   
            printf("Atributo de Comparação: PIB per Capita\n");   
            printf("Valor Carta 1: %.2f\n", PIB_per_capita1);
            printf ("Valor Carta 2: %.2f\n", PIB_per_capita2);
            printf("Carta 1 (%s) venceu na comparação PIB per Capita.\n", nome_do_pais1);  
        } else if (PIB_per_capita2 > PIB_per_capita1) {
            printf("===== Resultado da Comparção =====\n");
            printf("País: %s\n", nome_do_pais2);   
            printf("País: %s\n", nome_do_pais1);   
            printf("Atributo de Comparação: PIB per Capita\n");   
            printf("Valor Carta 2: %.2f\n", PIB_per_capita2);
            printf ("Valor Carta 1: %.2f\n", PIB_per_capita1);
            printf("Carta 2 (%s) venceu na comparação PIB per Capita.\n", nome_do_pais2);
        } else {
            printf("Houve um empate! As cartas possuem o memo PIB per Capita.\n");
        }
        break;
    
    default:
        printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}