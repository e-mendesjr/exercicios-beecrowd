#include <stdio.h>

int main(){
    int hora_inicial, minuto_inicial, hora_final, minuto_final, duracao, duracao_horas, duracao_minutos, inicio, fim;

    scanf("%d%d%d%d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
    inicio = hora_inicial * 60 + minuto_inicial; // HH:MM inciais, convertidos para o total em minutos
    fim = hora_final * 60 + minuto_final; // HH:MM finais, convertidos para o total em minutos

    if(inicio < fim){
        // o jogo iniciou e terminou no mesmo dia
        duracao = fim - inicio;
        duracao_horas = duracao / 60; // a divisão inteira me entregará o quociente, que são as horas
        duracao_minutos = duracao % 60; // o que restou da divisão inteira por 60, são os minutos
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
    }
    else{
        // então o jogo atravessou de um dia para o outro, durando até 24h
        if(inicio == fim)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
        else{
            // então o jogo durou menos de 24h e começou em um dia, mas terminou em outro. Sabemos que nesse caso, inicio > fim
            /* preciso somar o final com 24h, ou seja, 1440 minutos, para obter o valor real de horas e minutos, caso contrário o programa
            iria considerar que o jogo durou menos do que realmente durou, uma vez que o formato lido não é em 24h*/
            duracao_horas = (fim + 1440 - inicio) / 60;
            duracao_minutos = (fim + 1440 - inicio) % 60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
        }
    }
}