#include <stdio.h>
 
int main() {
    // leia um valor inteiro n entre 2 e 1000
    // mostre a tabuada de n, ou seja 1xN, 2xN, ..., 10xN

    int n, i, total;
    scanf("%d", &n);
    for(i = 1; i <= 10; i = i + 1)
    {
        total = i * n;
        printf("%d x %d = %d\n", i, n, total);
    }
    
    return 0;
}