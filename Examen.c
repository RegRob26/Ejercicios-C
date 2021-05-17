#include <stdio.h>

int fibonacci(int);

int main()
{
    int n;
    printf("Ingrese el número a mostrar su serie fibonacci: ");
    scanf("%d", &n);

    printf("El valor fibonnacci de %d es %d ", n, fibonacci(n));
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
        if (n == 1)
        {
            return 1;
        }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}