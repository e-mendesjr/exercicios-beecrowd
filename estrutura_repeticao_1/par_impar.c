#include <stdio.h>
 
int main() {
 
    // leia um valor inteiro n - quantidade de valores que serão lidos
    // para cada valor lido, mostre, em inglês, se ele é par(EVEN), ímpar(ODD), positivo(POSITIVE) ou negativo(NEGATIVE)
    // n = 0, descreva como NULL, embora não seja a descrição correta

    int n, i, x;
    scanf("%d", &n);
    for(i = 0; i < n; i = i + 1)
    {
        scanf("%d", &x);
        if(x == 0)
        {
            printf("NULL\n");
        }
        else
        {// x é diferente de zero
            if(x % 2 == 0 && x > 0)
            {// x é par e também é positivo
                printf("EVEN POSITIVE\n");
            }
            else
            {// x é par e x é negativo ou e x é ímpar e x é negativo ou x é ímpar e x é positivo
                if(x % 2 == 0 && x < 0)
                {// x é par e x é negativo
                    printf("EVEN NEGATIVE\n");
                }
                else
                {// x é ímpar e positivo ou x é impar e negativo
                    if(x > 0)
                    {// x é ímpar e positivo
                        printf("ODD POSITIVE\n");
                    }
                    else
                    {// x é ímpar e negativo
                        printf("ODD NEGATIVE\n");
                    }
                }
            }
        }
    }
 
    return 0;
}