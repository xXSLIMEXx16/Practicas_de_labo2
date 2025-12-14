/*Desarrolla una funci´on en C que encuentre el elemento m´aximo en un vector
dado y devuelva su posici´on.
*/

#include <stdio.h>
int maximo(int numeros[], int *tamano);


int main()
{
    int numeros[] = {
    3, 7, 12, 18, 25, 31, 4, 9, 15, 22,
    28, 34, 6, 11, 17, 21, 27, 33, 38, 2,
    8, 14, 19, 24, 29, 35, 40, 5, 10, 16
};  
    int tamano; 
    tamano = sizeof(numeros) / sizeof(numeros[0]);
    int max;
    max = maximo(numeros, &tamano);

    printf("El lemento maximo es: %d y su posicion es: %d", max, tamano);

    return 0;
}

int maximo(int numeros[], int *tamano){

    int max = numeros[0], posicion = 0;
    for (int i = 0; i < *tamano; i++)
    {
        if (max < numeros[i])
        {
            max = numeros[i];
            posicion = i;
        }
        
    }
    *tamano = posicion;
    return max;
}