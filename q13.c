#include <stdio.h>


// 13.    Implemente uma calculadora que aceite dois números e uma operação 
// ('+', '-', '*', '/') e use switch case para calcular e imprimir o resultado.


int main() {

    float N1, N2;
    char operacao;


    printf("Informe dois números: ");
    scanf("%f %f", &N1, &N2);

    printf("Agora escolha uma das operações entre parenteses (+ - * /): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            printf("\n%.2f + %.2f = %.2f", N1, N2, N1 + N2);
            break;

        case '-':
            printf("\n%.2f - %.2f = %.2f", N1, N2, N1 - N2);
            break;

        case '*':
            printf("\n%.2f * %.2f = %.2f", N1, N2, N1 * N2);
            break;

        case '/':
            printf("\n%.2f / %.2f = %.2f", N1, N2, N1 / N2);
            break;

        default:
            printf("Operador inválido!");
            break;
    }

    return 0;
}