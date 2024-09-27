#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Valor de a: ");
    scanf("%d", &a);

    printf("Valor de b: ");
    scanf("%d", &b);

    printf("Valor de c: ");
    scanf("%d", &c);

    int soma = a + b + c;
    int media = soma / 3;
    printf("a media entre as variaveis sao: %d ",media);

}