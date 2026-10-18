#include <stdio.h>
#include <locale.h>
 
int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[10];
    double sf, vendas, total;

    scanf("%s", nome);
    scanf("%lf%lf", &sf, &vendas);
    total = sf + (vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
