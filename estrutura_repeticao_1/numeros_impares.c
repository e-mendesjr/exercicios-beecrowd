#include <stdio.h>

int main(){
    // leia um valor inteiro x
    // imprima todos os valores ímpares até x, inclusive ele, se for o caso

    int x, i = 1;
    scanf("%d", &x);
    while (i <= x)
    {
        printf("%d\n", i);
        i = i + 2;
    }
        
}