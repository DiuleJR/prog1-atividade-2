#include <stdio.h>


// 9.    Receba uma nota de 0 a 100 de um estudante e classifique-a utilizando if e else em categorias como 
// 'excelente' (80-100), 'bom' (60-79), 'suficiente' (40-59), ou 'insuficiente' (abaixo de 40).


int main() {

    int nota;

    printf("Digite uma nota entre 0 e 100: ");
    scanf("%d", &nota);


    if (nota >= 80 && nota <= 100) {
        printf("\nVocê tirou uma nota excelente!");
    }

    else if (nota >= 60 && nota <= 79) {
        printf("\nVocê tirou uma nota boa!");
    }

    else if (nota >= 40 && nota <= 59) {
        printf("\nVocê tirou uma nota suficiente!");
    }

    else if (nota >= 0 && nota < 40) {
        printf("\nVocê tirou uma nota insuficiente!");
    }

    else {
        printf("Nota inválida! Por favor, digite uma nota entre 1 e 100.");
    }

    return 0;
}