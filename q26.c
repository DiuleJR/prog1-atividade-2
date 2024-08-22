#include <stdio.h>



int main() {

    int escolhaEvento, capacidadeEvento, quantidadeVagas;

    printf("\n===== MENU DE EVENTOS =====\n");
    printf("\n[1] Concerto - vagas 500");
    printf("\n[2] Teatro   - vagas 200");
    printf("\n[3] Evento Esportivo - vagas 1000");
    printf("\n[4] Conferência - 300\n");
    printf("\n============================\n");
    printf(">> Digite o código do evento desejado: ");
    scanf("%d", &escolhaEvento);

    switch (escolhaEvento)
    {
    case 1:
        capacidadeEvento = 500;

        break;

    case 2:
        capacidadeEvento = 200;

        break;

    case 3:
        capacidadeEvento = 1000;

        break;

    case 4:
        capacidadeEvento = 300;

        break;
    
    default:
        printf("[!] Por favor escolha um dos eventos do menu.");
        break;

        return 0;
    }

    printf("\n>> Digite a quantidade de assentos que deseja: ");
    scanf("%d", &quantidadeVagas);

    if (quantidadeVagas > capacidadeEvento) {
        printf("\nExcedeu a capacidade do evento. Por favor escolha um número menor de assentos.");
    } else {
        printf("\n%d vagas reservadas com sucesso!", quantidadeVagas);
    }

    return 0;
}