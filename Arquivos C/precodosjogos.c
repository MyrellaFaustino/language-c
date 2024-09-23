#include <stdio.h>

float promo(int n[], float p[], int i, int max, float v, float a){
    if(i == max){
        return 0;
    }
    if(p[i] <= 45.00){
        printf("Jogo[%d] = R$%.2f\n", i, p[i]);
        return promo(n, p, i +1, max, v, a);
    }
        if(p[i] <= 100.00 && p[i] > 45.00){
        if(n[i] == 0){
            a = 100 - (25/2);
        }
        if(n[i] == 1){
            a = 100 - (20/2);
        }
        if(n[i] == 2){
            a = 100 - (18/2);
        }
        if(n[i] == 3){
            a = 100 - (15/2);
        }
        if(n[i] == 4){
            a = 100 - (12/2);
        }
        if(n[i] == 5){
            a = 100 - (10/2);
        }
    }
        if(n[i] == 0){
            a = 0.75;
        }
        if(n[i] == 1){
            a = 0.8;
        }
        if(n[i] == 2){
            a = 0.82;
        }
        if(n[i] == 3){
            a = 0.85;
        }
        if(n[i] == 4){
            a = 0.82;
        }
        if(n[i] == 5){
            a = 0.9;
        }
    v = (((p[i] * a) * a)* a);
    
    if(p[i] <= 100.00 && p[i] > 45.00){
        if(v < 45.00){
            v = v + (p[i]/3);
        }
    }
    printf("Jogo[%d] = R$%.2f\n", i, v);
    return promo(n, p, i +1, max, v, a);
}

void ler(int n[], float p[], int i, int max){
    if(i == max){
        return;
    }
    scanf("%d %f", &n[i], &p[i]);
    
    return ler(n, p, i +1, max);
    
}

int main() {
    int niveis[5], max;
    float preco[100];
    scanf("%d", &max);
    
    ler(niveis, preco, 0, max);
    
    promo(niveis, preco, 0, max, 0, 0);
    
    return 0;
}