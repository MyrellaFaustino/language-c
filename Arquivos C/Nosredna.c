#include <stdio.h>

int eh_primo(int n, int p)
{
    if(n == 2){return 1;}
    
    if(n < 2){return 0;}
    
    if(n % p == 0)
    {
        return 0;
    }
    else if(n % p == 1)
    {
        return 1;
    }
    else{
        return (n, p + 1);
    }

}

int main()
{
    int n, a, b;
    scanf("%d %d %d",&n,&a);

    if(eh_primo(a) == 1){
        scanf("%d", &b);

        if(eh_primo(b) == 1){
            printf("%d",a+b);
        }

    }else{
        
    }

    return 0;
}
