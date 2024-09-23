#include <stdio.h>

int checar(int x, int a[], int tamanho){
    if(tamanho == 0){
        return 0;
    }

    if(a[tamanho-1] == x){
        return 1 + checar(x, a, tamanho -1);
    }
    else{
        return checar(x, a, tamanho -1);
    }
}

void ler(int a[], int i, int tamanho){

    if(i == tamanho){
        return;
    }

    scanf("%d", &a[i]);

    ler(a, i+1, tamanho);
}

int main(){
    int numeros[10];
    int x, resposta;

    ler(numeros,0,10);
    scanf("%d", &x);

    resposta = checar(x, numeros, 10);

    printf("%d\n");

    return 0;
}