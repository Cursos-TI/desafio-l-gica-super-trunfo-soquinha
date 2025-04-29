#include <stdio.h>

// Desafio Super Trunfo
// Cadastro de cartas para usuários

int main() {

     // Variáveis para a primeira carta

    char estado[30], cidade[20], carta[4]; // Variável criada no tipo char, para armazenar o nome do estado, da cidade e da carta
    int pt = 13; // Variável criada no tipo inteiro para armazenar a quantidade de pontos turísticos 
    float area = 14, pib =  15, denpop = 16, pibcpt = 17; // Variável criada no tipo float, para armazenar a área, o PIB, a densidade populacional e o PIB por Capita
    unsigned long int populacao = 600; // Variável criada no tipo unsigned long int para armazenar a população
    float superpoder = 18; // Variável criada no tipo float para armazenar o poder total

    // Variáveis para a segunda carta

    char estado2[30], cidade2[20], carta2[4]; // Variável criada no tipo char, para armazenar o nome do estado, da cidade e da carta da segunda carta
    int pt2 = 12; // Variável criada no tipo inteiro, para armazenar a quantidade de pontos turísticos da segunda carta
    float area2 = 8, pib2 = 9, denpop2 = 10, pibcpt2 = 11; // Variável criada no tipo float, para armazenar a área, o PIB, a densidade populacional e o PIB por Capita
    unsigned long int populacao2 = 500; // Variável criada no tipo unsigned long int para armazenar a população da segunda carta
    float superpoder2 = 8.1; // Variável criada no tipo float para armazenar o valor do poder total da segunda carta

    // Variáveis de resultado

    int resultadoPop = 1, resultadoPt = 2, resultadoPIB = 3, resultadoPIBCpt = 4, resultadoArea = 5, resultadoSuperP = 6, resultadoDenPop = 7;
    
    // Entrada e saída da primeira carta

    // Entrada e saída da primeira carta

    printf("Olá, jogador! Para começarmos, precisaremos que você registre duas cartas!\n");
    printf("Vamos registrar a primeira carta.");

    printf("Defina um código para sua carta: (Exemplo: A03) \n");
    scanf(" %s", carta);

    printf("Informe o nome do estado: \n");
    getchar ();
    scanf(" %[^\n]", estado);

    printf("Informe o nome da cidade: \n");
    getchar ();
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
    getchar ();
    scanf(" %[^\n]", estado2);
    
    printf("Informe o nome da cidade: \n");
    getchar ();
    scanf(" %[^\n]", cidade2);

    printf("Insira a quantidade de habitantes desta cidade: \n");
    scanf("%lu", &populacao2);

    printf("Insira a área (em km²) desta cidade: \n");
    scanf("%f", &area2);

    printf("Insira o PIB atual desta cidade: \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos dessa cidade: \n");
    scanf("%d", &pt2);

    pibcpt = pib / populacao; // Cálculo do PIB per Capita
    denpop = populacao / area; // Cálculo da Densidade Populacional
    superpoder = (100000000.0 / populacao) + area + pib + pt; // Cálculo do Super Poder da Carta 1
    pibcpt2 = pib2 / populacao2; // Cálculo do PIB per Capita
    denpop2 = populacao2 / area2; // Cálculo da Densidade Populacional
    superpoder2 = (100000000.0 / populacao2) + area2 + pib2 + pt2; // Cálculo do Super Poder da Carta 2

    // Atributos da PRIMEIRA carta cadastrada pelo usuário

    printf("Suas cartas foram criadas com sucesso!!! \n");
    printf("Estes são os atributos da sua primeira carta: \n");
    printf("Código: %s \n", carta);
    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %lu habitantes \n", populacao);
    printf("Área: %.1fkm² \n", area); 
    printf("PIB: R$%.1f \n", pib);  
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
    printf("Área: %.1fkm² \n", area2);  
    printf("PIB: R$%.1f \n", pib2);  
    printf("Pontos turísticos: %d \n", pt2);
    printf("PIB per Capita: %.2f \n", pibcpt2);
    printf("Densidade Populacional: %.2fhab/km²\n", denpop2);
    printf("Super Poder: %.2f \n", superpoder2);
    
    printf("Obrigado por realizar o cadastro. Boa jogatina!\n");

        // Exibição dos resultados com saída informativa ao usuário

    if (populacao > populacao2)
{
        printf("População da Primeira Carta: %lu\n", populacao);
        printf("População da Segunda Carta: %lu\n", populacao2);
        printf("A carta 1 venceu no atributo População!\n");
}
    else
{
        printf("População da Primeira Carta: %lu\n", populacao);
        printf("População da Segunda Carta: %lu \n", populacao2);
        printf("A carta 2 venceu no atributo População!\n");
}



    if (pib > pib2) 
{
        printf("PIB da Primeira Carta: %.2f \n", pib);
        printf("PIB da Segunda Carta: %.2f \n", pib2);
        printf("A carta 1 venceu no atributo PIB!\n");
}
    else
{
        printf("PIB da Primeira Carta: %.2f \n", pib);
        printf("PIB da Segunda Carta: %.2f \n", pib2);
        printf("A carta 2 venceu no atributo PIB!\n");
}

    return 0;
}