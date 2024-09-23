#include <stdio.h>
#include <math.h>

int fat(int n){

    if(n == 0 || n == 1){
        return 1;

    }else{
       return n * fat(n-1);
    }
    
}

void ler(){ 
    int n, resposta;

    scanf("%d", &n);
    if (n == -1){
        
        return;

    }else{

    resposta = fat(n);

    printf("%d\n", resposta);

    ler();
    }

}

int main(){
    ler();

    return 0;
}
