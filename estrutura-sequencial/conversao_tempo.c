#include <stdio.h>
 
int main() {
 
    int h, m, s, R, N;
    
    scanf("%d", &N);
    h = N / 3600;
    R = N % 3600;
    m = R / 60;
    R = R % 60;
    s = R;
    
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}