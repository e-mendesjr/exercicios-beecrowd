#include <stdio.h>
 
int main() {
 
    // i soma 3 em 3
    // j subtrai 5 em 5
    
    int i, j = 60;
    for(i = 1; j >= 0; i = i + 3)
    {
        printf("I=%d J=%d\n", i, j);
        j = j - 5;
    }
 
    return 0;
}