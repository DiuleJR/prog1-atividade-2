#include <stdio.h>
#include <stdlib.h>


// 19.    Desenvolva um programa que receba um número inteiro e determine qual desses três divisíveis 
// (10, 100 ou 1000) ele está mais próximo, usando estruturas condicionais. Se a distância for a mesma para 
// dois divisíveis, classifique pelo maior. Por exemplo, se o número for 155, ele está mais próximo de 100.


int main() {

    int numero, sub1, sub2, sub3;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    // testes
    // divisao = numero - 10;
    // printf("\nSubtra por 10 = %.2f", divisao);

    // divisao = numero - 100;
    // printf("\nSubtra por 100 = %.2f", divisao);

    // divisao = numero - 1000;
    // printf("\nSubtra por 1000 = %.5f", divisao);

    sub1 = abs(numero - 10);
    sub2 = abs(numero - 100);
    sub3 = abs(numero - 1000);

    printf("%d - %d - %d", sub1, sub2, sub3);

    if (sub1 < sub2 && sub1 < sub3) {
        printf("\nO número %d está mais próximo do divisor 10", numero);
    }

    else if (sub2 < sub1 && sub2 < sub3) {
        printf("\nO número %d está mais próximo do divisor 100", numero);
    }

    else {
        printf("\nO número %d está mais próximo do divisor 1000", numero);
    }


    return 0;
}