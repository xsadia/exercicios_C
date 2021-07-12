#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);

    if (num1 == 0)
    {
        printf("Impossivel dividir por 0");
        return 1;
    }

    printf("Insira o segundo numero: ");
    scanf("%f", &num2);

    if (num2 == 0)
    {
        printf("Impossivel dividir por 0");
        return 1;
    }

    printf("Divisao de %.2f por %.2f = %.2f", num1, num2, num1 / num2);
    return 0;
}