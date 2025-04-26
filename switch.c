#include <stdio.h>

int main() {
  int opcao; 
  float Saldo = 1000.00;
  float ValorDoSaque;
  float deposito;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: %.2f\n", Saldo);
      printf("\n");
      break;
    case 2:
    printf("Digite o valor a depositar\n");  
    scanf("%f", &deposito);
    printf("Depósito realizado com sucesso.\n");
      break;
    case 3:
    printf("Digite o valor a sacar:\n");  
    scanf("%f", &ValorDoSaque);
    if (ValorDoSaque > 0 && ValorDoSaque <= 1000){
      printf("Saque realizado com sucesso.\n");
      printf("\n");
    } else {
      printf("Não foi possível realizar o saque devido ao saldo insuficiente.\n");
      printf("\n");
    }
      break;
    default:
      printf("Opção inválida\n");
      printf("\n");
  }

  return 0;
}