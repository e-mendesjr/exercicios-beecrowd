#include <stdio.h>
 
int main() {
 
    // repita a leitura de uma senha até que ela seja válida
    // enquanto a senha for incorreta imprima: "Senha Invalida"
    // quando a senha for informada corretamente imprima "Acesso Permitido"
    
    int senha;
    scanf("%d", &senha);
    while(senha != 2002)
    {
        printf("Senha Invalida\n");
        scanf("%d", &senha);
    }
    if(senha == 2002)
    {
        printf("Acesso Permitido\n");
    }
    return 0;
}