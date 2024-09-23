#include <stdio.h>

int funcao(int n, int j, int cont){
    if(n == j){
        return cont;
    }
    if(n % 2 == 0){
        return funcao(n/2, j, cont +1);
    }else{
        return funcao((n*3)+1, j, cont +1);
    }
}

int main(){
    int i, j;
    
    scanf("%d", &i);
    scanf("%d", &j);
    
    printf("%d", funcao(i, j, 0));

    return 0;
}