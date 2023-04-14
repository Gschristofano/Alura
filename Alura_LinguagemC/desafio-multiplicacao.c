#include <stdio.h>

int main(){
    int x, y, total;

    printf("Digite o valor do primeiro número inteiro para multiplicação: ");
    scanf("%d", &x);

    printf("Digite o valor do segundo número inteiro para multiplicação: ");
    scanf("%d", &y);

    total = x * y;
    
    printf("%d X %d = %d", x, y, total);

    return 0;
}