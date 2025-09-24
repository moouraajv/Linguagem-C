#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    double salario_fixo, total_venda, comissao, salario_final;
    const double taxa_comissao = 0.15;
    
    printf("Informe o salário fixo: ");
    scanf("%lf", &salario_fixo);

    printf("Informe o valor do total de vendas do mês: ");
    scanf("%lf", &total_venda);
    
    comissao = taxa_comissao * total_venda;
    salario_final = salario_fixo + comissao;

    printf("\n");
    printf("Valor do Salário fixo = R$%.2f \n", salario_fixo);
    printf("Valor da comissão = R$%.2f \n", comissao);
    printf("Valor do salário final do mês = R$%.2f \n", salario_final);
    system("pause");
    return 0;
}
