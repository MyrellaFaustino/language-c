#include <stdio.h>

int position(int n[], int i, int max, int imaior){
    if(i == max){
        return 0;
    }
    if(n[i] <= n[])
    if(n[i] <= n[imaior]){
        printf("%d", n[i]);
    }

    return position(n, i+1, max, imaior);
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
    int numeros[4];

    ler(numeros, 0, 4);

    position(numeros, 0, 4, 0);

    return 0;
}