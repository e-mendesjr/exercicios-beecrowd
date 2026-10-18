#include <stdio.h>

int main() {
    int n100, n50, n20, n10, n5, n2, n1, R, Q, V;

    scanf("%d", &V);

    n100 = V / 100;
    R = V % 100;
    n50 = R / 50;
    R = R % 50;
    n20 = R / 20;
    R = R % 20;
    n10 = R / 10;
    R = R % 10;
    n5 = R / 5;
    R = R % 5;
    n2 = R / 2;
    R = R % 2;
    n1 = R / 1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", V, n100, n50, n20, n10, n5, n2, n1);
}