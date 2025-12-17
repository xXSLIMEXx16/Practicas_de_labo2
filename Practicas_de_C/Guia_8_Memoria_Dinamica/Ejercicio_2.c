/*Escribe un programa que solicite al usuario ingresar el tama˜no de un vector.
Luego, utiliza malloc() para asignar memoria din´amica para el vector y permite
al usuario ingresar los elementos del vector. Despu´es, imprime los elementos del
vector y libera la memoria asignada.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int *vector = NULL;
    int n;

    
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    vector = (int*)malloc(n * sizeof(int));
    
    if (vector == NULL)
    {
        printf("Error en la asignacion de espacio...");
        return 0;
    }

        printf("Ingrese los elementos para el vector: \n");
    for (int i = 0; i < n; i++)
    {
         printf("vector[%d]: ", i);
        scanf("%d", &vector[i]);
    }
    
    printf("Los elementos del vector son:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",vector[i]);
    }
    
    printf("\nLiberando memoria...");
    free(vector);
    
    return 0;
}
