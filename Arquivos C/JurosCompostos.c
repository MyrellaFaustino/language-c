#include <stdio.h>

float calculadora(float v, float j, int m, char d){
    float new;
    if(d == 'N' || d == 'n'){
        new = (j / 100) * v;
        if(m == 0){
            return new;
        }else{
            return calculadora(new, j, m -1, d);
        }
    }else{
        new = (j / 100) * v;
        if(m == 0){
            return new;
        }else{
            return calculadora(new, j, m -1, d);
        }
    }
}

int main(){
    float valor, juros, Resultado;
    int meses;
    char decisao;
    
    printf(">>>>>> Juros Compostos <<<<<< \n");

    printf("Digite o valor: \n");
    scanf("%f", &valor);
    
    printf("Digite o juros: \n");
    scanf("%f", &juros);

    printf("Digite quantos meses/anos: \n");
    scanf("%d", &meses);

    printf("Eh desconto (S ou N): \n");
    scanf(" %c", &decisao);

   printf("%.2f", valor + calculadora(valor, juros, meses, decisao));

}