#include <stdio.h>

int substituir(int n[], int a, int b, int i, int max){
    n[a] = 0;
    n[b] = 0;
    printf("%d", indice(numeros, 1, 4, 0));
    return 0;
}

int indice2(int n[], int i, int max, int imenor){
    if(i == max){
        return imenor;
    }
    if(n[i] <= n[imenor]){
        imenor = i;
    }
    return indice2(n, i+1, max, imenor);
}

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
    int numeros[4], a, b;

    ler(numeros, 0, 4);

    a = indice(numeros, 1, 4, 0);
    b = indice2(numeros, 1, 4, 0);
    
    substituir(numeros, a, b, 0, 4);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}