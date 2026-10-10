#include <stdio.h>
#include <math.h>

int main(){
    // leia 2 valores inteiros - A e B
    // mostrar se são múltiplos ou se não são múltiplos

    int A, B, MaiorAB, MenorAB;

    scanf("%d%d", &A, &B);

    MaiorAB = (A + B + abs(A - B)) / 2;
    MenorAB = (A + B - abs(A - B)) / 2;

    if(MaiorAB % MenorAB == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}