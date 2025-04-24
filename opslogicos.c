#include <stdio.h>

int main() {
    // && = E
    int a = 10;
    int b = 5;
    
    if (a > 0 && b > 0) {
        printf("Ambos são positivos.\n");
      }

    // || = OU
    if (a > 0 || b > 0) {
        printf("Pelo menos um é positivo.\n");
      }

    // ! = NÃO
    if (!a) {
        printf("A variável a é negativa.\n");
    }else{
        printf("A variável a é positiva.\n");
    }







}