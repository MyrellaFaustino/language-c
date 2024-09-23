#include <stdio.h>
#include <math.h>

int fat(int x){
    if (x == 1 || x == 0)
    {
        return 1;
    }
    return x * fat(x-1);
}

int log(int x, int i){
    if(pow(3,i) > x){
        printf("Nao tem");
        return 0;
    }
    if(pow(3,i) == x){
        return i;
    }
    else{
        return log(x,i+1);
    }
    
}

int main(){
    int n, a;
    scanf("%d", &n);

    a = log(n,1);
    b = fat(a);

    printf("%d",b);

}