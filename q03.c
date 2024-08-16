#include <stdio.h>

// 3.    Crie um programa que receba uma temperatura em Celsius e determine se a temperatura é considerada quente. 
// Se a temperatura for maior que 30 graus, deve ser classificada como 'quente', caso contrário, como 'fria'.


int main() {

    float temperatura;

    printf("\nDigite a temperatura da água em graus celsius: ");
    scanf("%f", &temperatura);

    if (temperatura > 30) {
        printf("\nA água está quente!");
    }

    else {
        printf("\nA água está fria!");
    }

    return 0;
}