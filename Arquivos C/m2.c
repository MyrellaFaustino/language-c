#include <stdio.h>

int div(int n,int i, int r){
    
    if(n % i == 1){
        return ;

    }else{
        return div(n,i+1,n+1);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    if(n % 3 == 1){
        printf("O numero nao possui divisores multiplos de 3!");
    }else{
        div(n,2,1);
    }

    return 0;
}