#include <stdio.h>
#include <math.h>

int main() {
    int n100, n50, n20, n10, n5, n2, m1r, m50, m25, m10, m5, m1, R;
    float V;

    scanf("%f", &V);
    int N = (int)round(V * 100);
    n100 = N / 10000;
    R = N % 10000;
    n50 = R / 5000;
    R = R % 5000;
    n20 = R / 2000;
    R = R % 2000;
    n10 = R / 1000;
    R = R % 1000;
    n5 = R / 500;
    R = R % 500;
    n2 = R / 200;
    R = R % 200;
    m1r = R / 100;
    R = R % 100;
    m50 = R / 50;
    R = R % 50;
    m25 = R / 25;
    R = R % 25;
    m10 = R / 10;
    R = R % 10; 
    m5 = R / 5;
    R = R % 5;
    m1 = R;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, m1r, m50, m25, m10, m5, m1);
}