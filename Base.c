#include <stdio.h> // Biblioteca que serve para usar os comandos de ler e escrever na tela
#include <locale.h> // Biblioteca para caracteres especiais e acentua��o
#include <stdlib.h> // Biblioteca auxiliar
// \n - � usada para pular uma linha |

int main()
{
    setlocale(LC_ALL, "");
    printf("Ol�, Mundo!\n");
    printf("Hello World!\n");
    return 0;
}