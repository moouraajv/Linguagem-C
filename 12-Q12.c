#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    double x = 7, y = 8, z = 9, a = 4, b = 5, c = 6;
    double media_aritmetica, media_aritmetica2, media, soma;
    media_aritmetica = (x + y + z) / 3;
    media_aritmetica2 = (a + b + c) / 3;

    printf("A média aritmética de %.1f, %.1f e %.1f = %.1f \n", x, y, z, media_aritmetica);
    printf("A média aritmética de %.1f, %.1f e %.1f = %.1f \n", a, b, c, media_aritmetica2);

    soma = media_aritmetica + media_aritmetica2;
    media = soma / 2;

    printf("A soma das 2 médias %.1f e %.1f = %.1f \n", media_aritmetica, media_aritmetica2, soma);
    printf("A média das 2 médias %.1f e %.1f e = %.1f \n", media_aritmetica, media_aritmetica2, media);

    system("pause");
    return 0;
}
