#include <stdio.h>

void ler(int n, int contador)
{
    int a;
    scanf("%d", &a);

    if(n == -1){
        return;

    }else{
        if(n == a){
            return contador+1;
            ler();
        }else{
            ler();
        }
    }

    ler();
}

int main()
{
    int n;
    scanf("%d", &n);
    resposta = ler(n,0);

    printf("%d appeared %d times",n, resposta);
    return 0;
}