#include <stdio.h>
#include <math.h>

int soma(int x){
    if(x == 0){
        return 0;
    }else{
        return pow(2,x) + soma(x-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printf("O somatorio de %d eh %d", n, soma(n));
}