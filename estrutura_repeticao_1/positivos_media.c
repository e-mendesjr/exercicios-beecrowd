#include <stdio.h>
 
int main() {
 
    // leia 6 valores
    // mostre quando destes valores são positivos
    // determine e imprima a média de todos os valores positivos digitados com 1 casa decimal

    int i, quantidade_positivos = 0;
    float n, soma_positivos, media;
    for(i = 0; i < 6; i = i + 1)
    {
        scanf("%f", &n);
        if(n > 0)
        {
            quantidade_positivos = quantidade_positivos + 1;
            soma_positivos= soma_positivos + n;
        }
    }
    media = soma_positivos / quantidade_positivos;
    printf("%d valores positivos\n%.1f\n", quantidade_positivos, media);

 
    return 0;
}