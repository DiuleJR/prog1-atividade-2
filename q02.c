#include <stdio.h>

// 2.    Desenvolva um programa em C que receba um número inteiro e verifique se ele 
// é par ou ímpar, imprimindo a classificação correspondente.


int main() {

    int numero;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par", numero);
    }

    else if (numero % 2 == 1) {
        printf("O número %d é ímpar", numero);
    }

    return 0;
}