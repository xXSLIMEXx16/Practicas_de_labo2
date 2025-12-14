/*Escribe un programa en C que cuente y muestre la cantidad de elementos pares
en un array de enteros.
*/

#include <stdio.h>

int main()
{
    int numeros[50] = {
    12, 45, 7, 89, 23, 56, 34, 78, 90, 11,
    67, 28, 49, 3, 81, 16, 94, 38, 52, 60,
    5, 72, 41, 26, 88, 14, 97, 31, 69, 20,
    84, 9, 63, 47, 55, 36, 2, 75, 99, 18,
    40, 66, 24, 86, 1, 58, 73, 29, 92, 15
    };
    int numeros_pares[50];

    int maximo = 50;
    int cantidad = 0;


    for (int i = 0; i < 50; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            numeros_pares[cantidad] = numeros[i];
            cantidad++;

        }
        
    }
    
    printf("La cantidad de elementos pares que habias es de: %d y son los siguientes: ", cantidad);

    for (int i = 0; i < cantidad; i++)
    {
        printf(", %d",numeros_pares[i]);
    }
    

    
    
    return 0;
}
