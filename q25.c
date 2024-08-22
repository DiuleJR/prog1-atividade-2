#include <stdio.h>


// Questão 25


int main() {

    float rendimentoAnual, impostoAPagar;
    int impostoTaxa;

    printf("Informe seu rendimento anual: ");
    scanf("%f", &rendimentoAnual);


    if (rendimentoAnual <= 22000) {
        impostoTaxa = 5;
    }
    else if (rendimentoAnual >= 22001 && rendimentoAnual <= 45000) {
        impostoTaxa = 15;
    }
    else {
        impostoTaxa = 25;
    }

    switch (impostoTaxa)
    {
    case 5:
        impostoAPagar = rendimentoAnual * impostoTaxa / 100;
        break;

    case 15:
        impostoAPagar = rendimentoAnual * impostoTaxa / 100;
        break;

    case 25:
        impostoAPagar = rendimentoAnual * impostoTaxa / 100;
        break;
    
    default:
        break;
    }

    printf("O montante de imposto a ser pago é de R$%.2f", impostoAPagar);


    return 0;
}