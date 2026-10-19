#include <stdio.h>
 
int main() {
 
    // leia um valor inteiro n, representa a quantidade de valores x que serão lidos em seguida
    // mostre quantos destes valores x estão dentro do intervalo [10,20] e quantos estão fora

    int n, x, i, out = 0, in = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i = i + 1)
    {
        scanf("%d", &x);

        if(x >= 10 && x <= 20)
        {
            in = in + 1;
        }
        else
        {
            out = out + 1;
        }
    }
    printf("%d in\n%d out\n", in, out);
 
    return 0;
}