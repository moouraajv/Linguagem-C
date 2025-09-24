#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    int valor_inteiro;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor_inteiro);

    printf("Valor a ser sacado: R$ %d,00\n", valor_inteiro);
    printf("Quantidade de cédulas que você receberá: \n");

    int valor_restante = valor_inteiro;

    int quantidade;

    quantidade = valor_restante / 200;
        printf("%d cédula(s) de R$ 200 \n", quantidade);
    valor_restante %= 200;

    quantidade = valor_restante / 100;
        printf("%d cédula(s) de R$ 100 \n", quantidade);
    valor_restante %= 100;

    quantidade = valor_restante / 50;
        printf("%d cédula(s) de R$ 50 \n", quantidade);
    valor_restante %= 50;

    quantidade = valor_restante / 20;
        printf("%d cédula(s) de R$ 20 \n", quantidade);
    valor_restante %= 20;

    quantidade = valor_restante / 10;
        printf("%d cédula(s) de R$ 10 \n", quantidade);
    valor_restante %= 10;

    quantidade = valor_restante / 5;
        printf("%d cédula(s) de R$ 5 \n", quantidade);
    valor_restante %= 5;

    quantidade = valor_restante / 2;
        printf("%d cédula(s) de R$ 2 \n", quantidade);
    valor_restante %= 2;

    system("pause");
    return 0;
}