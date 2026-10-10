#include <stdio.h>

int main(){
    // leia 2 valores com uma casa decimal
    // os 2 valores representam x e y, coordenadas de um ponto em um plano
    // determinar a qual quadrante pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem
    // se estiver na origem: imprima Origem
    // se estiver sobre um dois eixos: imprima Eixo X ou Eixo Y - conforme a situação

    float X, Y;

    scanf("%f%f", &X, &Y);
    if(X > 0 && Y > 0)
    {
        printf("Q1\n");
    }
    if(X < 0 && Y >0)
    {
        printf("Q2\n");
    }
    if(X < 0 && Y < 0)
    {
        printf("Q3\n");
    }
    if(X > 0 && Y < 0)
    {
        printf("Q4\n");
    }
    if(Y == 0 && X == 0 )
    {
        printf("Origem\n");
    }
    if(Y == 0 && X != 0)
    {
        printf("Eixo X\n");
    }
    if(X == 0 && Y != 0)
    {
        printf("Eixo Y\n");
    }

    return 0;
}