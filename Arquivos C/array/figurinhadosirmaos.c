#include <stdio.h>

int Joao(int n[], int i, int max, int fig){
    if(i == max){
        return fig;
    }
    if(n[i] % 2 == 0){
        fig++;
    }
    return Joao(n, i+1, max, fig);
}

int Maria(int n[], int i, int max, int fig){
    if(i == max){
        return fig;
    }
    if(n[i] % 2 == 1){
        fig++;
    }
    return Maria(n, i+1, max, fig);
}

int Soma(int n[], int i, int max, int s1, int s2){
    if(i == max){
        if(s1 > s2){
            return s1;
        }
        return s2;
    }
    if(n[i] % 2 == 0){
        return Soma(n, i +1, max, s1 + n[i], s2);
    }else{
        return Soma(n, i +1, max, s1, s2 + n[i]);
    }
}

void ler(int numeros[], int i, int max){
    if(i == max){
        return;
    }
    else{
        scanf("%d", &numeros[i]);
        if (!ncontados[numeros]) {
            ncontados[numeros] = true;
        ler(numeros, i +1, max);
    }
}

int main(){
    int n, numeros[10000];
    bool ncontados[10000] = {false};
    scanf("%d", &n);
    
    ler(numeros, 0, n);

    printf("%d \n", Joao(numeros, 0, n, 0));
    printf("%d \n", Maria(numeros, 0, n, 0));
    printf("%d", Soma(numeros, 0, n, 0, 0));

    return 0;
}