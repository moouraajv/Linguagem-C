#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    
    double a, b, c, x1, x2, discriminante;

    printf("Digite valores de A, B e C para calcular as ra�zes de uma equa��o do 2� Grau: \n");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Voc� digitou um valor inv�lido. Tente novamente. \n");
        return 1;
    }

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Equa��o indeterminada. \n");
                return 0;
            } else
            {
                printf("Equa��o imposs�vel. \n");
                return 0;
            }
        } 
        else
        {
            x1 = -c / b;
            printf("Voc� informou A = %.2f, B = %.2f e C = %.2f \n", a, b, c);
            printf("Voc� obteve apenas uma raiz real que foi calculada em uma equa��o do 1� grau que � = %.2f \n", x1);
            return 0;
        }    
    }

    if (a != 0)
    {
        printf("Voc� informou A = %.2f, B = %.2f e C = %.2f \n", a, b, c);
        discriminante = (b * b) - (4 * (a * c));
        if (discriminante < 0)
        {
            printf("N�o existem ra�zes reais. \n");
        }
        else if (discriminante == 0)
        {
            x1 = -b / (2 * a);
            printf("H� duas solu��es iguais com uma ra�z �nica: %.2f. \n", x1);
        }
        else if (discriminante > 0)
        {
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("H� duas solu��es reais e diferentes: %.2f e %.2f. \n", x1, x2);
        }
    }    

    system("pause");
    return 0;
}