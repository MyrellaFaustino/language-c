#include <stdio.h>

int triangular(int n,int a){
    int b = a + 1;
    int c = a + 2;
    
    if(a * b * c == n){
        printf("%d * %d * %d = %d",a,b,c,n);

    }else{
        return triangular(n,a+1);
    }
}

int main(){
    int n, i;
    scanf("%d", &n);

    if(n % 2 == 1 || n <= 0){
        printf("Falso");
    }else{
        triangular(n,2);
    }

    return 0;
}