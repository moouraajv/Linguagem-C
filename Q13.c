#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    double preco_fabrica, imposto, revendedor, preco_final;

    printf("Digite o valor do ve�culo saindo da f�brica: R$");
    scanf("%lf", &preco_fabrica);

    imposto = preco_fabrica * 0.45;
    revendedor = preco_fabrica * 0.28;
    preco_final = preco_fabrica + imposto + revendedor;

    printf("Valor do v�iculo saindo da fabrica � R$%.2f \n", preco_fabrica);
    printf("Somando ao valor do imposto de R$%.2f e a porcentagem do revendedor de R$%.2f \n", imposto, revendedor);
    printf("O valor final do ve�culo fica em torno de R$%.2f \n", preco_final);

    system("pause");
    return 0;
}