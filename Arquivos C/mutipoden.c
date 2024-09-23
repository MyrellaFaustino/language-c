#include <stdio.h>

int multiplo(int n,int a,int b,int i){

    if(a % n == 0){
        printf("%d", n);
    }else if(a % n == 1){
        return multiplo(n,a+1,b);
    }
    else{
       printf("INEXISTENTE");
    }
    return;
}

int main(){
    int N, a, b, resposta;
    scanf("%d %d %d", &N, &a, &b);

    if(n == a && n == b){
        printf("%d", N);
    }
    if()

    resposta = multiplo(N,a,b);

   printf("%d",resposta);
    return 0;
}
