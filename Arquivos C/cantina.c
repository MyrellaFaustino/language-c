#include <stdio.h>

int main()
{
    char Comida, Bebida, ValorTotal;
    scanf("%c %c", &Comida, &Bebida);

    if(Comida == 'lasanha' || Comida == 'Lasanha'){
        if(Bebida == 'refrigerante' || Bebida == 'Refrigerante'){
            ValorTotal = 11.00;
        }
        if(Bebida == 'Suco' ){
            ValorTotal = 10.50;
        }
    }
    if(Comida == 'Strogonoff' ){
        if(Bebida == 'refrigerante' ){
            ValorTotal = 14.00;
        }
        if(Bebida == 'Suco' ){
            ValorTotal = 13.50;
        }
    }
    return 0;
}