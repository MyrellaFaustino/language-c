#include <stdio.h>

int funcao(int n, int p)
{
    if(n % p == 0)
    {
        return 0;
    }
    else{
        return (n, p + 1);
    }

}

void ler()
{
    int n;
    scanf("%d", &n);

    if(n == -1)
    {
        return 0;
    }
    else{
        printf("%d",funcao(n, 2));

        ler();  
    }
}

int main()
{
    ler();

    return 0;
}
