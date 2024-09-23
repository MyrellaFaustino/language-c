#include <stdio.h>

int decrescente(int x)
{
    if (x >= 1)
    {
        printf("%d\n", x); // Primeiro imprimo x

        decrescente(x - 1); // Depois chamo a função
    } 
}

void crescente(int x)
{
    if (x >= 1)
    {
        crescente(x - 1); // Primeiro chamo a função

        printf("%d\n", x); // Depois imprimo x
    } 
}

int main()
{
    int n;

    scanf("%d", &n);
    
    decrescente(n);
    crescente(n);
}