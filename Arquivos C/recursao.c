#include <stdio.h>
#include <math.h>       // Recursão

long Eu(int x){
    if (A % D || x == 1){
        return 1;                   // Passo base
    }

    return x * fatorial(x-1);       // Passo recursivo
}

int main(){
    int A, D, Q, R;
    long res;
    scanf("%d %d", &A, &D);
    res = Eu(x);

    return A % D

    printf("MDC(%d,%d)=%d\n", A, D, res);
}