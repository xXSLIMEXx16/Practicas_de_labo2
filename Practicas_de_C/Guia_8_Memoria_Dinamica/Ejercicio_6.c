/*Escribe un programa que cree un vector din´amico con un tama˜no inicial. Luego,
solicita al usuario un nuevo tama˜no para el vector y utiliza realloc() para
redimensionar el vector. Si es necesario, mueve los elementos antiguos al nuevo
vector. Finalmente, imprime el vector redimensionado y libera la memoria del
vector original.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *vector = NULL;
    char *aux = NULL;
    int n = 10;
    int c;

    vector = malloc(n * sizeof(char));
    if (vector == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    printf("Ingrese algo en el vector: ");
    fgets(vector, n, stdin);
    vector[strcspn(vector, "\n")] = '\0';

    printf("Contenido: %s\n", vector);

    while ((c = getchar()) != '\n' && c != EOF);

    printf("Ingrese el nuevo tamaño del vector: ");
    scanf("%d", &n);
    

    aux = realloc(vector, n * sizeof(char));
    if (aux == NULL) {
        printf("Error al redimensionar memoria\n");
        free(vector);
        return 1;
    }

    vector = aux;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Ingrese algo en el vector: ");
    fgets(vector, n, stdin);
    vector[strcspn(vector, "\n")] = '\0';

    printf("Contenido final: %s\n", vector);

    free(vector);
    return 0;
}
