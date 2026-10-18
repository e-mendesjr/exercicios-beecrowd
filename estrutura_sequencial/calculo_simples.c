#include <stdio.h>
 
int main() {
 
    int cod1, n1, cod2, n2;
    float v1, v2, t, t1, t2;
    
    scanf("%d%d%f%d%d%f", &cod1, &n1, &v1, &cod2, &n2, &v2);
    t1 = n1 * v1;
    t2 = n2 * v2;
    t = t1 + t2;
    printf("VALOR A PAGAR: R$ %.2f\n", t);
 
    return 0;
}