/*Crea una funci´on en C que encuentre la intersecci´on de dos vectores (elementos
comunes) y devuelva un tercer vector con dichos elementos*/
#include <stdio.h>

void interseccion_de_vectores(int A[], int tamanoA, int B[], int tamanoB, int resultado[], int *tamano_resultado);


int main()
{    
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {3, 4, 5, 6, 7};

    int tamanoA = sizeof(A)/sizeof(A[0]);
    int tamanoB = sizeof(B)/sizeof(B[0]);
    int tamano_interseccion = 0;

    if (tamanoA < tamanoB){
        tamano_interseccion = tamanoB;
    }else{
        tamano_interseccion = tamanoA;
    }

    int interseccion[tamano_interseccion];

    interseccion_de_vectores(A, tamanoA, B, tamanoB, interseccion, &tamano_interseccion);

    
    return 0;
}
void interseccion_de_vectores(int A[], int tamanoA, int B[], int tamanoB, int resultado[], int *tamano_resultado){


    int k = 0;
    for (int i = 0; i < tamanoA; i++)
    {
        for (int j = 0; j < tamanoB; j++)
        {
            if (A[i] == B[j])
            {
                resultado[k] = A[i];
                k++;
            }
        }
        
    }
    *tamano_resultado = k;

    printf("La interseccion de los vectores es: ");
    for (int i = 0; i < *tamano_resultado; i++)
    {
        printf("%d ", resultado[i]);
    }
    printf("\n");
}