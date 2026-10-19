#include <stdio.h>
#include <string.h>
 
int main() {

    /* utilizo if-else por serem mutualmente exclusivas e o exercício pressupõe que o usuário sabe quais as palavras que ele pode usar
    então, se ele não digitar carnívoro, logicamente seria onívoro, não havendo a necessidade de um novo if para confirmar que a palavra digitada
    tenha sido onívoro*/
    
    char palavra_um[50], palavra_dois[50], palavra_tres[50];
    scanf("%49s%49s%49s", palavra_um, palavra_dois, palavra_tres);
    if(strcmp(palavra_um, "vertebrado") == 0)
    {
        if(strcmp(palavra_dois, "ave") == 0)
        {
            if(strcmp(palavra_tres, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if(strcmp(palavra_tres, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if(strcmp(palavra_dois, "inseto") == 0)
        {
            if(strcmp(palavra_tres, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if(strcmp(palavra_tres, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}