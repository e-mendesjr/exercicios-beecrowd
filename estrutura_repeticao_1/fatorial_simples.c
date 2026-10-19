#include <stdio.h>
 
int main() {
    
    // leia um valor inteiro n, calcule e mostre o seu fatorial
    int n, i, n_fatorial = 1, x = 0;
    scanf("%d", &n);
    for(i = 1; i < n; i = i + 1)
    {
        x = (n - i);
        n_fatorial = x * n_fatorial + n_fatorial;
    }
    printf("%d\n", n_fatorial);
    
    return 0;
}