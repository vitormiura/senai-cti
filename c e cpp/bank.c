#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SALDO 1
#define SACAR 2
#define DEPOSITAR 3
#define ENCERRAR 4

int main(void)
{

    int auth = 0;
    int contador = 3;

    float dinheiros = 0;

    while (auth == 0)
    {
        if (contador == 0)
        {
            printf("Voce foi bloqueado\n");
            system("pause");
            return 0;
        }
        int senha = 0;
        printf("Coloque sua senha: ");
        scanf("%d", &senha);
        if (senha == 1234)
        {
            auth = 1;
        }
        else
        {
            contador -= 1;
            printf("Senha incorreta, voce possui %d tentativas\n", contador);
        }
        system("pause");
        system("cls");
    }
    int on = 1;
    while (on == 1)
    {
        int op = 0;
        float saque = 0, dep = 0;
        //int senha[4];
        system("cls");
        puts("-------- BANCO DOS CRIAS --------");
        puts("|   Digite a opcao desejada:    |");
        puts("---------------------------------");
        puts("|     [1] - SALDO               |");
        puts("|     [2] - SACAR               |");
        puts("|     [3] - DEPOSITAR           |");
        puts("|     [4] - ENCERRAR            |");
        puts("---------------------------------");
        printf("| : ");
        scanf("%d", &op);
        fflush(stdin);
        switch (op)
        {
        case SALDO:
            printf("O seu saldo eh de: %.2f\n", dinheiros);
            system("pause");
            system("cls");
            break;
        case SACAR:
            printf("Digite quanto voce quer sacar: ");
            scanf("%f", &saque);
            if (saque > dinheiros)
                puts("Estas pobres amigo, n vai dar n");
            else
                dinheiros -= saque;
            printf("O seu saldo eh de: %.2f\n", dinheiros);
            system("pause");
            system("cls");
            break;
        case DEPOSITAR:
            printf("Digite quanto voce quer depositar: ");
            scanf("%f", &dep);
            dinheiros += dep;
            printf("O seu saldo eh de: %.2f\n", dinheiros);
            system("pause");
            system("cls");
            break;
        case ENCERRAR:
            on = 0;
            system("cls");
            break;
        }
    }
    return 0;
}
