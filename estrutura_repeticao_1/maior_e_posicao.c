#include <stdio.h>
 
int main() {
 
    // leia 100 valores inteiros
    // apresente o maior valor lido e a sua posição dentre os 100

    int n, i, posicao, posicao_maior, n_maior;
    for(i = 0; i < 100; i = i + 1)
    {
        scanf("%d", &n);
        posicao = i + 1;
        if(n > n_maior)
        {
            n_maior = n;
            posicao_maior = posicao;
        }
    }
    printf("%d\n%d\n", n_maior, posicao_maior);
    return 0;
}