#include <stdio.h>

int batalha(int partidas){
    if(partidas == 0){
        return 0;
    }else{
        int v1,v2,d1,d2;
        scanf("%d %d %d %d",&v1,&v2,&d1,&d2);

        Clodes  = d1 + 50;
        Bezaliel = d1;

        if(v2 / Clodes > v1 /Bezaliel){
            printf("Clodes");
            return(partidas - 1);

        }else{
            printf("Bezaliel");
            return(partidas - 1);
        }
    }
}

int main(){
    int partidas;
    scanf("%d",&partidas);
    resposta = batalha(partidas);

    printf("%d",resposta);
}