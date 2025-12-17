/*Escribe un programa que solicite al usuario ingresar el n´umero de filas y columnas de una matriz.
 Luego, utiliza malloc() para asignar memoria din´amica para
la matriz y permite al usuario ingresar los elementos de la misma.
 Despu´es, calcula la matriz transpuesta y almacena el resultado en otra matriz din´amica.
Finalmente, imprime la matriz transpuesta y libera la memoria asignada.
*/

#include <stdio.h>
#include <stdlib.h>

void ingresar_datos(int f, int c, int **matriz);
void imprimir_matriz(int f, int c, int **matriz);
void matriz_trranspuesta(int f, int c, int **matriz, int **matriz_trans );

int main()
{
    int **matriz = NULL;
    int **matriz_trans = NULL;
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

     matriz_trans = (int**)malloc(c * sizeof(int*));
    if (matriz_trans == NULL)
    {
        printf("Error en la asignacion de espacio...");
        return 0;
    }
    
    for (int i = 0; i < f; i++)
    {
        matriz_trans[i] = (int*)malloc(f * sizeof(int));

        if (matriz_trans[i] == NULL)
        {
            printf("Error en la asignacion de espacio...");
            return 0;
        }
    }


    ingresar_datos(f, c, matriz);
    matriz_trranspuesta(f, c, matriz, matriz_trans);
    printf("La matriz es: \n");
    imprimir_matriz(f, c, matriz);
    printf("La matriz transpuesta es:\n");
    imprimir_matriz(c, f, matriz_trans);

    printf("\nLiberando memoria...");
    free(matriz);
    free(matriz_trans);

    
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

void matriz_trranspuesta(int f, int c, int **matriz, int **matriz_trans ){

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_trans[j][i] = matriz[i][j];
        }
    }
}