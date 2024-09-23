#include <stdio.h>

int primo(int a)
{
    if (a == 0){
        return;
    }else{
        return primo(a % a / 2);    
    }
}

int main()
{
    int a, b;
    scanf("%d", &a);

    printf("%d", primo(a));

    return 0;
}