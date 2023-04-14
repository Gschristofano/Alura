#include <stdio.h>
#include <string.h>

int main(){
    // Imprime cabeçalho do nosso jogo
    printf("****************************************\n");
    printf("Bem vindo ao nosso jogo de adivinnhação\n");
    printf("****************************************\n");

    int numsecret = 42;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d", chute);

    if (chute == numsecret)
    {
        printf("Parabens, VC ACERTOU!");
    }
    else
    {
        printf("Você Errou\n");
        printf("Tente novamente\n");
    }
    
    
    return 0;
}