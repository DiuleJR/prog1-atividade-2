#include <stdio.h>


// 10.    Receba a velocidade de um veículo e classifique-a como 'baixa' 
// (menos de 30 km/h), 'média' (entre 30 e 60 km/h) ou 'alta' (mais de 60 km/h).


int main() {

    float velocidade;

    printf("\nDigite a velocidade do veículo em km/h: ");
    scanf("%f", &velocidade);

    if (velocidade < 30) {
        printf("\nA velocidade do carro é baixa!");
    }

    else if (velocidade >= 30 && velocidade <= 60) {
        printf("\nA velocidade do carro é média!");
    }

    else {
        printf("\nA velocidade do carro é alta!");
    }

    return 0;
}