#include <stdio.h>

int main(){
    // leia hora inicial e hora final
    // calcule a duração do jogo
    // o jogo pode começar num dia e terminar no outro
    // a duração mínima é de 1h e a duração máxima é de 24h

    int HInicial, HFinal, H;

    scanf("%d%d", &HInicial, &HFinal);
    if(HInicial > HFinal)
    {// o jogo começou em um dia, mas terminou em outro
        H = HFinal + (24 - HInicial);
        printf("O JOGO DUROU %d HORA(S)\n", H);
    }
    if(HInicial == HFinal)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if(HInicial < HFinal)
    {// o jogo começou e terminou no mesmo dia
        H = HFinal - HInicial;
        printf("O JOGO DUROU %d HORA(S)\n", H);
    }

    return 0;
}