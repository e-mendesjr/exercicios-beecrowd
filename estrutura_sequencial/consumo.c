#include <stdio.h>
 
int main() {
 
    int X;
    float Y, Cm;
    
    scanf("%d%f", &X, &Y);
    Cm = X / Y;
    printf("%.3f km/l\n", Cm);
    
    return 0;
}