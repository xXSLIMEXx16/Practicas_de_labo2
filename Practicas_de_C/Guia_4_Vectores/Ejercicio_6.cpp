/*Crea una funci´on en C que calcule el producto escalar de dos vectores y devuelva
el resultado.*/

#include <stdio.h>
int producto_escalar(int v1[], int v2[], int tamano);

int main()
{
    int vector1[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int vector2[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int producto = 0;

    producto = producto_escalar(vector1, vector2, 10);

    printf("El producto escalar entre los dos vectores es de: %d", producto);

    
    return 0;
}
int producto_escalar(int v1[], int v2[], int tamano){

    int resultado = 0;

    for (int i = 0; i < tamano; i++)
    {
    resultado += v1[i] * v2[i];
    }
    
    return resultado;
}