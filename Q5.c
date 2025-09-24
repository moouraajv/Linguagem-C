#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    float centimetro, conversor, polegada = 2.54;
    printf("Informe o número em centímetros: ");
    scanf("%f", &centimetro);
    conversor = centimetro / polegada;
    printf("Convertendo %.2fcm para polegadas \n| fica aproximadamente = %.2f pol \n", centimetro, conversor);
    system("pause");
    return 0;
}