#include <stdio.h>
int main() {
    int escolha;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Dizer Olá\n");
        printf("2. Contar até 5\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("\nOlá, usuário!\n");
                break;
            case 2:
                printf("\nContando: ");
                for (int i = 1; i <= 5; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            case 3:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }  
    } while (escolha != 3);
    return 0;
}