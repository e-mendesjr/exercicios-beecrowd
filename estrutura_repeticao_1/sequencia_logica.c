#include <stdio.h>
 
int main() {
 
    // leia dois valores inteiros x e y
    // mostre uma sequência de 1 até y passando para a próxima linha a cada x números
    // código incompleto / incorreto
    int x, y, i, sequencia;
    scanf("%d%d", &x, &y);
    for(i = 0; i < y; i = i + 1)
    {
        sequencia = i + 1;
        printf("%d ", sequencia);
        if(i % x == 0 || i == y)
        {
            printf("\n");
        }
        
    }
 
    return 0;
}