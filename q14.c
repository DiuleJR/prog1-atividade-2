#include <stdio.h>


// 14.    Escreva um programa em C que receba um número inteiro e verifique se 
// ele é divisível por 2, 3 e 5 ao mesmo tempo. Use if para checar a condição e 
// imprima uma mensagem adequada. Se o número for divisível pelos três, imprima 
// "O número é divisível por 2, 3 e 5". Caso contrário, imprima "O número não é divisível 
// por 2, 3 e 5 simultaneamente".


int main() {

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);


    if (numero % 2 == 0 && numero % 3 == 0 && numero % 5 == 0) {
        printf("\nEsse número é divisível por 2, 3 e 5");

    } else {
        printf("\nEsse número não é divisível por 2, 3 e 5");
        
    }

    return 0;
}