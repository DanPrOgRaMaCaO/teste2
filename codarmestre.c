#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int NumeroJogador, NumeroComputador, resultado;
    char TipoComparacao;

    // Gerar número aleatório
    srand (time(0));
    NumeroComputador = rand() % 100 + 1; // Número entre 1 e 100  

    //Inicio do jogo
    printf("*Jogo: Maior, Menor ou Igual*\n");
    printf("Escolha um número e o tipo de comparação\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &TipoComparacao);

    printf("Escolha um número (de 1 a 100):\n");
    scanf("%d", &NumeroJogador);

    //Exibir número do computador
    switch (TipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior.\n");
        resultado = NumeroJogador > NumeroComputador ? 1 : 0;
        printf("Jogador: %d\nComputador: %d\n", NumeroJogador, NumeroComputador);
    break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor.\n");
        resultado = NumeroJogador < NumeroComputador ? 1 : 0;
    break;
    case 'I':
    case 'i':
    printf("Você escolheu a opção igual.\n");
        resultado = NumeroJogador == NumeroComputador ? 1 : 0;
    break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

    printf("Jogador: %d\nComputador: %d\n", NumeroJogador, NumeroComputador);

    if (resultado == 1)
    {
        printf("Você venceu!\n");
    } else {
        printf("Você perdeu.\n");
    }
    



}