#include <stdio.h>
Char Estado: A
Char Codigo da Carta: A01
Char Nome da Cidade: São Paulo
Int População: 12325000
Float Área: 1521.11km²
Float Pib: 699.28 bilhões de reais
Int Numeros de Pontos Turístico: 50    

Char Estado: B
Char Codigo da Carta: B02
Char Nome da Cidade: Rio de Janeiro
Int População: 6729894
Float Área: 1200km²
Float Pib: 1,15 trilhões de reais
Int Numeros de Pontos Turístico: 58
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() { 
    print("qual o estado? \n");
    scanf("%c", &estado);

    printf("qual o codigo? \n");
    scanf("%s", &codigo);

    printf("qual o cidade? \n");
    scanf("%s", &cidade);

    printf("qual o populacao? \n");
    scanf("%i", &populacao);
    
    printf("qual o area? \n");
    scanf("%f", &area);

    printf("qual o PIB? \n");
    scanf("%f", &PIB);

    printf("numeros de pontos turistico? \n");
    scanf("%i", &numeros de pontos turistico);

    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da Cidade: &s \n", cidade);
    printf("Populacao: &i habitantes \n", populacao);
    printf("Area: %f km² \n", area);
    printf("PIB: &f bilhoes de reais);
    printf("Pontos turisticos: %i \n", pontos);
    
  // Definição das variáveis para armazenar as propriedades das cidadea
 // Você pode utilizar o código do primeiro desafio


    

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
