#include <stdio.h>
#include <math.h>


// 16.    Calcule o Índice de Massa Corporal baseado no peso e altura fornecidos, 
// e classifique o resultado em 'abaixo do peso', 'normal', 'sobrepeso' ou 'obeso'.


int main() {

    float altura, peso, IMC;


    printf("Informe o seu peso e sua altura, respectivamente: ");
    scanf("%f %f", &peso, &altura);

    IMC = peso / powf(altura, 2);

    printf("\nSeu IMC é %f\n", IMC);

    if (IMC >= 18.5 && IMC <= 24.9) {
        printf("Definição: NORMAL");
    }

    else if (IMC < 18.5) {
        printf("Definição: ABAIXO DO PESO");
    }

    else if (IMC >= 25 && IMC <= 29.9) {
        printf("Definição: SOBREPESO");
    }

    else {
        printf("Definição: OBESO");
    }


    return 0;
}