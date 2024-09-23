#include <stdio.h>

float media(float num[], int i, int max, float s){
    if(i == max){
        return s;
    }
    return(num, i +1, max, s +num[i]);
}

void ler(int num[], int i, int n){
    if(i == n){
        return;
    }
    scanf("%f", &num[i]);
    
    ler(num, i +1, n);
}

int main() {
    int n; 
    float num[10000];
    
    scanf("%d", &n);
    
    ler(num, 0, n);
    
    printf("%f", media(num, 0, n, 0)/n);
    
	return 0;
}