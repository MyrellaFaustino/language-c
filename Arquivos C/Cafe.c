#include <stdio.h>

int recursao(char c, int cap){
    if(c == 'p' || c == 'P'){
        return cap + 10;
    }
    else{
        return cap + 16;
    }
}

void loop(int i)
{
    int Quantidade;
    char Caixas;
 
    if(i == 0){
        printf("%d", recursao(Caixas,0));
        return 0;
    }else{
        scanf("%d %c", &Quantidade, &Caixas);
        recursao(Caixas,0);
    }
    loop(i-1);
}

int main()
{
    loop(7);
    return 0;
}