#include <stdio.h>
 
int main() {
 
    // leia o salário do funcionário
    // calcule e mostre: novo salário, valor de reajuste ganho e percentual de reajuste ganho
    
    float s, ns, reajuste;
    scanf("%f", &s);
    if(s >= 0 && s <= 400.00)
    {// 15% de aumento
        ns = s * 1.15;
        reajuste = ns - s;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n", ns, reajuste);
    }
    else
    {
        if(s <= 800.00)
        {// 12% de aumento
            ns = s * 1.12;
            reajuste = ns - s;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n", ns, reajuste);
        }
        else
        {
            if(s <= 1200.00)
            {// 10% de aumento
                ns = s * 1.10;
                reajuste = ns - s;
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n", ns, reajuste);
            }
            else
            {
                if(s <= 2000.00)
                {// 7% de aumento
                    ns = s * 1.07;
                    reajuste = ns - s;
                    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n", ns, reajuste);
                }
                else
                {// 4% de aumento, salário maior que 2000.00
                    ns = s * 1.04;
                    reajuste = ns - s;
                    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n", ns, reajuste);
                }
            }
        }
    }
 
    return 0;
}