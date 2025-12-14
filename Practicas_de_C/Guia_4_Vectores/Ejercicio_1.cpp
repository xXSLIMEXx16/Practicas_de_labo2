/*Escribe un programa en C que calcule la suma de todos los elementos en un
array de enteros.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numeros[] = {1,50,36,47,854,125,6312}; 
    int suma = 0;

    for (int i = 0; numeros[i] != '\0' ; i++)
    {
        suma += numeros[i];
    }
    
    printf("La suma de todos los elementos del vector es de: %d", suma);
    return 0;
}
