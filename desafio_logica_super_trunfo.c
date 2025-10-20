#include <stdio.h>

int main()
{
//Carta 1 - dados
char nome_pais1[50] = "BRASIL";
unsigned long int populacao1 = 100;
float area1 = 10;
float PIB1 = 100;
int pontos_turisticos1 = 10;
float densidadepop1;

//Carta 2 - dados
char nome_pais2[50] = "ARGENTINA";
unsigned long int populacao2 = 20;
float area2 = 200;
float PIB2 = 20;
int pontos_turisticos2 = 20;
float densidadepop2;

//calculando o vlaor das variáveis q dependem de outras = PIB per capta e Densidade Populacional 
densidadepop1 = (float) populacao1 / area1;
densidadepop2 = (float) populacao2 / area2;

//outras variáveis:
int opcao1, opcao2, resultado1, resultado2;


//imprimindo o cadastro das cartas
printf("\nConfira os dados das cartas abaixo: \n");
printf("\n <<< CARTA 1 >>>\n");
printf("- País: %s\n", nome_pais1);
printf("- População: %lu habitantes\n", populacao1);
printf("- Área: %.2fKm²\n", area1);
printf("- PIB (em reais): R$ %.2f\n", PIB1);
printf("- Quantidade de pontos turísticos: %d\n", pontos_turisticos1);
printf("- Densidade demográfica: %.2fhab/km²\n", densidadepop1);

printf("\n <<< CARTA 2 >>>\n");
printf("- País: %s\n", nome_pais2);
printf("- População: %lu habitantes\n", populacao2);
printf("- Área: %.2fKm²\n", area2);
printf("- PIB (em reais): R$ %.2f\n", PIB2);
printf("- Quantidade de pontos turísticos: %d\n", pontos_turisticos2);
printf("- Densidade demográfica: %.2fhab/km²\n\n", densidadepop2);



//iniciando interação com usuário:

printf("### Selecione DOIS atributos para serem comparados: ###\n");
printf("1.População\n");
printf("2.Área\n");
printf("3.PIB\n");
printf("4.Número de pontos turísticos\n");
printf("5.Densidade demográfica\n\n");
printf(">>>> PRIMEIRO atributo:\n");

scanf("%d", &opcao1);

switch (opcao1){
    case 1:
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;

    case 2:
    resultado1 = area1 > area2 ? 1 : 0;
    break;

    case 3:
    resultado1 = PIB1 > PIB2 ? 1 : 0;
    break;

    case 4:
    resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    break;

    case 5:
    resultado1 = densidadepop1 < densidadepop2 ? 1 : 0; //aqui é menor
    break;
default:
    printf("Opção inválida\n");
    break;
}

printf(">>>> SEGUNDO atributo: (não repita o atributo)\n");

scanf("%d", &opcao2);

if (opcao1 == opcao2)
{
    printf("ERRO: Escolheu os mesmos atributos. Reinicie o jogo\n");
} else {

    switch (opcao2){
    case 1:
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;

    case 2:
    resultado2 = area1 > area2 ? 1 : 0;
    break;

    case 3:
    resultado2 = PIB1 > PIB2 ? 1 : 0;
    break;

    case 4:
    resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    break;

    case 5:
    resultado2 = densidadepop1 < densidadepop2 ? 1 : 0; //aqui é menor
    break;
default:
    printf("Opção inválida\n");
    break;
}}


//dados da disputa - PRIMEIRO ATRIBUTO
printf("\n<<<< Dados da disputa >>>>\n");
printf("\n<< CARTA 1 (vs) CARTA 2 >>\n");
printf("ATRIBUTO 1\n");
if (opcao1 == opcao2)
{
    printf("<ERRO>\n");
} else if (opcao1 == 1)
{
    printf("POPULAÇÃO = %luhab (vs) %luhab\n", populacao1, populacao2);
} else if (opcao1 == 2)
{
    printf("ÁREA = %.2fkm² (vs) %.2fkm²\n", area1, area2);
} else if (opcao1 == 3)
{
    printf("PIB = R$ %.2f (vs) R$ %.2f\n", PIB1, PIB2);
} else if (opcao1 == 4)
{
    printf("PONTOS TURÍSTICOS = %d (vs) %d\n", pontos_turisticos1, pontos_turisticos2);
} else if (opcao1 == 5)
{
    printf("DENSIDADE DEMOGRÁFICA = %.2fhab/km² (vs) %.2fhab/km²\n", densidadepop1, densidadepop2);
}


//dados da disputa - SEGUNDO ATRIBUTO
printf("ATRIBUTO 2\n");
if (opcao1 == opcao2)
{
    printf("<ERRO>\n");

} else if (opcao2 == 1)
{
    printf("POPULAÇÃO = %luhab (vs) %luhab\n", populacao1, populacao2);
} else if (opcao2 == 2)
{
    printf("ÁREA = %.2fkm² (vs) %.2fkm²\n", area1, area2);
} else if (opcao2 == 3)
{
    printf("PIB = R$ %.2f (vs) R$ %.2f\n", PIB1, PIB2);
} else if (opcao2 == 4)
{
    printf("PONTOS TURÍSTICOS = %d (vs) %d\n", pontos_turisticos1, pontos_turisticos2);
} else if (opcao2 == 5)
{
    printf("DENSIDADE DEMOGRÁFICA = %.2fhab/km² (vs) %.2fhab/km²\n", densidadepop1, densidadepop2);
}

printf("\n");

//Vitória da Carta 1 é "1", da Carta 2 é "0";
if ((resultado1 == 1) && (resultado2 == 0))
{
    printf("*** EMPATE ***\n--> Carta 1 venceu no PRIMEIRO atributo\n--> Carta 2 venceu no SEGUNDO atributo\n");
} else if ((resultado1 == 0) && (resultado2 == 1))
{
    printf("*** EMPATE ***\n--> Carta 2 venceu no PRIMEIRO atributo\n--> Carta 1 venceu no SEGUNDO atributo\n");
} else if ((resultado1 == 1) && (resultado2 == 1))
{
    printf("*** Carta 1 - %s venceu ***\n", nome_pais1);
} else if ((resultado1 == 0) && (resultado2 == 0))
{
    printf("*** Carta 2 - %s venceu ***\n", nome_pais2);
} else {
    printf("Reinicie a Jogada!\n");
}

return 0;
}
