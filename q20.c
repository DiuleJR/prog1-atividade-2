#include <stdio.h>

// questão 20


int main() {

    int totalHoras, tarifa, pagamento;

    printf("Quantas horas o carro ficou estacionado: ");
    scanf("%d", &totalHoras);

    if (totalHoras <= 2)
    {
        tarifa = 5;
    }
    else if (totalHoras >= 3 && totalHoras <= 5)
    {
        tarifa = 3;
    }
    else {
        tarifa = 2;
    }

    pagamento = totalHoras * tarifa;

    printf("\nO total a ser paga é: R$%d\n", pagamento);

    return 0;
}