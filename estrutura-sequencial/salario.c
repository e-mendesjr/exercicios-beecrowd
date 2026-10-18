#include <stdio.h>
 
int main() {
    
    int n, h;
    float v, s;
    scanf("%d%d%f", &n, &h, &v);
    s = v * h;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, s);
 
    return 0;
}