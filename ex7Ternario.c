#include <stdio.h>

int main()
{
    int num;

    printf("Escolha um numero positivo ou negativo: ");
    scanf("%d", &num);

    num > 0 ? printf("%d: positivo", num) : printf("%d: negativo", num);

    return 0;
}