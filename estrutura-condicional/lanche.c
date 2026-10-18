#include <stdio.h>

int main(){

    int Cod, Q;
    float Total;

    scanf("%d%d", &Cod, &Q);
    if(Cod == 1)
    {
        Total = Q * 4.0;
        printf("Total: R$ %.2f\n", Total);
    }
    else
    {
        if(Cod == 2)
        {
            Total = Q * 4.5;
            printf("Total: R$ %.2f\n", Total);
        }
        else
        {
            if(Cod == 3)
            {
                Total = Q * 5.0;
                printf("Total: R$ %.2f\n", Total);
            }
            else
            {
                if(Cod == 4)
                {
                    Total = Q * 2.0;
                    printf("Total: R$ %.2f\n", Total);
                }
                else
                {
                    if(Cod == 5)
                    {
                        Total = Q * 1.5;
                        printf("Total: R$ %.2f\n", Total);
                    }
                }
            }
        }
    }

}