#include <stdio.h>

int sequencia(int t, int n, int i)
{
    if(t == 0){
        return n;
    }
    else if (i == 0){
        return sequencia(t - 1, n + 3, 1);
    }
    else{
        return sequencia(t - 1, n + n % 5, 0);
    }
}

int main()
{
    int n, t;

    scanf("%d %d", &n, &t);

    printf("%d",sequencia(t, n, 0));

    return 0;
}