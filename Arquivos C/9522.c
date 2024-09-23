#include <stdio.h>

int indice(int n[], int i, int max, int imaior){
    if(i == max){
        return imaior;
    }
    if(n[i] >= n[imaior]){
        imaior = i;
    }

    return indice(n, i+1, max, imaior);
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

    printf("%d", indice(numeros, 1, 10, 0));

    return 0;
}