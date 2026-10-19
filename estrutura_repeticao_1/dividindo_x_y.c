#include <stdio.h>
 
int main() {
    // a entrada contém um número inteiro n, representando a quantidade de pares a serem lidos em seguida
    // leia 2 números
    // imprima o resultado da divisão do primeiro pelo segundo
    // caso não for possível imprima: "divisao impossivel" 

    int n, x, y, i;
    float divisao;
    scanf("%d", &n);
    for(i = 0; i < n; i = i + 1)
    {
        scanf("%d%d", &x, &y);
        if(y != 0)
        {
            divisao = (float) x / y;
            printf("%.1f\n", divisao);
        }
        else
        {
            printf("divisao impossivel\n");   
        }


    }
    
 
    return 0;
}