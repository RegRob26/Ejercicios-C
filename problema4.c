#include <stdio.h>

int read_string(char cadena[]);
int change_string(char cadena[], int tamanio, char n1, char n2);
int print_cadena(char cadena[]);

int main()
{
    int tamanio;
    char a, b;
    char cadena[45];

    tamanio = read_string(cadena);

    printf("Ingrese el caracter a sustituir: ");
    scanf("%c", &a);

    printf("Ingrese el caracter por el que será sustituido: ");
    getchar(); //Porque el buffer del programa contendrà lo antes leìdo
    scanf("%c", &b);

    change_string(cadena, tamanio, a, b);
    print_cadena(cadena);
}

int read_string(char cadena[45])
{
    int contador = 0;
    printf("Ingrese una cadena de máximo 45 caracteres: ");
    fgets(cadena, 45, stdin);

    while (cadena[contador] != 0)
        contador++;
    return contador;
}

int change_string(char cadena[45], int tamanio, char n1, char n2)
{
    for (int i = 0; i < tamanio; i++)
    {

        if (cadena[i] == n1)
        {
            cadena[i] = n2;
        }
    }
    return 0;
}

int print_cadena(char cadena[45])
{
    printf("La nueva cadena es: %s", cadena);
    return 0;
}