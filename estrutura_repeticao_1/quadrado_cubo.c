#include <stdio.h>
#include <math.h>
 
int main() {
    // leia um inteiro n, é a quantidade de linhas de saída que serão apresentadas
    // se n = 5, deverá ser calculado de 1³ até 5³, passando por 2³, 3³ e 4³ e assim por diante
    // deve ser exibido: 2 4 8 e 5 25 125, como um passo a passo, 5 * 5 = 25 * 5 = 125

    int n, i, base, quadrado, cubo;
    scanf("%d", &n);
    for(i = 0; i < n; i = i + 1)
    {
        base = i + 1;
        quadrado = pow(base, 2);
        cubo = pow(base, 3);
        printf("%d %d %d\n", base, quadrado, cubo);
    }
 
    return 0;
}