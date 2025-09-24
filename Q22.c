#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    int valor1, valor2, adicao, subtracao, multiplicacao, opcao;
    float divisao;
    
    printf("Digite 2 valores válidos abaixo. \n");
    if (scanf("%d %d", &valor1, &valor2) != 2)
    {
        printf("Você digitou um valor inválido. Tente novamente. \n");
        return 1;
    }

    printf("\nSelecione a operacao: \n");
    printf("(1) Adicao \n");
    printf("(2) Subtracao n");
    printf("(3) Multiplicacao \n");
    printf("(4) Divisao \n");
    printf("Opcao: ");

    if (scanf("%d", &opcao) != 1)
    {
        printf("Opcao invalida. \n");
        return 1;
    }

    if (opcao == 1)
    {
        adicao = valor1 + valor2;
        printf("Resultado: %d + %d = %d \n", valor1, valor2, adicao);
    }
    else if (opcao == 2)
    {
        subtracao = valor1 - valor2;
        printf("Resultado: %d - %d = %d \n", valor1, valor2, subtracao);
    }
    else if (opcao == 3)
    {
        multiplicacao = valor1 * valor2;
        printf("Resultado: %d * %d = %d \n", valor1, valor2, multiplicacao);
    }
    else if (opcao == 4)
    {
        if (valor2 == 0)
        {
            printf("Erro: divisao por zero nao permitida. \n");
        }
        else
        {
            divisao = (float)valor1 / (float)valor2; 
            printf("Resultado: %d / %d = %.6f \n", valor1, valor2, divisao);
        }
    }
    else
    {
        printf("Voce nao selecionou nenhuma das opcoes acima. \n");
    }

    system("pause");
    return 0;
}