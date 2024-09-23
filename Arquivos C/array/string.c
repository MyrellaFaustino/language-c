#include <stdio.h>

int position(char n[], int i, int max){
    if(i == max){
        return 0;
    }
    printf(" %c", n[i]);

    return position(n, i -1, max);
}

void ler(char numeros[], int i, int max){
    if(i == max){
        return;
    }
    else{
        scanf(" %c", &numeros[i]);
        ler(numeros, i +1, max);
    }
}

int main(){
    char numeros[255];

    ler(numeros, 0, 255);

    position(numeros, 255, 0);

    return 0;
}