#include <stdio.h>

int main()
{
    float nota;

    printf("Defina a nota: ");
    scanf("%f", &nota);

    if (nota >= 60)
    {
        printf("Aprovado com a nota %.1f", nota);
        return 0;
    }

    printf("Reprovado com a nota %.1f", nota);

    return 0;
}