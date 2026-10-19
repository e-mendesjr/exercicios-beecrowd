#include <stdio.h>
 
int main(){
    // leia um valor inteiro n
    // apresente todos os números entre 1 e 10.000 que divididos por n dão resto = 2

    int n, i, resto;
    scanf("%d", &n);
    for(i = 1; i <= 10000; i = i + 1)
    {
        if(i % n == 2)
        {
            resto = i;
            printf("%d\n", resto);
        }
    }
    
 
    return 0;
}