#include <stdio.h>

int preco(int){
    
}

void ler(int numeros[], int i, int max){
    if(i == max){
        return;
    }
    else{
        scanf("%d", &numeros[i]);
        ler(numeros, i +1, max);
    }
}

int main(){
    int n, d;
    float p;
    
    scanf("%d", &n);
    int numeros[n];
    float precos[p];

    ler(numeros,precos, 0, n);

    preco(numeros);

    return 0;
}