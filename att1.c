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

    printf("Soma entre a + b + c: %d\n", soma);

    return 0;
}