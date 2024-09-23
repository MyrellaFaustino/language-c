#include <stdio.h>

int pares(int n[], int  i){
    if(i == -1){
        return 0;
    }
    if(n[i] % 2 == 0){
        printf("%d", n[i]);
    }

    return pares(n, i-1);
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
    int numeros[10];

    ler(numeros, 0, 10);

    pares(numeros, 9);

    return 0;
}