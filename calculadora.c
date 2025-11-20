#include <stdio.h>

// Funcions per a cada operació
int sumar(int a, int b)
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

float dividir(int a, int b)
{
    if (b == 0)
    {
        printf("Error: no es pot dividir entre zero.\n");
        return 0;
    }
    return (float)a / b;
}

int main(void)
{
    int m, n, opcio;

    printf("Introdueix el primer número: ");
    scanf("%d", &m);
    printf("Introdueix el segon número: ");
    scanf("%d", &n);

    do {
        printf("\nQuina operació vols fer --> 1 (suma), 2 (resta), 3 (multiplicació), 4 (divisió): ");
        scanf("%d", &opcio);
    } while ((opcio < 1) || (opcio > 4));

    // Implementació del menú amb ifs
    if (opcio == 1)
        printf("La suma és: %d\n", sumar(m, n));
    if (opcio == 2)
        printf("La resta és: %d\n", restar(m, n));
    if (opcio == 3)
        printf("La multiplicació és: %d\n", multiplicar(m, n));
    if (opcio == 4)
        printf("La divisió és: %.2f\n", dividir(m, n));

    return 0;
}
