#include <stdio.h>

// questão 23

int main() {

    int escolhaHorario, escolhaTrafego;

    printf("\n===== MENU HORÁRIO =====\n");
    printf("\n[1] manhã\n");
    printf("[2] tarde\n");
    printf("[3] noite\n");
    printf("\n>> Escolha o horario: ");
    scanf("%d", &escolhaHorario);

    printf("\n===== MENU TRÁFEGO =====\n");
    printf("\n[1] baixo\n");
    printf("[2] médio\n");
    printf("[3] alto\n");
    printf("\n>> Escolha a instensidade do tráfego: ");
    scanf("%d", &escolhaTrafego);

    if (escolhaHorario == 3) {
        switch (escolhaTrafego) {
            
        case 1:
            printf("\nVermelho mais tempo durante tráfego baixo!");
            break;

        case 2:
            printf("\nAmarelo tempo médio");
            break;

        case 3:
            printf("\nVerde mais tempo durante tráfego médio");
            break;
        
        default:
            break;
        }
    } else {
        printf("\n[!] Os semáforos só acendem a noite!");
    }



    return 0;
}