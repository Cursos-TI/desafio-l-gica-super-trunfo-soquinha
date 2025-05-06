#include <stdio.h>

// Desafio Super Trunfo
// Cadastro de cartas para usuários

int main()
{

    // Variáveis para a primeira carta

    char estado[30], cidade[20], carta[4];               // Variável criada no tipo char, para armazenar o nome do estado, da cidade e da carta
    int pt = 20, opcao = 13;                             // Variável criada no tipo inteiro para armazenar a quantidade de pontos turísticos
    float area = 14, pib = 15, denpop = 16, pibcpt = 17; // Variável criada no tipo float, para armazenar a área, o PIB, a densidade populacional e o PIB por Capita
    unsigned long int populacao = 600;                   // Variável criada no tipo unsigned long int para armazenar a população
    float superpoder = 18;                               // Variável criada no tipo float para armazenar o poder total
    int resultado1;                                      // Variável criada no tipo inteiro para armazenar o resultado do primeiro atributo

    // Variáveis para a segunda carta

    char estado2[30], cidade2[20], carta2[4];              // Variável criada no tipo char, para armazenar o nome do estado, da cidade e da carta da segunda carta
    int pt2 = 22, opcao2 = 12;                             // Variável criada no tipo inteiro, para armazenar a quantidade de pontos turísticos da segunda carta
    float area2 = 8, pib2 = 9, denpop2 = 10, pibcpt2 = 11; // Variável criada no tipo float, para armazenar a área, o PIB, a densidade populacional e o PIB por Capita
    unsigned long int populacao2 = 500;                    // Variável criada no tipo unsigned long int para armazenar a população da segunda carta
    float superpoder2 = 8.1;                               // Variável criada no tipo float para armazenar o valor do poder total da segunda carta
    int resultado2;                                        // Variável criada no tipo inteiro para armazenar o resultado do segundo atributo

    // Entrada e saída da primeira carta

    printf("Olá, jogador! Para começarmos, precisaremos que você registre duas cartas!\n");
    printf("Vamos registrar a primeira carta.");

    printf("Defina um código para sua carta: (Exemplo: A03) \n");
    scanf(" %s", carta);

    printf("Informe o nome do estado: \n");
    getchar();
    scanf(" %[^\n]", estado);

    printf("Informe o nome da cidade: \n");
    getchar();
    scanf(" %[^\n]", cidade);

    printf("Informe a quantidade de habitantes desta cidade: \n");
    scanf(" %lu", &populacao);

    printf("Informe a área (em km²) desta cidade: \n");
    scanf(" %f", &area);

    printf("Informe o PIB atual desta cidade: \n");
    scanf(" %f", &pib);

    printf("Informe a quantidade de pontos turísticos que há nesta cidade: \n");
    scanf(" %d", &pt);

    // Entrada e saída da segunda carta

    printf("Agora, vamos criar sua segunda carta. \n");
    printf("Defina o código para sua segunda carta: (Exemplo: B04) \n");
    scanf(" %s", carta2);

    printf("Informe o nome do estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Insira a quantidade de habitantes desta cidade: \n");
    scanf("%lu", &populacao2);

    printf("Insira a área (em km²) desta cidade: \n");
    scanf("%f", &area2);

    printf("Insira o PIB atual desta cidade: \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos dessa cidade: \n");
    scanf("%d", &pt2);

    pibcpt = pib / populacao;                                      // Cálculo do PIB per Capita
    denpop = (float)populacao / area;                              // Cálculo da Densidade Populacional
    superpoder = (100000000.0 / populacao) + area + pib + pt;      // Cálculo do Super Poder da Carta 1
    pibcpt2 = pib2 / populacao2;                                   // Cálculo do PIB per Capita
    denpop2 = populacao2 / area2;                                  // Cálculo da Densidade Populacional
    superpoder2 = (100000000.0 / populacao2) + area2 + pib2 + pt2; // Cálculo do Super Poder da Carta 2

    // Atributos da PRIMEIRA carta cadastrada pelo usuário

    printf("Suas cartas foram criadas com sucesso!!! \n");
    printf("Estes são os atributos da sua primeira carta: \n");
    printf("Código: %s \n", carta);
    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %lu habitantes \n", populacao);
    printf("Área: %.2fkm² \n", area);
    printf("PIB: R$%.2f \n", pib);
    printf("Pontos turísticos: %d \n", pt);
    printf("Densidade Populacional: %.2fhab/km²\n", denpop);
    printf("PIB per Capita: %.2f \n", pibcpt);
    printf("Super Poder: %.2f\n", superpoder);

    // Atributos da SEGUNDA carta cadastrada pelo usuário

    printf("Estes são os atributos da sua segunda carta! \n");
    printf("Código: %s \n", carta2);
    printf("Estado: %s \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu habitantes \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: R$%.2f \n", pib2);
    printf("Pontos turísticos: %d \n", pt2);
    printf("PIB per Capita: %.2f \n", pibcpt2);
    printf("Densidade Populacional: %.2fhab/km²\n", denpop2);
    printf("Super Poder: %.2f \n", superpoder2);

    printf("Agora você deve escolher quais atributos quer comparar!\n");
    printf("Escolha uma das opções: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade Populacional \n");
    printf("6. PIB por Capita \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: // População
            resultado1 = (populacao > populacao2) ? 1 : 0;
            printf("Você escolheu 'População'!\n");
            printf("Agora, escolha o segundo atributo:\n");
            printf("1. Área\n2. PIB\n3. Número de pontos turísticos\n4. Densidade Populacional\n5. PIB por Capita\n");
            scanf("%d", &opcao2);
    
            if (opcao2 == 1)
                resultado2 = (area > area2) ? 1 : 0;
            else if (opcao2 == 2)
                resultado2 = (pib > pib2) ? 1 : 0;
            else if (opcao2 == 3)
                resultado2 = (pt > pt2) ? 1 : 0;
            else if (opcao2 == 4)
                resultado2 = (denpop > denpop2) ? 1 : 0;
            else if (opcao2 == 5)
                resultado2 = (pibcpt > pibcpt2) ? 1 : 0;
            break;
    
        case 2: // Área
            resultado1 = (area > area2) ? 1 : 0;
            printf("Você escolheu 'Área'!\n");
            printf("Agora, escolha o segundo atributo:\n");
            printf("1. População\n2. PIB\n3. Número de pontos turísticos\n4. Densidade Populacional\n5. PIB por Capita\n");
            scanf("%d", &opcao2);
    
            if (opcao2 == 1)
                resultado2 = (populacao > populacao2) ? 1 : 0;
            else if (opcao2 == 2)
                resultado2 = (pib > pib2) ? 1 : 0;
            else if (opcao2 == 3)
                resultado2 = (pt > pt2) ? 1 : 0;
            else if (opcao2 == 4)
                resultado2 = (denpop > denpop2) ? 1 : 0;
            else if (opcao2 == 5)
                resultado2 = (pibcpt > pibcpt2) ? 1 : 0;
            break;
    
        case 3: // PIB
            resultado1 = (pib > pib2) ? 1 : 0;
            printf("Você escolheu 'PIB'!\n");
            printf("Agora, escolha o segundo atributo:\n");
            printf("1. População\n2. Área\n3. Número de pontos turísticos\n4. Densidade Populacional\n5. PIB por Capita\n");
            scanf("%d", &opcao2);
    
            if (opcao2 == 1)
                resultado2 = (populacao > populacao2) ? 1 : 0;
            else if (opcao2 == 2)
                resultado2 = (area > area2) ? 1 : 0;
            else if (opcao2 == 3)
                resultado2 = (pt > pt2) ? 1 : 0;
            else if (opcao2 == 4)
                resultado2 = (denpop > denpop2) ? 1 : 0;
            else if (opcao2 == 5)
                resultado2 = (pibcpt > pibcpt2) ? 1 : 0;
            break;
    
        case 4: // Pontos turísticos
            resultado1 = (pt > pt2) ? 1 : 0;
            printf("Você escolheu 'Número de pontos turísticos'!\n");
            printf("Agora, escolha o segundo atributo:\n");
            printf("1. População\n2. Área\n3. PIB\n4. Densidade Populacional\n5. PIB por Capita\n");
            scanf("%d", &opcao2);
    
            if (opcao2 == 1)
                resultado2 = (populacao > populacao2) ? 1 : 0;
            else if (opcao2 == 2)
                resultado2 = (area > area2) ? 1 : 0;
            else if (opcao2 == 3)
                resultado2 = (pib > pib2) ? 1 : 0;
            else if (opcao2 == 4)
                resultado2 = (denpop > denpop2) ? 1 : 0;
            else if (opcao2 == 5)
                resultado2 = (pibcpt > pibcpt2) ? 1 : 0;
            break;
    
        case 5: // Densidade Populacional
            resultado1 = (denpop > denpop2) ? 1 : 0;
            printf("Você escolheu 'Densidade Populacional'!\n");
            printf("Agora, escolha o segundo atributo:\n");
            printf("1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos\n5. PIB por Capita\n");
            scanf("%d", &opcao2);
    
            if (opcao2 == 1)
                resultado2 = (populacao > populacao2) ? 1 : 0;
            else if (opcao2 == 2)
                resultado2 = (area > area2) ? 1 : 0;
            else if (opcao2 == 3)
                resultado2 = (pib > pib2) ? 1 : 0;
            else if (opcao2 == 4)
                resultado2 = (pt > pt2) ? 1 : 0;
            else if (opcao2 == 5)
                resultado2 = (pibcpt > pibcpt2) ? 1 : 0;
            break;
    
        case 6: // PIB por Capita
            resultado1 = (pibcpt > pibcpt2) ? 1 : 0;
            printf("Você escolheu 'PIB por Capita'!\n");
            printf("Agora, escolha o segundo atributo:\n");
            printf("1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos\n5. Densidade Populacional\n");
            scanf("%d", &opcao2);
    
            if (opcao2 == 1)
                resultado2 = (populacao > populacao2) ? 1 : 0;
            else if (opcao2 == 2)
                resultado2 = (area > area2) ? 1 : 0;
            else if (opcao2 == 3)
                resultado2 = (pib > pib2) ? 1 : 0;
            else if (opcao2 == 4)
                resultado2 = (pt > pt2) ? 1 : 0;
            else if (opcao2 == 5)
                resultado2 = (denpop > denpop2) ? 1 : 0;
            break;
    
        default:
            printf("Opção inválida. Escolha de 1 a 6.\n");
            return 1;
        }
    if (resultado1 && resultado2)
    { printf("Parabéns, você foi o vencedor! \n"); }
    else if (resultado1 != resultado2)
    { printf("O jogo ficou empatado! Você venceu em apenas um atributo... \n"); }
    else { printf("Infelizmente, você perdeu! Não conseguiste vencer em nenhum atributo... Tente novamente! \n"); }

    return 0;
}