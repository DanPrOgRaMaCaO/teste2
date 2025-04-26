#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int EscolhaJogador, EscolhaComputador;
    srand(time(0));

    printf("*PEDRA, PAPEL OU TESOURA*\n");
    printf("Esolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    scanf("%d", &EscolhaJogador);

    EscolhaComputador = rand() % 3 + 1;

    switch (EscolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
    break;
    case 3:
        printf("Jogador: Tesoura - ");
    break;
    default:
        printf("Opção inválida");
    break;
    }

    switch (EscolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
    break;
    case 3:
        printf("Computador: Tesoura\n");
    break;
    }

    if (EscolhaJogador == EscolhaComputador){
        printf("### Empatou ###\n");
    } else if ((EscolhaJogador == 1) && (EscolhaComputador == 3) ||
              (EscolhaJogador == 2) && (EscolhaComputador == 1) ||
              (EscolhaJogador == 3) && (EscolhaComputador == 2))
    {
        printf("### Você ganhou! ###\n");
    } else {
        printf("### Você perdeu ###\n");
    }

    return 0;
}