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
void ler(int n2, int i){
    if(numeros[i] == 0){
        printf("%d", numeros[indice(numeros, 1, 10, 0)]);
        return;
    }
    scanf("%d", &numeros[i]);
    ler(numeros, i +1);
}

void ler(int numeros[], int i){
    if(numeros[i] == 0){
        printf("%d", numeros[indice(numeros, 1, 10, 0)]);
        return;
    }
    scanf("%d", &numeros[i]);
    ler(numeros, i +1);
}

int main(){
    int numeros[100];
    int n2[100];

    ler(numeros,n2, 0);

    return 0;
}