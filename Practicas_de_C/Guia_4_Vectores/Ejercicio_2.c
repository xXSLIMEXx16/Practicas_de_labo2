/*Escribe un programa en C que encuentre y muestre el m´aximo elemento en un
array de enteros.
*/

#include <stdio.h>

int main()
{
    int numeros[] = {25, 30, 19, 42, 35};
    int maximo = numeros[0];
    int tamaño = 5;

    for (int i = 1; i < tamaño; i++)
    {
        if (numeros[i] > maximo)
        {
            maximo = numeros[i];
        }
    }

    printf("El número máximo del array es: %d\n", maximo);
    return 0;
}
