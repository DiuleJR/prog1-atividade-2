#include <stdio.h>


// 1.    Escreva um programa em C que leia um número inteiro e imprima se é 
// positivo ou negativo. Se o número for zero, especifique que é zero.


int main() {

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("\n\nO Número %d é positivo", numero);
    }

    else if (numero < 0) {
        printf("\n\nO número %d é negativo", numero);
    }

    else {
        printf("\n\nO numéro %d é zero!", numero);
    }

    return 0;
}