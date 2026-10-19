#include <stdio.h>
 
int main() {
 
    // leia 5 valores inteiros
    // mostre quantos valores foram pares, ímpares, positivos e negativos
   
    int n, i, par = 0, impar = 0, positivo = 0, negativo = 0;
    for(i = 0; i < 5; i = i + 1)
    {
        scanf("%d", &n);
        if(n % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
        if(n > 0)
        {
            positivo = positivo + 1;
        }
        if(n < 0)
        {
            negativo = negativo + 1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);
 
    return 0;
}