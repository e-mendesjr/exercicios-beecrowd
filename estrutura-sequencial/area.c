#include <stdio.h>
#include <math.h> 
int main() {
 
    double pi = 3.14159, A, B, C, AT, AC, Atrap, AQ, AR;
    
    scanf("%lf%lf%lf", &A, &B, &C);
    AT = (A * C) / 2;
    AC = pi * pow(C, 2);
    Atrap = ((A + B) * C) / 2;
    AQ = B * B;
    AR = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", AT, AC, Atrap, AQ, AR);
 
    return 0;
}