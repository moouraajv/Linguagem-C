#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    double raio, area;
    const double pi = 3.1415;
    printf("Informe o n�mero do raio: ");
    scanf("%lf", &raio);
        area = pi * (raio * raio);
        printf("O resultado da �rea do c�rculo do raio %.2f �: %.2f \n", raio, area);

    system("pause");
    return 0;
}