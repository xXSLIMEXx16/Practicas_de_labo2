/*Escribe un programa que solicite al usuario ingresar el n´umero de filas y columnas de una matriz.
 Luego, utiliza malloc() para asignar memoria din´amica para
la matriz y permite al usuario ingresar los elementos de la misma. Finalmente,
imprime la matriz y libera la memoria asignada.
*/

#include <stdio.h>
#include <stdlib.h>

void ingresar_datos(int f, int c, int **matriz);
void imprimir_matriz(int f, int c, int **matriz);

int main()
{
    int **matriz = NULL;
    int f, c;
    printf("Ingrese el número de filas y columnas de la matriz: ");
    scanf("%d",&f);
    scanf("%d",&c);
    
    matriz = (int**)malloc(f * sizeof(int*));
    if (matriz == NULL)
    {
        printf("Error en la asignacion de espacio...");
        return 0;
    }
    
    for (int i = 0; i < f; i++)
    {
        matriz[i] = (int*)malloc(c * sizeof(int));

        if (matriz[i] == NULL)
        {
            printf("Error en la asignacion de espacio...");
            return 0;
        }
    }


    ingresar_datos(f, c, matriz);

    printf("La matriz es: \n");

    imprimir_matriz(f, c, matriz);

    printf("\nLiberando memoria...");
    free(matriz);

    return 0;
}

void ingresar_datos(int f, int c, int **matriz){

        printf("=====INGRESE LOS VALORES PARA LA MATRIZ=====\n");
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Ingrese un valor para la fila %d columna %d: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matriz(int f, int c, int **matriz){

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
}