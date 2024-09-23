#include <stdio.h>
#include <math.h>

int fat(int x){
    if (x == 1 || x == 0)
    {
        return 1;
    }
    return x * fat(x-1);
}

int main(){
    int a;
    scanf("%d", &a);

    if (a == -1){return;}

    printf("%d\n", fat(a));

    fat(a);
}