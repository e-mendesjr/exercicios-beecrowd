#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = (b *b) - (4 * a * c);

    
    if (delta > 0 && a != 0) 
    {
        // neste caso haverá duas raízes reais
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2); 
    } 
    else 
    {
        // delta menor ou igual a zero
        if(delta == 0 && a != 0) 
        {
            // nesse caso haverá somente uma raíz real
            x1 = (-b) / (2 * a);
            printf("R1 = %.5lf\n", x1);
            
            
        }
        else 
        {
            // nesse caso não é possível encontrar raízes reais
            printf("Impossivel calcular\n");
        }
        
    }
    

}