#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    double valor_compra, valor_pago;

    printf("Digite o valor da compra: ");
    scanf("%lf", &valor_compra);
    
    printf("Digite o valor que vai ser pago: ");
    scanf("%lf", &valor_pago);
    
    float troco;
    troco = valor_pago - valor_compra;

    printf("Valor do troco = R$ %.2f \n", troco);

    int valor_decimal, quantidade;
    valor_decimal = troco * 100;

    quantidade = valor_decimal / 20000;
    printf("%d cédula(s) de R$ 200 \n", quantidade);
    valor_decimal %= 20000;

    quantidade = valor_decimal / 10000;
    printf("%d cédula(s) de R$ 100 \n", quantidade);
    valor_decimal %= 10000;

    quantidade = valor_decimal / 5000;
    printf("%d cédula(s) de R$ 50 \n", quantidade);
    valor_decimal %= 5000;

    quantidade = valor_decimal / 2000;
    printf("%d cédula(s) de R$ 20 \n", quantidade);
    valor_decimal %= 2000;

    quantidade = valor_decimal / 1000;
    printf("%d cédula(s) de R$ 10 \n", quantidade);
    valor_decimal %= 1000;

    quantidade = valor_decimal / 500;
    printf("%d cédula(s) de R$ 5 \n", quantidade);
    valor_decimal %= 500;

    quantidade = valor_decimal / 200;
    printf("%d cédula(s) de R$ 2 \n", quantidade);
    valor_decimal %= 200;

    quantidade = valor_decimal / 100;
    printf("%d cédula(s) de R$ 1 \n", quantidade);
    valor_decimal %= 100;

    quantidade = valor_decimal / 50;
    printf("%d moeda(s) de R$ 0.50 \n", quantidade);
    valor_decimal %= 50;

    quantidade = valor_decimal / 25;
    printf("%d moeda(s) de R$ 0.25 \n", quantidade);
    valor_decimal %= 25;

    quantidade = valor_decimal / 10;
    printf("%d moeda(s) de R$ 0.10 \n", quantidade);
    valor_decimal %= 10;

    quantidade = valor_decimal / 5;
    printf("%d moeda(s) de R$ 0.05 \n", quantidade);
    valor_decimal %= 5;

    quantidade = valor_decimal / 1;
    printf("%d moeda(s) de R$ 0.01\n", quantidade);
    valor_decimal %= 1;

    return 0;
}
