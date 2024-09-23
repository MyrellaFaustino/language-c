#include <stdio.h>

int divisores(int x,int divisor){
    if(divisor == 0){
        return 0;
    }
    else if(x % divisor == 0 && divisor % 3 == 0){
        return 1 + divisores(x,divisor - 1);

    }else{
        return divisores(x,divisor - 1);
    }
}

int main(){
    int x, resposta;
    scanf("%d", &x);
    
    resposta = divisores(x,x);

    if(resposta > 0){
        printf("%d",resposta); 
    }else{
        printf("O numero nao possui divisores multiplos de 3!");
    }
}