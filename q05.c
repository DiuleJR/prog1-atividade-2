#include <stdio.h>


// 5.    Escreva um programa que leia um número inteiro e determine se ele é um 
// múltiplo de cinco, imprimindo uma mensagem apropriada.


int main() {

    int numero;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 5 == 0) {
        printf("\nO número %d é múltiplo de 5", numero);
    }

    else {
        printf("\nO número %d não é múltiplo de 5", numero);
    }

    return 0;
}