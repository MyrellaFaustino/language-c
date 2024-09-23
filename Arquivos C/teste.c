#include <stdio.h>

int main() {
    float f, t, c, ali, p, fu;
    scanf("%f", &c);
    scanf("%f", &ali);
    scanf("%f", &p);
    scanf("%f", &f);
    
    t = (c * f) + (c * p);
    fu = (t + (c * f) + (t * 0.6)) / (1 - ali);
    
    printf("%.2f\n", c);
    printf("%.2f\n", c * p);
    printf("%.2f\n", c * f);
    printf("%.2f\n", t);
    printf("%.2f\n", t * 0.6);
    printf("%.2f\n", fu * ali);
    printf("%.2f\n", (t * ali) + (t * 0.6));
    printf("%.2f\n", f);
    
    if(p > 2500){
        printf("Impostos calculados sem o frete");
    }else{
        printf("Impostos calculados com o frete");
    }
    
    return 0;
}