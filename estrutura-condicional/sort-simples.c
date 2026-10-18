#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // leia 3 valores inteiros
    // ordene-os em ordem crescente
    // mostre os valores em ordem crescente
    // mostre uma linha em branco
    // mostre os valores na sequência em que foram lidos

    int A, B, C, MaiorAB, Meio, MaiorABC, MenorAB, MenorABC;

    scanf("%d%d%d", &A, &B, &C);

    MaiorAB = (A + B + abs(A - B)) / 2; //estava tentando colocar este valor como se ele fosse o do meio,
                                        // mas, ele é o maior valor que está entre A e B, não significa que ele seja o valor do meio.

    MaiorABC = (MaiorAB + C + abs(MaiorAB - C)) / 2;
    MenorAB = (A + B - abs(A - B)) / 2;    
    MenorABC = (MenorAB + C - abs(MenorAB - C)) / 2;
    Meio = (A + B + C - MenorABC - MaiorABC); // fórmula dada por IA

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", MenorABC, Meio, MaiorABC, A, B, C);
    
    return 0;
}