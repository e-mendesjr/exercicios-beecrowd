#include <stdio.h>
 
int main() {
 
    int a, m, d, R, N;
    
    scanf("%d", &N);
    a = N / 365;
    R = N % 365;
    m = R / 30;
    R = R % 30;
    d = R;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
 
    return 0;
}