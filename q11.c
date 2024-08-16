#include <stdio.h>


// 11.    Leia três valores inteiros representando os lados de um possível triângulo. Primeiro, 
// utilize a desigualdade triangular para determinar se os valores podem formar um triângulo. Se 
// formarem um triângulo, classifique-o como Equilátero, Isósceles ou Escaleno e imprima o resultado.


int main() {

    int ladoA, ladoB, ladoC;

    printf("\nInforme os 3 lados do triângulo: ");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    // Verificar se é um triângulo.
    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) {
        
        // Verifica se o triângulo é equilátero.
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("\nÉ um triângulo Equilátero!");
        }

        // Verifica se o triângulo é Isósceles.
        else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("\nÉ um triângulo Isósceles");
        }

        // Verifica se o triângulo é Escaleno.
        else {
            printf("\nÉ um triângulo Escaleno.");
        }

    } else {
        printf("Isso não é um triângulo!");
    }


    return 0;
}