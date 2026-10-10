#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, D, H, H1, M;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    // A e C representam as horas, B e D representam os minutos
    // calcular a quantidade de horas e a quantidade de minutos que o jogo durou
    if(A < C)
    {// o jogo começou e terminou no mesmo dia
        H = C - A;

        if(B > D)
        {
          H1 = H * 60; // h foi convertido de horas para minutos
          M = B - D; // é dada a quantidade de minutos
          M = abs(M - H1);
          H = H1 - M - H;
          
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
        }
        else
        {
            if(B < D)
            {
                
                M = D - B;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
                
            }
        }
    }
    else
    {// o jogo começou em 1 dia, mas terminou em outro. Ou o jogo durou 24h
        if(A == C && B == D)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
    }
    return 0;
}



/* int main(){
    // leia a hora inicial, minuto inicial, a hora final e minuto final de um jogo
    // calcule a duração do jogo
    // o jogo tem duração mínima de 1 minuto e duração máxima de 24 horas

    int A, B, C, D, H, M, Hconvertido;
    // A e C são as horas
    // B e D são os minutos

    scanf("%d%d%d%d", &A, &B, &C, &D);
    if(A < C)
    {// o jogo iniciou e acabou no mesmo dia
        H = C - A;
        if(B > D)
        {
            M = B - D;
        }
        else
        {// então b é menor que D
            M = D - B;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
    }
    else
    {// a não é menor que c, logo a >= c
        if(A == B && B == C && A == D)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
        else
        {// então A é maior que C, o jogo iniciou em 1 dia e finalizou em outro
            if(B > D)
            {// precisarei converter para minutos e subtrair da hora, depois converter pra horas se necessário
                H = A - C;
                Hconvertido = H * 60;
                M = B - D;
                H = Hconvertido - M;
                printf("%d\n%d\n", H, Hconvertido);
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
                
            }
            else
            {// então B é menor que D
                H = A - C;
                M = D - B;

                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n");
            }
        }
    }
    
    
    
    return 0;
}

*/