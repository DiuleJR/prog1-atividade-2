#include <stdio.h>


// 17.    Calcule o valor final de uma compra após aplicar um desconto que varia conforme o valor 
// inicial da compra: 5% para compras até R$100, 10% para compras entre R$101 e R$500, e 15% para compras acima de R$500.


int main() {    

    float valor_compra, valor_final_compra, desconto;


    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);


    if (valor_compra > 0 && valor_compra <= 100) {
        desconto = 0.05;
    }

    else if (valor_compra >= 101 && valor_compra <= 500) {
        desconto = 0.1;
    }

    else if (valor_compra > 500) {
        desconto = 0.15;
    }

    else {
        printf("\nPor favor, informe um valor que não seja zero!");
        return 0;
    }

    valor_final_compra = valor_compra - (valor_compra * desconto);

    printf("\nSua compra ganhou %.0f porcento de desconto, \no valor final da compra é R$%.2f", desconto * 100, valor_final_compra);


    return 0;
}