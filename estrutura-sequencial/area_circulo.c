#include <stdio.h>
#include <math.h>

int main() {

    double pi = 3.14159, area, raio;

    scanf("%lf", &raio);
    area = pow(raio, 2) * pi;
    printf("A=%.4f\n", area); 

    return 0;
}