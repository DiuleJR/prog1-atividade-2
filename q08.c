#include <stdio.h>


// 8.    Utilize switch case em um programa que solicita ao usuário um número de 1 a 7 e imprime o dia da 
// semana correspondente, onde 1 é Domingo, 2 é Segunda, e assim por diante até 7 que representa Sábado.


int main() {

    int numero;

    printf("\nDigite um número entre 1 e 7: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("\n%d é domingo", numero);
            break;

        case 2:
            printf("\n%d é segunda", numero);
            break;

        case 3:
            printf("\n%d é terça", numero);
            break;

        case 4:
            printf("\n%d é quarta", numero);
            break;

        case 5:
            printf("\n%d é quinta", numero);
            break;

        case 6:
            printf("\n%d é sexta", numero);
            break;

        case 7:
            printf("\n%d é sábado", numero);
            break;
        
        default:
            printf("\nNúmero inválido! Por favor, digite um número entre 1 e 7.");
            break;
        }

    return 0;
}