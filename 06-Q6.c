#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    double raio, area;
    const double pi = 3.1415;
    printf("Informe o número do raio: ");
    scanf("%lf", &raio);
        area = pi * (raio * raio);
        printf("O resultado da área do círculo do raio %.2f é: %.2f \n", raio, area);

    system("pause");
    return 0;
}
