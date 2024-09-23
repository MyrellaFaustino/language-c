#include <stdio.h>
#include <math.h>

int main()
{
    int h;
    scanf("%d", &h);

    if(h <= 5 || h >= 18)
    {
        printf("Escuro");
    }
    else
    {
        printf("Claro");
    }
}