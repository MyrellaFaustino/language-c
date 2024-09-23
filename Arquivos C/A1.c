#include <stdio.h>
// Dadas as coordenadas de um ponto (x,y) o programa determina a posição no circulo
int main(){
    int X, Y, R;
    scanf("%d %d %d", &X, &Y, &R);

    if (R*R == (Y*Y) + (X*X))
    {
       printf("Sobre");
    }
    if (R*R > (Y*Y) + (X*X))
    {
       printf("Dentro");
    }
    if (R*R < (Y*Y) + (X*X))
    {
       printf("Fora");
    }
    
}