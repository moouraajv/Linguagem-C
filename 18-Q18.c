#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    double quantidade, total, valor1 = 0.30, valor2 = 0.25;
    char resto;

    printf("Cada maçã está saindo por R$0.30 centavos. \n");
    printf("Se você comprar pelo menos 12 ou mais maçãs, cada maçã sai por R$0.25 centavos. \n");
    printf("Digite quantas maçãs serão compradas: ");
    if (scanf("%lf%c", &quantidade, &resto) != 2 || resto != '\n')
    {
        printf("Você digitou uma quantidade inválida, tente novamente");
        return 1;
    }

    if (quantidade >= 12)
    {
        total = quantidade * valor2;
        printf("Você comprou %.f maçã(s), o total da sua compra foi de R$%.2f. \n", quantidade, total);
    } else if (quantidade > 0 && quantidade < 12)
    {
        total = quantidade * valor1;
        printf("Você comprou %.f maçã(s), o total da sua compra foi de R$%.2f. \n", quantidade, total);
    } else
    {
        printf("Você digitou uma quantidade inválida, tente novamente");
        return 1;
    }
    
    system("pause");
    return 0;
}
