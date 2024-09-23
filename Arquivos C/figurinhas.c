#include <stdio.h>

int Qfiguras(n[], int i){
    if(i == -1){
        return f;
    }
    return n[i] + Qfiguras(n[], i -1);
}

int somatorio(int n[], int i, int soma){
    if(i == 0){
        return soma;
    }
}

void ler(int n[], int i, int u){ 
    int res;
    if (i == 0){
        return;
    }
    scanf("%d", &n[u]);

    ler(n, i -1, u +1);

    Qfiguras();

    somaJ = 
    somaM =

    if(somaJ > somaM){
        printf("%d", somaJ);
    }else{
        printf("%d", somaM);
    }
}

int main(){
    int figuras;
    int numeros[10000];
    scanf("%d", &figuras);
    ler(numeros, figuras, 0);

    return 0;
}
