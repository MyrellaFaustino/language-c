#include <stdio.h>

int limite(int s[], int e[], int i, int max, int res, int cont){
    if(i == max){
        return contador;
    }
    int c = (res + s[i]) - e[i];
    if(c > max){
        return limite(s, e, i +1, max, res, cont +1);
    }
    return limite(s, e, i +1, max, res, cont);
}

void ler(int i, int l){
    if(i == l){
        return;
    }
    scanf("%d %d", &s[i], &e[i]);
    if(e[i] > 10){
        printf("S");
        return;
    }
    ler(i +1, l);
}

int main() {
    int l, max, s[1000], e[1000];
    scanf("%d %d", &l, &max);
    
    ler(0, l);
    
    limite(s[], e, i, max, res);

    return 0;
}