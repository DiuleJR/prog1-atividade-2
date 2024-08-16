#include <stdio.h>


// 4.    Implemente um programa que solicite a idade de um usuário e utilize estruturas condicionais 
// para determinar se ele está apto a votar, sendo a idade mínima 18 anos.


int main() {

    int idade;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("\nVocê é maior de idade e está apto para votar");
    }

    else {
        printf("\nVocê ainda não é maior de idade e não pode votar");
    }

    return 0;
}