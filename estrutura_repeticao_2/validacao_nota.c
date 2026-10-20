#include <stdio.h>
 
int main() {
 
    // leia as notas duas notas de um aluno
    // calcule e imprima a média semestral
    // o algoritmo só deve aceitar notas válidas
    
    float nota_um, nota_dois, media;
    int i = 0;
    
    while(i < 1){
        scanf("%f", &nota_um);
        while(nota_um < 0 || nota_um > 10){
            printf("nota invalida\n");
            scanf("%f", &nota_um);
        }
        scanf("%f", &nota_dois);
        while(nota_dois < 0 || nota_dois > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &nota_dois);
        }

        i = i + 1;
        media = (nota_um + nota_dois) / 2;
        printf("media = %.2f\n", media);
    }
    
    return 0;
}