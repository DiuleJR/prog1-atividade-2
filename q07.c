#include <stdio.h>


// 7.    Crie um programa que lê um valor inteiro representando o nível de água em um tanque e classifique 
// esse nível como 'baixo', 'médio' ou 'alto', baseado em limites predefinidos que você estabelecer.


int main() {

    int nivelAguaLitros;

    printf("Digite o nível da água em litros: ");
    scanf("%d", &nivelAguaLitros);

    // nível alto  - 100 ou mais litros
    // nível médio - De 50 pra cima e menor que 100 
    // nível baixo - Menor que 50

    if (nivelAguaLitros >= 100) {
        printf("\nO nível da água é alto!");
    }

    else if (nivelAguaLitros >= 50 && nivelAguaLitros < 100){
        printf("\nO nível da água é médio!");
    }

    else {
        printf("\nO nível da água é baixo!");
    }


    return 0;
}