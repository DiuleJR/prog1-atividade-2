#include <stdio.h>

// 6.    Desenvolva um programa que verifique se um número está entre 1 e 100, 
// inclusive, utilizando if para verificar e imprimir o resultado.


int main() {

    float numero;

    printf("\nDigite um número: ");
    scanf("%f", &numero);

    if (numero >= 1 && numero <= 100) {
        printf("O número %.2f está entre 1 e 100!", numero);
    }

    else {
        printf("O número %.2f não está entre 1 e 100!", numero);
    }

    return 0;
}