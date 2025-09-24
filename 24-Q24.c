#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    char classe;
    float consumo, tarifa, VF, ICMS, VP;

    printf("================================================== \n");
    printf("   Calcular o Valor a Pagar da Conta de Energia    \n");
    printf("================================================== \n\n");

    printf("Tabela de Tarifas por Classe Consumidora: \n");
    printf("---------------------------------------------- \n");
    printf("| Classe Consumidora | Tarifa (R$)           | \n");
    printf("| A                  | 0.5                   | \n");
    printf("| B                  | 0.8                   | \n");
    printf("| C                  | 1.0                   | \n");
    printf("---------------------------------------------- \n\n");

    printf("Digite a Classe Consumidora (A, B ou C): ");
    scanf(" %c", &classe); 

    printf("Digite o consumo em kWh: ");
    if (scanf("%f", &consumo) != 1 || consumo < 0)
    {
        printf("Você digitou um valor inválido para consumo. \n");
        return 1;
    }

    if (classe == 'A' || classe == 'a')
    {
        tarifa = 0.5;
    }
    else if (classe == 'B' || classe == 'b')
    {
        tarifa = 0.8;
    }
    else if (classe == 'C' || classe == 'c')
    {
        tarifa = 1.0;
    }
    else
    {
        printf("Classe Consumidora inválida. Digite apenas A, B ou C. \n");
        return 1;
    }

    VF = consumo * tarifa; 
    ICMS = 0.3 * VF;       
    VP = VF + ICMS;        

    printf("\n============= Resultado da Conta ============= \n");
    printf("Classe Consumidora: %c \n", classe);
    printf("Consumo: %.2f kWh \n", consumo);
    printf("Tarifa: R$ %.2f \n", tarifa);
    printf("Valor de Fornecimento (VF): R$ %.2f \n", VF);
    printf("ICMS (30%%): R$ %.2f \n", ICMS);
    printf("---------------------------------------------- \n");
    printf("Valor a Pagar (VP): R$ %.2f\n", VP);
    printf("============================================== \n");

    system("pause");
    return 0;
}
