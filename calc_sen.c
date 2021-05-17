#include <stdio.h>

int main()
{
   double suma = 0, potencia, factorial = 1;
    float x;
    printf("Ingrese el número x a calcular su sen: ");
    scanf("%f", &x);

    int cont = 1;
    for (int i = 1; i <= 3; i++)
    {

        if (i == 1)
        {
            suma += x / factorial;
            cont++;
        }
        else
        {
            if (i % 2 != 0)
            {
                // calculo potenci
                potencia = 1;

                for (int o = 1; o <= i; ++o)
                {
                    potencia = potencia * x;
                }
                // calculo factorial
                factorial = 1;
                for (int k = 1; k <= i; ++k)
                {
                    factorial = factorial * k;
                }
                if (cont % 2 == 0)
                {
                    suma += -(potencia / factorial);
                    cont++;
                    printf("suma: %f", suma);
                }
                else
                {
                    suma += potencia / factorial;
                    cont++;
                    printf("suma: %f", suma);
                }
            }
        }
    }
    printf("Resultado %9f", suma);
}