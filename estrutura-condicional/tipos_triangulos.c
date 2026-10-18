#include <stdio.h>
#include <math.h>

int main(){
    // leia 3 valores de ponto flutuante A, B e C
    // ordene-os em ordem decrescente
    // de modo que o lado A representa o maior dos 3 lados
    // determine o tipo de triangulo que estes 3 lados formam, com base nos seguintes casos:
    // se A >= B + C - NAO FORMA TRIANGULO
    // se A² = B² + C² - TRIANGULO RETANGULO
    // se A² > B² + C² - TRIANGULO OBSUTANGULO
    // se A² < B² + C² - TRIANGULO ACUTANGULO
    // se os 3 lados forem iguais - TRIANGULO EQUILATERO
    // se apenas dois lados forem iguais - TRIANGULO ISOSCELES

    double A, B, C, temp;

    scanf("%lf%lf%lf", &A, &B, &C);

    if(C > A || C > B)
    {// C não é o menor
        if(A > B)
        {// B guarda o menor
            temp = C;
            C = B;
            B = temp;
        }
        else
        {// A guarda o menor
            temp = C;
            C = A;
            A = temp;
        }
    }
    if(B > A)
    {// B é maior que A
        temp = A;
        A = B;
        B = temp;
    }

    
    if(A >= (B + C))
    //(A + B > C && B + C > A && A + C > B)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {// forma triangulo
        if(pow(A, 2) == (pow(B, 2) + pow(C, 2)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else
        {
            if(pow(A, 2) > (pow(B, 2) + pow(C, 2)))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else
            {
                if(pow(A, 2) < (pow(B, 2) + pow(C, 2)))
                {
                    printf("TRIANGULO ACUTANGULO\n");
                }
            }
        }
        
        if(A == B && B == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else
        {
            if(A == B || A == C || B == C)
            {
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }

    return 0;
}