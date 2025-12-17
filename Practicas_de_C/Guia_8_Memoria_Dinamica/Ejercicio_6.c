/*Escribe un programa que cree un vector din´amico con un tama˜no inicial. Luego,
solicita al usuario un nuevo tama˜no para el vector y utiliza realloc() para
redimensionar el vector. Si es necesario, mueve los elementos antiguos al nuevo
vector. Finalmente, imprime el vector redimensionado y libera la memoria del
vector original.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vector = NULL;
    int *aux = NULL;
    int n;

    vector = (int*)malloc(1 * sizeof(int));
    vector[0] = 1;
    vector[1] = 1;
    vector[2] = 1;

    printf("Ingrese el taamaño del vector: ");
    scanf("%d",&n);

    aux = (int*)realloc(vector , n * sizeof(int));

    if (aux == NULL) {
        printf("Error al asignar memoria\n");
        return 0;
    }

    vector = aux;



    return 0;
}
