#include <stdio.h>

int main(){
    // leia 4 números n1, n2, n3 e n4
    // correspondem a 4 notas de um aluno
    // calcular média ponderada
    // pesos:  2, 3, 4 e 1 - respectivamente
    // mostre a média acompanhada pela mensagem Média
    // média >= 7.0 imprima Aluno aprovado
    // média < 5.0 imprima Aluno reprovado
    // média entre 5.0 e 6.9 imprima Aluno em exame
        // se o aluno estiver em exame:
            // leia - nota obtida no exame
            // imprima - Nota do exame: nota digitada
            // recalcule a média - somar a nota obtida no exame
            // com a média anteriormente calculada e divida por 2
            // imprima Aluno aprovado SE Média >= 5.0
            // imprima Aluno reprovado SE Média < 4.9
            // apresente a média final em ambos os casos com Média final: média


    float N1, N2, N3, N4, Media, NExame, MediaExame;

    scanf("%f%f%f%f", &N1, &N2, &N3, &N4);
    Media = ((N1*2) + (N2*3) + (N3*4) + (N4*1)) / 10;
    
    if(Media >= 7.0)
    {
        printf("Media: %.1f\n", Media);
        printf("Aluno aprovado.\n");
    }
    else
    {
        if(Media < 5.0)
        {
            printf("Media: %.1f\n", Media);
            printf("Aluno reprovado.\n");
        }
        else{
            if (Media >= 5.0 && Media <= 6.9)
            {
                printf("Media: %.1f\n", Media);
                printf("Aluno em exame.\n");
                scanf("%f", &NExame);
                MediaExame = (Media + NExame) / 2;
                printf("Nota do exame: %.1f\n", NExame);
                if (MediaExame >= 5.0)
                {
                    printf("Aluno aprovado.\n");
                    printf("Media final: %.1f\n", MediaExame);
                }
                else{
                    printf("Aluno reprovado.\n");
                    printf("Media final: %.1f\n", MediaExame);
                }
            }
            
        }
    }
}