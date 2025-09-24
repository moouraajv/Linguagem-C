#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    double raio, altura, area, volume;
    const double pi = 3.1415;
    printf("Informe o valor do raio: ");
    scanf("%lf", &raio);

    printf("Informe o valor da altura: ");
    scanf("%lf", &altura);

    area = 2 * pi * raio * (raio + altura);
    volume = pi * (raio * raio) * altura;

    printf("Área: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);

    system("pause");
    return 0;
}