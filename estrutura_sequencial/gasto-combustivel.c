#include <stdio.h>
 
int main() {
 
    int t, vm, d;
    float l;
    
    scanf("%d%d", &t, &vm);
    d = vm * t;
    l = d / 12.0;
    printf("%.3f\n", l);
 
    return 0;
}