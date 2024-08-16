#include <stdio.h>


// 12.    Determine se um ano (input como um número inteiro) é bissexto. Um ano é considerado bissexto 
// se for divisível por 4, exceto para anos divisíveis por 100, que não são bissextos, a menos que também 
// sejam divisíveis por 400.


int main() {

    int ano;

    printf("\nDigite um ano: ");
    scanf("%d", &ano);


    int calculo = ano % 4;
    float calculo2 = ano %100;
    float calculo3 = ano %400;

    // testes
    printf("\n%d - %f - %f\n", calculo, calculo2, calculo3);

    // Verificar se o ano é divisível por 4 e se ele não é divisível por 100
    if (calculo == 0 && calculo2 > 0 && calculo3 > 0) {
        printf("\nO ano %d é um ano bissexto", ano);
    }

    // Verifica se o ano é divisível por 4, divisível por 100 e divisível por 400
    else if (calculo == 0 && calculo2 == 0 && calculo3 == 0) {
        printf("\nO ano %d é um ano bissexto", ano);
    }

    else {
        printf("\nO ano %d não é um ano bissexto", ano);
    }

    


    return 0;
}