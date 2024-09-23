#include <stdio.h>

int solucao(float ph)
{
    if(ph > 7)
    {
        printf("Solucao basica");
    }
    else if(ph < 7)
    {
        printf("Solucao acida");
    }
    else{
        printf("Solucao neutra");
    } 
    return 0;
}

int main()
{
    float ph;

    printf("Digite o pH da solucao:")
    scanf("%f", &ph);

    if(ph >= 0 && ph <= 14)
    {
        printf("Valor do pH deve estar entre 0 e 14");
    }
    else
    {
        solucao(ph);
    }
    return 0;
}