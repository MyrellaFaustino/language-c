#include <stdio.h>

int mdc(int a, int b)
{
    if (a%b == 0){
        return b;
    }else{
        return mdc(b, a % b);    
    }
}

int casos(int n)
{    
    if(n == 0)
    { 
        return 0;
    }
    else
    {
        int a, b;

        scanf("%d %d", &a, &b);
        printf("MDC(%d,%d)=%d",a, b, mdc(a,b));  

        return casos(n - 1);
    }
}

int main()
{
    int x;

    scanf("%d", &x);
    casos(x);

    return 0;
}