#include <stdio.h>
#include <string.h>

int inverter(char p[], int i){
    
    if(i == -1){
        return 0;
    }

    printf(" %c", p[i]);
   
    return(p, i -1);
}

int main() {
    char palavra[255];
    int tam, i;

    gets(palavra);
    tam = strlen(palavra);

    inverter(palavra, tam);

    return 0;
}
