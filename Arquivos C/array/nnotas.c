#include <stdio.h>

float correct(char gab[], char q[], int i, int max, float c){
    if(i == max){
        return c;
    }
    if(gab[i] == q[i]){
        return correct(gab, q, i +1, max, c +1);
    }
    return correct(gab, q, i +1, max, c);
}

float read(char gab[], float f){
    int n;
    char q[10];
    
    scanf("%d", &n);
    if(n == 9999){
        return f;
    }
    scanf("%s", &q);
    int a = correct(gab, q, 0, 10, 0);
    printf("%d ", n);
    printf("%.2f\n", correct(gab, q, 0, 10, 0));
    
    read(gab, f + a);
}

int main() {
    char gab[10];

    scanf("%s", &gab);
    
    printf("%f", (read(gab, 0)/14));
    
    return 0;
}