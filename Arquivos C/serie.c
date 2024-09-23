// Imprimir todos os multiplos de 5 entre dois numeros a e b (a < b)
#include <stdio.h>
#include <math.h>

void mult5(int a, int b)
{
    if(a <= b)   // Caso base: a == b
    {      
       if (a % 5 == 0) // Se a é multiplo de 5
       {
        printf("%d\n", a);
       }

        mult5(a + 1, b);
    } 
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    mult5(a,b);

    return 0;
}