/*Escribe un programa que solicite al usuario ingresar el tama˜no de dos vectores.
Luego, utiliza malloc() para asignar memoria din´amica para ambos vectores
y permite al usuario ingresar los elementos de ambos vectores. Despu´es, suma
los dos vectores elemento por elemento y almacena el resultado en un tercer
vector din´amico. Finalmente, imprime el vector resultante y libera la memoria
asignada.
*/

#include <stdio.h>
#include <stdlib.h>
void ingresar_datos(int n, int vector[]);
void suma_de_vectores(int n, int vector1[], int vector2[], int vector_sum[]);
void imprimir_vector(int n, int vector[]);
int main()
{
    int n;
    int *vector1 = NULL;
    int *vector2 = NULL;
    int *vector_suma = NULL;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d",&n);

    vector1 = (int*)malloc( n * sizeof(int));
    vector2 = (int*)malloc( n * sizeof(int));
    vector_suma = (int*)malloc(n * sizeof(int));

    if ( vector1 == NULL || vector2 == NULL || vector_suma == NULL)
    {
        printf("Error en la asignacion de espacio...");
        return 0;
    }
    
    printf("##### VECTOR 1 #####\n");
    ingresar_datos(n, vector1);
    printf("##### VECTOR 2 #####\n");
    ingresar_datos(n, vector2);
    suma_de_vectores(n, vector1, vector2, vector_suma);
    printf("==============VECTORES=================\n");
    printf("Vector 1: ");
    imprimir_vector(n, vector1);

    printf("Vector 2: ");
    imprimir_vector(n, vector2);
    
    printf("La suma de los vectores es: ");
    imprimir_vector(n, vector_suma);

    printf("\nLiberando memoria...");
    free(vector1);
    free(vector2);
    free(vector_suma);
    


    return 0;
}

void ingresar_datos(int n, int vector[]){

    
        printf("Ingrese los elementos para el vector: \n");
    for (int i = 0; i < n; i++)
    {
         printf("vector[%d]: ", i);
        scanf("%d", &vector[i]);
    }
    return;
}

void suma_de_vectores(int n, int vector1[], int vector2[], int vector_sum[]){


    for (int i = 0; i < n; i++)
    {
        vector_sum[i] = vector1[i] + vector2[i];
    }
    
}

void imprimir_vector(int n, int vector[]){

    for (int i = 0; i < n; i++)
    {
        printf("%d ",vector[i]);
    }
    printf("\n");
}