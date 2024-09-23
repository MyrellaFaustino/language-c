#include <stdio.h>

int fatorial(int z) {
    if (z == 0 || z == 1) {
        return 1;
    }
    return z * fatorial(z - 1);
}

int eh_primo(int x, int divisor) {
    if (x <= 1) {
        return 0;
    }
    if (divisor == 1) {
        return 1;
    }
    if (x % divisor == 0) {
        return 0;
    }
    return eh_primo(x, divisor - 1);
}

int proximo_primo(int y) {
    if (eh_primo(y, y - 1)) {
        return y;
    }
    return proximo_primo(y + 1);
}

double serie(int n, int termo_atual, int primo_atual) {
    if (termo_atual > n) {
        return 0;
    }

    int fatorial_atual = fatorial(termo_atual);
    int divisor_atual = (termo_atual == 1) ? 1 : proximo_primo(primo_atual);
    double termo = (double)fatorial_atual / divisor_atual;

    printf("%d!/%d = %.2f\n", termo_atual, divisor_atual, termo);

    return termo + calcular_serie(n, termo_atual + 1, divisor_atual + 1);
}

int main() {
    int n;
    double soma;
    scanf("%d", &n);

    soma = calcular_serie(n, 1, 1);

    printf("%.2f\n",soma);

    return 0;
}
