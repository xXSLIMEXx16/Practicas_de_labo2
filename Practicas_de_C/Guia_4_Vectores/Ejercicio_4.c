/*Escribe un programa en C que busque un elemento especıfico en un array de
enteros y muestre su posici´on en el array*/

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

    int posicion=-1, maximo=50;

    int buscar = 26;

    for (int i = 0; i < maximo ; i++)
    {
        if (numeros[i] == buscar)
        {
            posicion = i;
        }
        
    }
    
    if (posicion == -1)
    {
        printf("El elemento % d no se encuentra en el array",buscar);
    }else
    {
        printf("El elemento %d se encuentra en la posicion %d del array", buscar, posicion);
    }
    
    
    return 0;
}
