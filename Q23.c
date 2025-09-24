#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    
    double a, b, c, x1, x2, discriminante;

    printf("Digite valores de A, B e C para calcular as raízes de uma equação do 2º Grau: \n");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Você digitou um valor inválido. Tente novamente. \n");
        return 1;
    }

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Equação indeterminada. \n");
                return 0;
            } else
            {
                printf("Equação impossível. \n");
                return 0;
            }
        } 
        else
        {
            x1 = -c / b;
            printf("Você informou A = %.2f, B = %.2f e C = %.2f \n", a, b, c);
            printf("Você obteve apenas uma raiz real que foi calculada em uma equação do 1º grau que é = %.2f \n", x1);
            return 0;
        }    
    }

    if (a != 0)
    {
        printf("Você informou A = %.2f, B = %.2f e C = %.2f \n", a, b, c);
        discriminante = (b * b) - (4 * (a * c));
        if (discriminante < 0)
        {
            printf("Não existem raízes reais. \n");
        }
        else if (discriminante == 0)
        {
            x1 = -b / (2 * a);
            printf("Há duas soluções iguais com uma raíz única: %.2f. \n", x1);
        }
        else if (discriminante > 0)
        {
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("Há duas soluções reais e diferentes: %.2f e %.2f. \n", x1, x2);
        }
    }    

    system("pause");
    return 0;
}