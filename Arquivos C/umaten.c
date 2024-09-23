#include <stdio.h>
#include <math.h>

int crescente(int x){
    int res;

    if (x == 1){
        return 1;
    }
    res = crescente (x - 1);
    printf("%d\n", res);

    return x;
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", crescente(n));
}