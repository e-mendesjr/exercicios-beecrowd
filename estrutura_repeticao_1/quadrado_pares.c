#include <stdio.h>
#include <math.h>
 
int main() {
    // leia um inteiro
    // apresente o quadrado de cada um dos valores pares, de 1 até n, inclusive n se for o caso

    int n, i, par, quadrado;
    scanf("%d", &n);
    for(i = 0; i < n; i = i + 2)
    {
        par = i + 2;
        quadrado = pow(par, 2);
        printf("%d^2 = %d\n", par, quadrado);
    }
 
    return 0;
}