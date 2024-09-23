#include <stdio.h>
// leia 10 números com array e imprima em ordem decrescente

int imprimir(int a[], int i, int max){
    if(i == max){
        return 0;
    }
    printf("%d ", a[i]);
    return imprimir(a, i +1, max);
}

void bubble(int a[], int i, int fim){
    if(i < (fim -1)){
        if (a[i] > a[i+1]){
            int aux = a[i];
            a[i] = a[i +1];
            a[i +1] = aux;
        }

        bubble(a, i +1, fim);
    }
}

void sort(int a[], int i, int max){
    if(i < (max -1)){
        // coloca o maior elemento na última posição do array
        bubble(a, i, max);
        sort(a, i, max -1);
    }
}

void ler_array(int numeros[], int i, int max){
    if(i == max){
        return;
    }
    else{
        scanf("%d", &numeros[i]);
        ler_array(numeros, i +1, max);
    }
}

int main(){
    int a[10];

    ler_array(a, 0, 10);
    sort(a, 0, 10);
    imprimir(a, 0, 10);

    return 0;
}