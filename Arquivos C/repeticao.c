#include <stdio.h>
#include <math.h>

int quadrado(int n,int a, int b){
    
    if (n == pow(a,2) - pow(b,2)){
        
        return printf("%d - %d\n",a, b);

    }else{
        return quadrado(n, a+1,b+1);
    }

}

void ler(){
    int n;

    scanf("%d", &n);
    if (n == 0){
        
        return;

    }else{
    ler();
    }

}

int main(){
    ler();

    return 0;
}