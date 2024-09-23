
#include <stdio.h>
int eh_primo(int x, int p) 
{   
    if(x < 2){
        return 0;
    }
    if(p * p > x){
        return 1;
    }
    if(x % p == 0){
        return 0;
    }
    return eh_primo(x, p +1);
}

int proximo_primo(int y) 
{
    if(eh_primo(y, 2)){
        return y;
    }
    return proximo_primo(y + 1);
}

int fatorial(int z) 
{
    if(z == 1 || z == 0){
        return 1;
    }
    else{
        return z * fatorial(z - 1);
    }
}

double serie(int n, int a, int b)
{
    int numerador, divisor;
    double termo;
    if(a > n){
        return 0;
    }

    numerador = fatorial(a);
    divisor = (a == 1) ? 1 : b;
    termo = numerador / divisor;
    
    printf("%d/%d", a, divisor);

    if(a < n){
        printf("+ ");
    }
    return termo + serie(n, a+1, proximo_primo(b+1));
}

int main() 
{
    int n;
    double resposta;
    scanf("%d", &n);
    
    resposta = serie(n,1,2);

    printf("%d", resposta);
}