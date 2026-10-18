#include <stdio.h>

int main(){
    // leia 3 valores reais
    // determinar se formam triangulo
    // se formar triangulo, calcular e imprimir o perimetro
    // se não formar triangulo, calcular a área do trapézio, utilizando A e B como bases e C como altura

    float A, B, C, PTriangulo, ATrapezio;

    scanf("%f%f%f", &A, &B, &C);
    if(A + B > C && B + C > A && A + C > B)
    {
        PTriangulo = A + B + C;
        printf("Perimetro = %.1f\n", PTriangulo);
    }
    else
    {
        ATrapezio = ((A + B) * C) / 2;
        printf("Area = %.1f\n", ATrapezio);
    }
    
    return 0;
}