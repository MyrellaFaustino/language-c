#include <stdio.h>

int square(int n)
{
    int a, b;

    if(n % 2 == 1){ //impar
        a = (n-1)/2;
        b = a + 1;

        printf("%d - %d = %d",b*b,a*a,n);
    }else{
        square(n+1);
    }
}

void ler()
{
    int n;
    scanf("%d", &n);

    if(n == 0){
        return;
    }
    square(n);

    ler();
}

int main()
{
   ler();

   return 0; 
}