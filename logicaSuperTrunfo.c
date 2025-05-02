#include <stdio.h>

// Desafio Super Trunfo
// Cadastro de cartas para usuários

int main() {

     // Variáveis para a primeira carta

    char estado[30], cidade[20], carta[4]; // Variável criada no tipo char, para armazenar o nome do estado, da cidade e da carta
    int pt = 20, opcao = 13; // Variável criada no tipo inteiro para armazenar a quantidade de pontos turísticos 
    float area = 14, pib =  15, denpop = 16, pibcpt = 17; // Variável criada no tipo float, para armazenar a área, o PIB, a densidade populacional e o PIB por Capita
    unsigned long int populacao = 600; // Variável criada no tipo unsigned long int para armazenar a população
    float superpoder = 18; // Variável criada no tipo float para armazenar o poder total

    // Variáveis para a segunda carta

    char estado2[30], cidade2[20], carta2[4]; // Variável criada no tipo char, para armazenar o nome do estado, da cidade e da carta da segunda carta
    int pt2 = 22, opcao2 = 12; // Variável criada no tipo inteiro, para armazenar a quantidade de pontos turísticos da segunda carta
    float area2 = 8, pib2 = 9, denpop2 = 10, pibcpt2 = 11; // Variável criada no tipo float, para armazenar a área, o PIB, a densidade populacional e o PIB por Capita
    unsigned long int populacao2 = 500; // Variável criada no tipo unsigned long int para armazenar a população da segunda carta
    float superpoder2 = 8.1; // Variável criada no tipo float para armazenar o valor do poder total da segunda carta

    // Variáveis de resultado

    int resultadoPop = 1, resultadoPt = 2, resultadoPIB = 3, resultadoPIBCpt = 4, resultadoArea = 5, resultadoSuperP = 6, resultadoDenPop = 7;
    
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
    denpop = (float)populacao / area; // Cálculo da Densidade Populacional
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
    scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("População da Primeira Carta (%s): %lu \n", cidade, populacao);
    printf("População da Segunda Carta (%s): %lu \n", cidade2, populacao2);

if (populacao > populacao2)
{
    printf("Carta 1 venceu! \n");
}
else if (populacao == populacao2) {
    printf("Houve empate! Ambas as cartas possuem a mesma quantidade de habitantes. \n");
}
else {
    printf("Carta 2 venceu! \n");
}
break;

case 2:
printf("Área da Primeira Carta (%s): %.2f \n", cidade, area);
printf("Área da Segunda Carta (%s): %.2f \n", cidade2, area2);

if (area > area2)
{
printf("Carta 1 venceu! \n");
}
else if (area == area2) {
printf("Houve empate! Ambas as cartas possuem a mesma área em km². \n");
}
else {
printf("Carta 2 venceu! \n");
}
break;

case 3:
printf("PIB da Primeira Carta (%s): %.2f \n", cidade, pib);
printf("PIB da Segunda Carta (%s): %.2f \n", cidade2, pib2);

if (pib > pib2)
{
printf("Carta 1 venceu! \n");
}
else if (pib == pib2) {
printf("Houve empate! Ambas as cartas possuem o mesmo PIB. \n");
}
else {
printf("Carta 2 venceu! \n");
}
break;

case 4:
printf("Pontos Turísticos da Primeira Carta (%s): %d \n", cidade, pt);
printf("Pontos Turísticos da Segunda Carta (%s): %d \n", cidade2, pt2);

if (pt > pt2)
{
printf("Carta 1 venceu! \n");
}
else if (pt == pt2) {
printf("Houve empate! Ambas as cartas possuem a mesma quantidade de pontos turísticos. \n");
}
else {
printf("Carta 2 venceu! \n");
}
break;

case 5:
printf("Densidade Populacional da Primeira Carta (%s): %.2f \n", cidade, denpop);
printf("Densidade Populacional da Segunda Carta (%s): %.2f \n", cidade2, denpop2);

if (denpop2 > denpop)
{
printf("Carta 1 venceu! \n");
}
else if (denpop2 == denpop) {
printf("Houve empate! Ambas as cartas possuem a mesma quantidade de Densidade Populacional! \n");
}
else {
printf("Carta 2 venceu! \n");
}
break;

default:
printf("Opção inválida... (Use valores de 1 a 5 correspondente ao seu atributo de preferência.\n");
    break;
}

printf("Agora vamos escolher o segundo atributo!\n");
printf("Escolha uma das opções: \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Número de pontos turísticos \n");
printf("5. Densidade Populacional \n");
scanf("%d", &opcao2);

switch (opcao2)
{
case 1:
printf("População da Primeira Carta (%s): %lu \n", cidade, populacao);
printf("População da Segunda Carta (%s): %lu \n", cidade2, populacao2);

if (populacao > populacao2)
{
printf("Carta 1 venceu! \n");
}
else if (populacao == populacao2) {
printf("Houve empate! Ambas as cartas possuem a mesma quantidade de habitantes. \n");
}
else {
printf("Carta 2 venceu! \n");
}
break;

case 2:
printf("Área da Primeira Carta (%s): %.2f \n", cidade, area);
printf("Área da Segunda Carta (%s): %.2f \n", cidade2, area2);

if (area > area2)
{
printf("Carta 1 venceu! \n");
}
else if (area == area2) {
printf("Houve empate! Ambas as cartas possuem a mesma área em km². \n");
}
else {
printf("Carta 2 venceu! \n");
}
break;

case 3:
printf("PIB da Primeira Carta (%s): %.2f \n", cidade, pib);
printf("PIB da Segunda Carta (%s): %.2f \n", cidade2, pib2);

if (pib > pib2)
{
printf("Carta 1 venceu! \n");
}
else if (pib == pib2) {
printf("Houve empate! Ambas as cartas possuem o mesmo PIB. \n");
}
else {
printf("Carta 2 venceu! \n");
}
break;

case 4:
printf("Pontos Turísticos da Primeira Carta (%s): %d \n", cidade, pt);
printf("Pontos Turísticos da Segunda Carta (%s): %d \n", cidade2, pt2);

if (pt > pt2)
{
printf("Carta 1 venceu! \n");
}
else if (pt == pt2) {
printf("Houve empate! Ambas as cartas possuem a mesma quantidade de pontos turísticos. \n");
}
else {
printf("Carta 2 venceu! \n");
}
break;

case 5:
printf("Densidade Populacional da Primeira Carta (%s): %.2f \n", cidade, denpop);
printf("Densidade Populacional da Segunda Carta (%s): %.2f \n", cidade2, denpop2);

if (denpop2 > denpop)
{
printf("Carta 2 venceu! \n");
}
else if (denpop2 == denpop) {
printf("Houve empate! Ambas as cartas possuem a mesma quantidade de Densidade Populacional! \n");
}
else {
printf("Carta 1 venceu! \n");
}
break;

default:
printf("Opção inválida... (Use valores de 1 a 5 correspondente ao seu atributo de preferência.\n");
break;
}


    return 0;
}